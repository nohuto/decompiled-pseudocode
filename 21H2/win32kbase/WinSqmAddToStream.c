/*
 * XREFs of WinSqmAddToStream @ 0x1C01676A0
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmEventWrite @ 0x1C005B8DC (WinSqmEventWrite.c)
 *     WinSqmEventEnabled @ 0x1C00B75B4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C00B760C (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned int __fastcall WinSqmAddToStream(struct _GUID *a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int result; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _GUID *v10; // rdi
  const wchar_t *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // r11d
  __int64 v15; // rcx
  ULONGLONG v16; // r9
  int v17; // edi
  void *v18; // rbx
  __int64 v19; // r10
  __int64 v20; // rcx
  const wchar_t **v21; // r10
  __int64 v22; // rax
  ULONG v23; // r11d
  const wchar_t *v24; // r9
  int v25; // eax
  __int64 v26; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-E0h] BYREF
  int *v28; // [rsp+38h] [rbp-D0h]
  __int64 v29; // [rsp+40h] [rbp-C8h]
  void *v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  unsigned int *v32; // [rsp+58h] [rbp-B0h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  _BYTE v34[432]; // [rsp+68h] [rbp-A0h] BYREF
  int v35; // [rsp+260h] [rbp+158h] BYREF
  unsigned int v36; // [rsp+268h] [rbp+160h] BYREF

  v36 = a3;
  v35 = a2;
  result = (unsigned int)memset(v34, 0, sizeof(v34));
  if ( !a4 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v10 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v10 = (struct _GUID *)&unk_1C0267080;
      if ( a1 )
        v10 = a1;
    }
    result = WinSqmEventEnabled(&SQM_ADD_LEGACYSTREAMROW, v10);
    if ( result )
    {
      v12 = v36;
      UserData.Ptr = (ULONGLONG)v10;
      *(_QWORD *)&UserData.Size = 16LL;
      v13 = 0LL;
      if ( v36 > 9 )
        v12 = 9LL;
      v29 = 4LL;
      v36 = v12;
      v28 = &v35;
      v30 = &unk_1C029A528;
      v32 = &v36;
      v31 = 4LL;
      v33 = 4LL;
      if ( (_DWORD)v12 )
      {
        while ( 1 )
        {
          v14 = 3 * v13;
          if ( (unsigned int)(3 * v13 + 6) >= 0x1F )
            break;
          v15 = 2LL * (unsigned int)(v14 + 4);
          v16 = a4 + 16LL * (unsigned int)v13;
          *(&UserData.Ptr + v15) = v16;
          v17 = *(_DWORD *)v16;
          v18 = (void *)(v16 + 8);
          *((_QWORD *)&UserData.Size + v15) = 4LL;
          if ( v17 != 1 )
            v18 = &unk_1C0268B24;
          v19 = a4 + 16LL * (unsigned int)v13;
          if ( v17 != 1 )
            v19 = a4 + 16LL * (unsigned int)v13;
          v20 = 2LL * (unsigned int)(v14 + 5);
          v21 = (const wchar_t **)(v19 + 8);
          *(&UserData.Ptr + v20) = (ULONGLONG)v18;
          *((_QWORD *)&UserData.Size + v20) = 4LL;
          if ( v17 == 2 )
          {
            v21 = (const wchar_t **)(v16 + 8);
            v11 = *(const wchar_t **)(v16 + 8);
          }
          else
          {
            v11 = L"0";
          }
          v22 = -1LL;
          do
            ++v22;
          while ( v11[v22] );
          v23 = 2 * v22 + 2;
          if ( v17 == 2 )
            v24 = *v21;
          else
            v24 = L"0";
          v25 = v13 + 2;
          v13 = (unsigned int)(v13 + 1);
          v26 = 2LL * (unsigned int)(3 * v25);
          *(&UserData.Ptr + v26) = (ULONGLONG)v24;
          *(&UserData.Size + 2 * v26) = v23;
          *(&UserData.Reserved + 2 * v26) = 0;
          if ( (unsigned int)v13 >= (unsigned int)v12 )
            return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, &UserData);
        }
        return MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v13, v12);
      }
      else
      {
        return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, &UserData);
      }
    }
  }
  return result;
}
