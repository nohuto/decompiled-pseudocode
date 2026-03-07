__int64 __fastcall RIMInitOneCoreEditionData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0;
  v12 = 0;
  DestinationString = 0LL;
  v11 = *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 28);
  RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
  result = ZwQueryLicenseValue(&DestinationString, &v13, &v11, 4LL, &v12);
  if ( (int)result >= 0 )
  {
    v9 = v11;
    result = SGDGetUserSessionState(v6, v5, v7, v8);
    *(_DWORD *)(result + 28) = v9;
  }
  return result;
}
