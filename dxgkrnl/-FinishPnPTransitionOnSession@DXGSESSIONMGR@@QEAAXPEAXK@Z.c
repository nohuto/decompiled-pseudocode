/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1C0214FF4
 * Callers:
 *     DpiFinishPnPTransitionCallback @ 0x1C0214F40 (DpiFinishPnPTransitionCallback.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C02151D0 (-FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransitionOnSession(
        DXGSESSIONMGR *this,
        struct _PNP_TRANS_TOKEN *a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  DXGSESSIONDATA *v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( (unsigned int)v4 < *((_DWORD *)this + 20) && (v6 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8 * v4)) != 0LL )
  {
    if ( (_DWORD)v4 != *((_DWORD *)this + 36) )
      DXGSESSIONDATA::FinishPnPTransitionOnSession(v6, a2);
  }
  else
  {
    WdLogSingleEntry1(3LL, (unsigned int)v4);
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
