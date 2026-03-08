/*
 * XREFs of ?DmmSetVidPnTargetPowerComponentIndex@@YAJPEAVVIDPN_MGR@@II@Z @ 0x1C01E9D24
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01E9C8C (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00496E0 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 */

__int64 __fastcall DmmSetVidPnTargetPowerComponentIndex(struct VIDPN_MGR *a1, unsigned int a2, int a3)
{
  __int64 v3; // r14
  __int64 v6; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v8; // edi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v11, (__int64)a1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
  v6 = *((_QWORD *)a1 + 15);
  v10 = v6;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v6, v3);
  v8 = 0;
  if ( TargetById )
  {
    *((_DWORD *)TargetById + 100) = a3;
    if ( v6 )
      ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  }
  else
  {
    if ( !*((_QWORD *)a1 + 1) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(2LL, v3, *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL));
    auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v10);
    v8 = -1071774971;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return v8;
}
