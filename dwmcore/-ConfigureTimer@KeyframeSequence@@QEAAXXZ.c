/*
 * XREFs of ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800BCFD0
 * Callers:
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x180020014 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180056B00 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800BAE5C (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BCCD8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800BCE40 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x1800F92A8 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x180236D40 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyframeSequence::ConfigureTimer(KeyframeSequence *this)
{
  float v1; // xmm1_4
  bool v2; // r8
  int v3; // r9d
  int v4; // edx
  float v5; // xmm1_4
  int v6; // eax

  v1 = *((float *)this + 34);
  v2 = (*((_BYTE *)this + 140) & 0x10) != 0;
  if ( v1 == 1.0 )
  {
    v3 = *((_DWORD *)this + 30);
    v4 = v3;
  }
  else
  {
    v4 = *((_DWORD *)this + 30);
    v3 = (int)(float)((float)v4 * v1);
  }
  v5 = *((float *)this + 33);
  if ( v5 == 0.0 )
    v6 = 0;
  else
    v6 = (int)(float)((float)v4 * v5);
  *((_DWORD *)this + 20) = v6;
  *((_DWORD *)this + 21) = v3;
  *((_DWORD *)this + 22) = v4;
  *((_BYTE *)this + 96) = v2;
  *((_DWORD *)this + 23) = v6;
  *((_BYTE *)this + 140) |= 0x20u;
}
