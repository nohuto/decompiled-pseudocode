/*
 * XREFs of ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800BCE40
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800BCD94 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x1800F92A8 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 * Callees:
 *     ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800BCF6C (-SortKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800BCFD0 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Play(KeyframeSequence *this)
{
  char v1; // al
  __int64 v3; // r10
  __int64 v4; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 140);
  if ( (v1 & 1) != 0 )
  {
    *((_BYTE *)this + 140) = v1 | 2;
  }
  else
  {
    KeyframeSequence::SortKeyFrames(this);
    KeyframeSequence::ConfigureTimer(this);
    v3 = 0LL;
    if ( *((_DWORD *)this + 28) )
    {
      v4 = *((_QWORD *)this + 13);
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v4 + 24 * v3 + 8) + 20LL) != 1
          && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 24 * v3 + 8) + 20LL) - 2) >= 2 )
        {
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)this + 28) );
    }
    *((_BYTE *)this + 140) |= 3u;
  }
}
