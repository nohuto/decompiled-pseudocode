__int64 __fastcall DxgkNotifyDisplayChange(__int64 a1)
{
  char v1; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  void (__fastcall *v8)(__int64); // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current && (v7 = *((_QWORD *)Current + 11)) != 0 && (v8 = *(void (__fastcall **)(__int64))(v7 + 368)) != 0LL )
  {
    LOBYTE(v4) = v1;
    v8(v4);
    return 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4, v3, v5, v6);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v15 = PsGetCurrentProcessSessionId(v12, v11, v13, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the DxgkEng function table for session 0x%I64x, returning 0x%I64x.",
      v15,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
