/*
 * XREFs of ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02B7E70
 * Callers:
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C028B360 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C028D820 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SendDestroyBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJI@Z @ 0x1C028C67C (-SendDestroyBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJI@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B60C0 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendDestroyBundleObject(DXGSESSIONDATA *this, unsigned int a2)
{
  struct DXGFASTMUTEX *v2; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _EX_RUNDOWN_REF *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  _BYTE v23[8]; // [rsp+20h] [rbp-10h] BYREF
  char v24; // [rsp+28h] [rbp-8h]

  v2 = (DXGSESSIONDATA *)((char *)this + 18880);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v7 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  if ( v7 )
    ++*((_DWORD *)this + 4730);
  if ( v24 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v5);
    v7 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  }
  if ( v7 && ExAcquireRundownProtection(v7 + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2366) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
      v13 = DXG_GUEST_REMOTEOBJECTCHANNEL::SendDestroyBundleObject(
              *(DXG_GUEST_REMOTEOBJECTCHANNEL **)(*((_QWORD *)this + 2366) + 72LL),
              a2,
              v11,
              v12);
      v17 = v13;
      if ( v13 < 0 )
      {
        v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v18 + 24) = v17;
        WdLogEvent5_WdWarning(v18);
      }
      if ( v24 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v14);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL));
    }
    else
    {
      LODWORD(v17) = -2147483611;
      v19 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v19 + 24) = 2LL;
      *(_QWORD *)(v19 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v19);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2366) + 56LL));
  }
  else
  {
    LODWORD(v17) = -2147483611;
    v20 = WdLogNewEntry5_WdWarning(v7, v5, v6);
    *(_QWORD *)(v20 + 24) = 1LL;
    *(_QWORD *)(v20 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v20);
  }
  if ( *((_QWORD *)this + 2366) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, v2, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v24 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v21);
  }
  return (unsigned int)v17;
}
