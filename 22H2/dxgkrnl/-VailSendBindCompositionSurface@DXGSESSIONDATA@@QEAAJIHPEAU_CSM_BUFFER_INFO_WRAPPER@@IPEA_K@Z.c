/*
 * XREFs of ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C02B73F0
 * Callers:
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C028D820 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C028E5D8 (-SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAP.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B60C0 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendBindCompositionSurface(
        DXGSESSIONDATA *this,
        int a2,
        int a3,
        struct _CSM_BUFFER_INFO_WRAPPER *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  struct DXGFASTMUTEX *v6; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _EX_RUNDOWN_REF *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  _BYTE v27[8]; // [rsp+30h] [rbp-10h] BYREF
  char v28; // [rsp+38h] [rbp-8h]

  v6 = (DXGSESSIONDATA *)((char *)this + 18880);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  v13 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  if ( v13 )
    ++*((_DWORD *)this + 4730);
  if ( v28 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v11);
    v13 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  }
  if ( v13 && ExAcquireRundownProtection(v13 + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2366) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
      v17 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendBindCompositionSurface(
              *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2366) + 80LL),
              a2,
              a3,
              a4,
              a5,
              a6);
      v21 = v17;
      if ( v17 < 0 )
      {
        v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
        *(_QWORD *)(v22 + 24) = v21;
        WdLogEvent5_WdWarning(v22);
      }
      if ( v28 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v18);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL));
    }
    else
    {
      LODWORD(v21) = -2147483611;
      v23 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v23 + 24) = 2LL;
      *(_QWORD *)(v23 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v23);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2366) + 56LL));
  }
  else
  {
    LODWORD(v21) = -2147483611;
    v24 = WdLogNewEntry5_WdWarning(v13, v11, v12);
    *(_QWORD *)(v24 + 24) = 1LL;
    *(_QWORD *)(v24 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v24);
  }
  if ( *((_QWORD *)this + 2366) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, v6, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v28 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v25);
  }
  return (unsigned int)v21;
}
