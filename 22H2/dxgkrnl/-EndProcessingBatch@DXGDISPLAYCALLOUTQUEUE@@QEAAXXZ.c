/*
 * XREFs of ?EndProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAXXZ @ 0x1C0269B60
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x1C0298750 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGDISPLAYCALLOUTQUEUE::EndProcessingBatch(DXGDISPLAYCALLOUTQUEUE *this)
{
  __int64 v2; // rdx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  *((_QWORD *)this + 7) = 0LL;
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3, v2);
}
