__int64 AllocateProcessHidTable()
{
  __int64 result; // rax
  __int64 v1; // rcx
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  result = Win32AllocPoolWithQuotaZInit(176LL, 1953002325LL);
  v2 = (_QWORD *)result;
  if ( result )
  {
    v3 = (_QWORD *)(result + 16);
    v3[1] = v3;
    *v3 = v3;
    v2[5] = v2 + 4;
    v2[4] = v2 + 4;
    v2[7] = v2 + 6;
    v2[6] = v2 + 6;
    v4 = SGDGetUserSessionState(v1);
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8, (struct RIMLOCK *)(v4 + 288));
    v6 = SGDGetUserSessionState(v5) + 408;
    v7 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
      __fastfail(3u);
    *v2 = v7;
    v2[1] = v6;
    *(_QWORD *)(v7 + 8) = v2;
    *(_QWORD *)v6 = v2;
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8);
    return (__int64)v2;
  }
  return result;
}
