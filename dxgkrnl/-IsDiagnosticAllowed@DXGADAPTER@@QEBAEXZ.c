bool __fastcall DXGADAPTER::IsDiagnosticAllowed(DXGADAPTER *this, struct _LUID *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int CurrentProcessSessionId; // eax
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  DXGADAPTER::IsAdapterSessionized(this, a2, 0LL, &v8);
  if ( v8 == 0x100000000LL || IsCurrentProcessAdmin() )
    return 1;
  if ( v8 == 0x200000000LL )
    return IsCurrentConsoleSession();
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2, v4, v5);
  return CurrentProcessSessionId == (_DWORD)v8;
}
