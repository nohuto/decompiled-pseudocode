/*
 * XREFs of WinSqmAddToStream @ 0x1C013A060
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmEventEnabled @ 0x1C0078A58 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0078AB0 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00B1428 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

unsigned int __fastcall WinSqmAddToStream(struct _GUID *a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int result; // eax
  struct _GUID *v7; // rdi
  unsigned int v8; // r11d
  unsigned int v9; // r9d
  int v10; // r8d
  __int64 v11; // rcx
  ULONGLONG v12; // rdx
  int v13; // ebx
  void *v14; // r10
  __int64 v15; // rcx
  const wchar_t *v16; // r8
  __int64 v17; // rax
  ULONG v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-D0h] BYREF
  int *v22; // [rsp+48h] [rbp-C0h]
  __int64 v23; // [rsp+50h] [rbp-B8h]
  void *v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h]
  unsigned int *v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  _BYTE v28[432]; // [rsp+78h] [rbp-90h] BYREF
  int v29; // [rsp+270h] [rbp+168h] BYREF
  unsigned int v30; // [rsp+278h] [rbp+170h] BYREF

  v30 = a3;
  v29 = a2;
  result = (unsigned int)memset(v28, 0, sizeof(v28));
  if ( !a4 )
    result = MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1422);
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v7 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v7 = (struct _GUID *)&unk_1C020EFC8;
      if ( a1 )
        v7 = a1;
    }
    result = WinSqmEventEnabled(&SQM_ADD_LEGACYSTREAMROW, v7);
    if ( result )
    {
      v8 = v30;
      UserData.Ptr = (ULONGLONG)v7;
      *(_QWORD *)&UserData.Size = 16LL;
      v9 = 0;
      if ( v30 > 9 )
        v8 = 9;
      v23 = 4LL;
      v30 = v8;
      v22 = &v29;
      v24 = &unk_1C0255868;
      v26 = &v30;
      v25 = 4LL;
      v27 = 4LL;
      if ( v8 )
      {
        while ( 1 )
        {
          v10 = 3 * v9;
          if ( 3 * v9 + 6 >= 0x1F )
            break;
          v11 = 2LL * (unsigned int)(v10 + 4);
          v12 = a4 + 16LL * v9;
          *(&UserData.Ptr + v11) = v12;
          v13 = *(_DWORD *)v12;
          v14 = (void *)(v12 + 8);
          *((_QWORD *)&UserData.Size + v11) = 4LL;
          if ( v13 != 1 )
            v14 = &unk_1C02258C4;
          v15 = 2LL * (unsigned int)(v10 + 5);
          *(&UserData.Ptr + v15) = (ULONGLONG)v14;
          *((_QWORD *)&UserData.Size + v15) = 4LL;
          if ( v13 == 2 )
            v16 = *(const wchar_t **)(v12 + 8);
          else
            v16 = L"0";
          v17 = -1LL;
          do
            ++v17;
          while ( v16[v17] );
          v18 = 2 * v17 + 2;
          v19 = v9 + 2;
          ++v9;
          v20 = 6LL * v19;
          *(&UserData.Ptr + v20) = (ULONGLONG)v16;
          *(&UserData.Size + 2 * v20) = v18;
          *(&UserData.Reserved + 2 * v20) = 0;
          if ( v9 >= v8 )
            return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, &UserData);
        }
        return MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1477);
      }
      else
      {
        return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, &UserData);
      }
    }
  }
  return result;
}
