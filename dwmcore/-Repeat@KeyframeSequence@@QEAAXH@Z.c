/*
 * XREFs of ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x1800F92A8
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800573C0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800BCE40 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800BCFD0 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Repeat(KeyframeSequence *this, int a2)
{
  KeyframeSequence *v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // r10
  void *retaddr; // [rsp+28h] [rbp+0h]

  KeyframeSequence::ConfigureTimer(this);
  KeyframeSequence::Play(v4);
  *((_DWORD *)this + 23) += a2;
  v5 = 0LL;
  v6 = *((_DWORD *)this + 28);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 13);
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 24 * v5 + 8) + 20LL) != 1
        && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v7 + 24 * v5 + 8) + 20LL) - 2) >= 2 )
      {
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v6 );
  }
}
