/*
 * XREFs of WinSqmSetString @ 0x1C0167D5C
 * Callers:
 *     ldevLoadDriver @ 0x1C0075290 (ldevLoadDriver.c)
 * Callees:
 *     WinSqmEventWrite @ 0x1C005B8DC (WinSqmEventWrite.c)
 *     WinSqmEventEnabled @ 0x1C00B75B4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C00B760C (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

NTSTATUS __fastcall WinSqmSetString(__int64 a1, __int64 a2, const wchar_t *a3)
{
  ULONGLONG v4; // rdi
  NTSTATUS result; // eax
  unsigned int v6; // ecx
  signed __int64 v7; // rbx
  _WORD *v8; // rax
  __int16 v9; // dx
  __int64 v10; // rax
  int v11; // [rsp+28h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-79h] BYREF
  int *v13; // [rsp+48h] [rbp-69h]
  __int64 v14; // [rsp+50h] [rbp-61h]
  void *v15; // [rsp+58h] [rbp-59h]
  __int64 v16; // [rsp+60h] [rbp-51h]
  _WORD *v17; // [rsp+68h] [rbp-49h]
  int v18; // [rsp+70h] [rbp-41h]
  int v19; // [rsp+74h] [rbp-3Dh]
  _WORD v20[64]; // [rsp+78h] [rbp-39h] BYREF

  v11 = 8969;
  memset(v20, 0, sizeof(v20));
  v4 = (ULONGLONG)&unk_1C0267080;
  if ( (unsigned int)IsExtendedWinSqmHandle(0LL) )
    v4 = 24LL;
  result = WinSqmEventEnabled(&SQM_SET_STRING, (void *)v4);
  if ( result )
  {
    if ( !a3 || !*a3 )
      a3 = L"(null)";
    v6 = 64;
    v7 = (char *)a3 - (char *)v20;
    v8 = v20;
    do
    {
      v9 = *(_WORD *)((char *)v8 + v7);
      if ( !v9 )
        break;
      *v8 = v9;
      --v6;
      ++v8;
    }
    while ( v6 > 1 );
    *v8 = 0;
    UserData.Ptr = v4;
    v13 = &v11;
    *(_QWORD *)&UserData.Size = 16LL;
    v15 = &unk_1C029A528;
    v17 = v20;
    v10 = -1LL;
    v14 = 4LL;
    v16 = 4LL;
    do
      ++v10;
    while ( v20[v10] );
    v19 = 0;
    v18 = 2 * v10 + 2;
    return WinSqmEventWrite(&SQM_SET_STRING, 4u, &UserData);
  }
  return result;
}
