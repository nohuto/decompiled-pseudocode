/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0
 * Callers:
 *     GreDCSelectPen @ 0x1C0005440 (GreDCSelectPen.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     GreDCSelectBrush @ 0x1C00457E0 (GreDCSelectBrush.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00438B0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct HOBJ__ **a1)
{
  struct HOBJ__ *v1; // rbx
  int v2; // edi
  int v3; // esi
  _DWORD *v4; // rax
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    v1 = *a1;
    if ( (unsigned __int16)HmgDecrementShareReferenceCountEx(a1, 0LL) == 1 )
    {
      v2 = 0;
      v5 = 0LL;
      v6 = 0;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v5, v1, 16);
      v3 = v6;
      if ( v6 )
      {
        v4 = (_DWORD *)*((_QWORD *)HANDLELOCK::pObj((HANDLELOCK *)&v5) + 6);
        if ( v4 )
          v2 = *v4 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
        v3 = v6;
      }
      if ( v2 )
        bDeleteBrush(v1);
      if ( v3 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
    }
  }
}
