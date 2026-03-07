void __fastcall VIDMM_GLOBAL::SendBudgetChangeNotifications(VIDMM_GLOBAL *this)
{
  int updated; // eax
  __int64 v2; // rcx
  _BYTE v3[20]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v4; // [rsp+64h] [rbp-44h]
  __int128 v5; // [rsp+74h] [rbp-34h]
  __int64 v6; // [rsp+84h] [rbp-24h]
  int v7; // [rsp+8Ch] [rbp-1Ch]

  *(_OWORD *)&v3[4] = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  *(_QWORD *)v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 404LL);
  updated = ZwUpdateWnfStateData(&WNF_DX_VIDMM_BUDGETCHANGE_NOTIFICATION, v3, 64LL);
  if ( updated < 0 )
  {
    WdLogSingleEntry1(1LL, updated);
    DxgkLogInternalTriageEvent(v2, 0x40000LL);
  }
}
