__int64 __fastcall DrvNotifySessionStateChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = (unsigned int)a1;
  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 8)
    && IS_USERCRIT_OWNED_AT_ALL(v6, v5, v7, v8)
    && (unsigned int)(v4 - 3) > 1 )
  {
    WdLogSingleEntry0(1LL);
  }
  PsGetCurrentProcessSessionId();
  WdLogSingleEntry2(4LL, v4);
  if ( qword_1C02D60F0 )
    return qword_1C02D60F0((unsigned int)v4);
  else
    return 3221225659LL;
}
