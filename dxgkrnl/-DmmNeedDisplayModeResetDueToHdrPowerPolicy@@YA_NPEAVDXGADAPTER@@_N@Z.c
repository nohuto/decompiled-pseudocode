char __fastcall DmmNeedDisplayModeResetDueToHdrPowerPolicy(struct DXGADAPTER *a1, char a2)
{
  char v2; // bl
  __int64 v5; // rax
  VIDPN_MGR *v6; // rsi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdi
  DMMVIDPNTARGET *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  struct DMMVIDPNTARGETMODESET *v19; // [rsp+50h] [rbp+30h] BYREF
  __int64 v20; // [rsp+60h] [rbp+40h] BYREF
  __int64 v21; // [rsp+68h] [rbp+48h] BYREF

  v2 = 0;
  if ( a1 )
  {
    v5 = *((_QWORD *)a1 + 365);
    if ( !v5 || (v6 = *(VIDPN_MGR **)(v5 + 104)) == 0LL )
    {
      WdLogSingleEntry1(2LL, a1);
      return 0;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, *(_QWORD *)(v5 + 104));
    v20 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v6);
    auto_rc<DMMVIDPN const>::reset(&v20, (__int64)ClientCommittedVidPnRef);
    if ( !v20 )
    {
      WdLogSingleEntry1(2LL, a1);
      goto LABEL_27;
    }
    v8 = v20 + 120;
    v9 = *(_QWORD *)(v20 + 120);
    if ( v9 == v20 + 120 || (v10 = v9 - 8) == 0 )
    {
LABEL_27:
      auto_rc<DMMVIDPN const>::reset(&v20, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
      return v2;
    }
    while ( 1 )
    {
      v11 = *(DMMVIDPNTARGET **)(v10 + 96);
      if ( !v11 )
        WdLogSingleEntry0(1LL);
      v12 = *((_QWORD *)v11 + 12);
      if ( !*(_BYTE *)(v12 + 419) )
        goto LABEL_22;
      v13 = *(_QWORD *)(v12 + 112);
      LOBYTE(v19) = 0;
      MonitorIsAdvancedColorEnabled(v13, &v19);
      if ( !(_BYTE)v19 )
        goto LABEL_22;
      v19 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v11);
      v14 = *((_QWORD *)v19 + 18);
      if ( v14 )
      {
        v15 = *(_DWORD *)(v14 + 136);
        if ( v15 != 12 && v15 != 32 )
        {
          v16 = a2 == 0;
          goto LABEL_20;
        }
        if ( !a2 )
          goto LABEL_26;
        if ( v15 != 12 )
        {
          v16 = v15 == 32;
LABEL_20:
          if ( !v16 )
          {
LABEL_26:
            auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v19, 0LL);
            v2 = 1;
            goto LABEL_27;
          }
        }
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v19, 0LL);
LABEL_22:
      v17 = *(_QWORD *)(v10 + 8);
      v10 = v17 - 8;
      if ( v17 == v8 )
        v10 = 0LL;
      if ( !v10 )
        goto LABEL_27;
    }
  }
  WdLogSingleEntry0(2LL);
  return 0;
}
