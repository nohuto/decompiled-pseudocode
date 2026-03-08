/*
 * XREFs of ViFaultsGetBaseImageName @ 0x140AD3750
 * Callers:
 *     ViCreateProcessCallbackInternal @ 0x140AD3224 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ViFaultsGetBaseImageName(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  _WORD *i; // rcx
  _WORD *v5; // rcx
  __int16 v6; // r8

  v2 = *a1;
  if ( (_WORD)v2 )
  {
    v3 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(v3 + 2 * ((v2 >> 1) - 1)); (unsigned __int64)i >= v3 && *i != 92; --i )
      ;
    v5 = i + 1;
    *(_QWORD *)(a2 + 8) = v5;
    v6 = v3 + v2 - (_WORD)v5;
    *(_WORD *)a2 = v6;
    *(_WORD *)(a2 + 2) = v6;
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)a1;
  }
}
