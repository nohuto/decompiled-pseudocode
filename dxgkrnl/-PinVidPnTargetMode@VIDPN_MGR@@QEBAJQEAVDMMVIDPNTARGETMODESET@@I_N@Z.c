__int64 __fastcall VIDPN_MGR::PinVidPnTargetMode(
        VIDPN_MGR *this,
        struct DMMVIDPNTARGETMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rsi
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r13
  int v15; // eax
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+6Ch] [rbp+14h]

  v4 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v4 == -1 )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNTARGETMODESET::PinMode(a2, v4);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = *((_QWORD *)a2 + 14);
    if ( !v12 )
      WdLogSingleEntry0(1LL);
    if ( !*(_QWORD *)(v12 + 40) )
      WdLogSingleEntry0(1LL);
    v13 = *(_QWORD *)(v12 + 40);
    if ( !*(_QWORD *)(v13 + 72) )
      WdLogSingleEntry0(1LL);
    v14 = *(_QWORD *)(v13 + 72);
    LOBYTE(v10) = a4;
    v15 = *(_DWORD *)(v12 + 24);
    v22 = -1;
    v23 = v15;
    v16 = VIDPN_MGR::FormalizeVidPnChange(this, v14 & -(__int64)(v14 != -88), 5LL, v10, &v22);
    v17 = v16;
    if ( v16 >= 0 )
      return 0LL;
    if ( v16 == -1071774970 )
      WdLogSingleEntry2(3LL, v4, a2);
    else
      WdLogSingleEntry3(2LL, v4, a2, v16);
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry4(7LL, v4, *(unsigned int *)(v12 + 24), v14, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
    if ( v8 )
    {
      if ( (int)DMMVIDPNTARGETMODESET::PinMode(a2, *(_DWORD *)(v8 + 24)) < 0 )
        goto LABEL_26;
    }
    else if ( (int)DMMVIDPNTARGETMODESET::UnpinMode(a2, v19, v20, v21) < 0 )
    {
LABEL_26:
      WdLogSingleEntry0(1LL);
    }
    return v17;
  }
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry4(2LL, v4, a2, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v11);
  return (unsigned int)v11;
}
