/*
 * XREFs of PiDrvDbQuerySyncNodesUpdated @ 0x1408B6B44
 * Callers:
 *     PpDevCfgInit @ 0x140A52024 (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     RtlCompareMemory @ 0x140407830 (RtlCompareMemory.c)
 *     _PnpGetObjectProperty @ 0x1406B095C (_PnpGetObjectProperty.c)
 *     _PnpCtxRegCreateTree @ 0x1406B7058 (_PnpCtxRegCreateTree.c)
 *     RtlGetPersistedStateLocation @ 0x1406B87A0 (RtlGetPersistedStateLocation.c)
 *     _RegRtlQueryValue @ 0x1406BB0F8 (_RegRtlQueryValue.c)
 *     _RegRtlSetValue @ 0x140768114 (_RegRtlSetValue.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbQuerySyncNodesUpdated(char a1, char *a2)
{
  char v3; // r15
  SIZE_T BufferLengthIn; // rsi
  int PersistedStateLocation; // ebx
  WCHAR *TargetPath; // rdi
  __int64 i; // rsi
  const WCHAR *v10; // rdx
  int v11; // [rsp+60h] [rbp-20h] BYREF
  int v12; // [rsp+64h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h]
  __int64 Source2; // [rsp+70h] [rbp-10h] BYREF
  __int64 Source1; // [rsp+78h] [rbp-8h] BYREF
  ULONG BufferLengthOut; // [rsp+D0h] [rbp+50h] BYREF
  int v17; // [rsp+D8h] [rbp+58h] BYREF

  v3 = 0;
  Handle = 0LL;
  Source1 = 0LL;
  Source2 = 0LL;
  BufferLengthIn = 520LL;
  v17 = 0;
  v11 = 0;
  v12 = 0;
  for ( BufferLengthOut = 0; ; BufferLengthIn = BufferLengthOut )
  {
    TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, BufferLengthIn, 0x62647050u);
    if ( !TargetPath )
    {
      PersistedStateLocation = -1073741670;
      goto LABEL_7;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"DriverDatabaseUpdates",
                               0LL,
                               L"\\Registry\\Machine\\System\\DriverDatabase\\Updates",
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    if ( PersistedStateLocation != -2147483643 )
      break;
    ExFreePoolWithTag(TargetPath, 0);
    TargetPath = 0LL;
    if ( BufferLengthOut <= (unsigned int)BufferLengthIn )
    {
      PersistedStateLocation = -1073741595;
      break;
    }
  }
  if ( PersistedStateLocation >= 0 )
  {
    PersistedStateLocation = PnpCtxRegCreateTree(0LL);
    if ( PersistedStateLocation >= 0 )
    {
      for ( i = PiDrvDbNodeList; (__int64 *)i != &PiDrvDbNodeList; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 64) & 4) == 0 || !PnpBootMode )
        {
          if ( (int)PnpGetObjectProperty(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(i + 24),
                      7LL,
                      *(_QWORD *)(i + 72),
                      0LL,
                      (__int64)DEVPKEY_DriverDatabase_LastUpdateDate,
                      (__int64)&v17,
                      (__int64)&Source1,
                      8,
                      (__int64)&v11,
                      0) >= 0
            && v17 == 16
            && v11 == 8 )
          {
            v10 = *(const WCHAR **)(i + 24);
            BufferLengthOut = 8;
            PersistedStateLocation = RegRtlQueryValue(Handle, v10, &v12, &Source2, &BufferLengthOut);
            if ( PersistedStateLocation < 0 || v12 != 3 || BufferLengthOut != 8 )
            {
              PersistedStateLocation = 0;
              Source2 = 0LL;
            }
            if ( RtlCompareMemory(&Source1, &Source2, 8uLL) != 8 )
            {
              v3 = 1;
              if ( !a1 )
                break;
              PersistedStateLocation = RegRtlSetValue(Handle, *(const WCHAR **)(i + 24), 3u, &Source1, 8u);
              if ( PersistedStateLocation < 0 )
                goto LABEL_7;
            }
          }
          else
          {
            PersistedStateLocation = 0;
          }
        }
      }
      if ( a2 )
        *a2 = v3;
    }
  }
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  return (unsigned int)PersistedStateLocation;
}
