/*
 * XREFs of PiSwPropertySet @ 0x140785B60
 * Callers:
 *     PiSwIrpPropertySet @ 0x1407857F8 (PiSwIrpPropertySet.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x1408086D4 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x140808A64 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PiPnpRtlSetObjectProperty @ 0x140686898 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     _PnpOpenObjectRegKey @ 0x1406CECB8 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiSwPropertySet(const WCHAR *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  STRSAFE_PCNZWCH *v10; // rdi
  int v11; // eax
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+60h] [rbp-28h] BYREF

  P = 0LL;
  Handle = 0LL;
  v8 = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a1, a2, 7, 0, (__int64)&Handle);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = (STRSAFE_PCNZWCH *)(a3 + 40);
        do
        {
          v11 = PiPnpRtlSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  a1,
                  a2,
                  (__int64)Handle,
                  (__int64)*(v10 - 2),
                  (__int64)(v10 - 5),
                  *((_DWORD *)v10 - 2),
                  *v10,
                  *((_DWORD *)v10 - 1),
                  0);
          v8 = v11;
          if ( v11 == -1073741275 )
          {
            if ( *((_DWORD *)v10 - 2) )
              break;
            v8 = 0;
          }
          else if ( v11 < 0 )
          {
            break;
          }
          ++v9;
          v10 += 6;
        }
        while ( v9 < a4 );
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v8;
}
