__int64 __fastcall HT_InitSaneLimits(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdi
  PVOID SystemRoutineAddress; // rax
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+58h] [rbp-A8h]
  const wchar_t *v12; // [rsp+60h] [rbp-A0h]
  int *v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+70h] [rbp-90h]
  int *v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+90h] [rbp-70h]
  const wchar_t *v19; // [rsp+98h] [rbp-68h]
  unsigned int *v20; // [rsp+A0h] [rbp-60h]
  int v21; // [rsp+A8h] [rbp-58h]
  int *v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C8h] [rbp-38h]
  __int128 v26; // [rsp+D0h] [rbp-30h]
  __int128 v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+F0h] [rbp-10h]

  v1 = 0;
  v8 = 20000000;
  v7 = 0;
  v5 = 0;
  v6 = 0;
  DestinationString = 0LL;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 48);
  v12 = L"DisableSaneLimits";
  v13 = &v5;
  v15 = &v7;
  v19 = L"HTSurfaceSizeLimit";
  v20 = &v6;
  v22 = &v8;
  v14 = 67108868;
  v16 = 4;
  v21 = 67108868;
  v23 = 4;
  v28 = 0LL;
  v10 = 0LL;
  v11 = 288;
  v17 = 0LL;
  v18 = 288;
  v24 = 0LL;
  v25 = 0;
  v26 = 0LL;
  v27 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  result = ((__int64 (__fastcall *)(__int64, const wchar_t *, __int64 *, _QWORD, _QWORD))SystemRoutineAddress)(
             3LL,
             L"GRE_Initialize",
             &v10,
             0LL,
             0LL);
  if ( !(_DWORD)result )
  {
    LOBYTE(v1) = v5 == 0;
    *(_DWORD *)(v2 + 72) = v1;
    result = v6;
    *(_DWORD *)(v2 + 76) = v6;
  }
  return result;
}
