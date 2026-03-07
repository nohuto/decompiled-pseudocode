void __fastcall ResetPendingPromotion(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = SGDGetUserSessionState(a1);
  v2 = *(_QWORD *)(v1 + 16288);
  if ( v2 )
    *(_DWORD *)(v2 + 1160) = 0;
  *(_WORD *)(v1 + 16280) = 0;
  *(_DWORD *)(v1 + 16284) = 0;
  *(_QWORD *)(v1 + 16288) = 0LL;
  *(_DWORD *)(v1 + 16296) = 0;
}
