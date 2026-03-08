/*
 * XREFs of ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800BD040
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800573C0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800BAE5C (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BCCD8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800BCD94 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x180236D40 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::PrepareSequenceForIteration(CKeyframeAnimation *this, int a2)
{
  int v2; // eax
  int v4; // xmm1_4
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdx
  char v8; // cl

  v2 = *((_DWORD *)this + 143);
  v4 = (int)FLOAT_1_0;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      v5 = *((_BYTE *)this + 581) >> 3;
      if ( (a2 & 1) != 0 )
        v5 = ~v5;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = *((_BYTE *)this + 581) >> 3;
  }
  v6 = *((_DWORD *)this + 136);
  if ( v6 >= 0 && a2 == v6 && *((float *)this + 138) != 1.0 )
    v4 = *((_DWORD *)this + 138);
  *(_BYTE *)(*((_QWORD *)this + 49) + 140LL) ^= (*(_BYTE *)(*((_QWORD *)this + 49) + 140LL) ^ (8 * v5)) & 8;
  v7 = *((_QWORD *)this + 49);
  v8 = *(_BYTE *)(v7 + 140) & 0xEF | (*((float *)this + 132) >= 0.0 ? 0 : 0x10);
  *(_BYTE *)(v7 + 140) = v8;
  *(_BYTE *)(v7 + 96) = (v8 & 0x10) != 0;
  *(_DWORD *)(*((_QWORD *)this + 49) + 132LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 49) + 136LL) = v4;
}
