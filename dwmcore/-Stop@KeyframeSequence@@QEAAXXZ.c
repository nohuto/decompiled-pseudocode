/*
 * XREFs of ?Stop@KeyframeSequence@@QEAAXXZ @ 0x1800BD1C0
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BCCD8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Stop(KeyframeSequence *this)
{
  __int64 v1; // r9
  __int64 v2; // r10
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    v2 = *((_QWORD *)this + 13);
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 24 * v1 + 8) + 20LL) != 1
        && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v2 + 24 * v1 + 8) + 20LL) - 2) >= 2 )
      {
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      }
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < *((_DWORD *)this + 28) );
  }
  v3 = *((_DWORD *)this + 20);
  *((_BYTE *)this + 140) &= 0xFCu;
  *((_DWORD *)this + 23) = v3;
}
