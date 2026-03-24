/*
 * XREFs of ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02B8074
 * Callers:
 *     ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C028D5F0 (-InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SendEnqueueFlipExToken@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C028E900 (-SendEnqueueFlipExToken@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI_K0PEAUtagCloneableFlipTokenDa.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B60C0 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendEnqueueFlipExToken(
        DXGSESSIONDATA *this,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tagCloneableFlipTokenData *a5)
{
  struct DXGFASTMUTEX *v5; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _EX_RUNDOWN_REF *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  _BYTE v26[8]; // [rsp+30h] [rbp-10h] BYREF
  char v27; // [rsp+38h] [rbp-8h]

  v5 = (DXGSESSIONDATA *)((char *)this + 18880);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  v12 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  if ( v12 )
    ++*((_DWORD *)this + 4730);
  if ( v27 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v10);
    v12 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  }
  if ( v12 && ExAcquireRundownProtection(v12 + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2366) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
      v16 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendEnqueueFlipExToken(
              *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2366) + 80LL),
              a2,
              a3,
              a4,
              a5);
      v20 = v16;
      if ( v16 < 0 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = v20;
        WdLogEvent5_WdWarning(v21);
      }
      if ( v27 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v17);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL));
    }
    else
    {
      LODWORD(v20) = -2147483611;
      v22 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v22 + 24) = 2LL;
      *(_QWORD *)(v22 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v22);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2366) + 56LL));
  }
  else
  {
    LODWORD(v20) = -2147483611;
    v23 = WdLogNewEntry5_WdWarning(v12, v10, v11);
    *(_QWORD *)(v23 + 24) = 1LL;
    *(_QWORD *)(v23 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v23);
  }
  if ( *((_QWORD *)this + 2366) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, v5, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v27 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v24);
  }
  return (unsigned int)v20;
}
