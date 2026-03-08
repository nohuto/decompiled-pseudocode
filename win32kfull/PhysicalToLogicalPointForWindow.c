/*
 * XREFs of PhysicalToLogicalPointForWindow @ 0x1C01BAF3C
 * Callers:
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0067EB8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 * Callees:
 *     TransformVector @ 0x1C01E7DD8 (TransformVector.c)
 */

__int64 __fastcall PhysicalToLogicalPointForWindow(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 216);
  result = (__int64)a3;
  *a3 = a1;
  if ( v3 )
    return TransformVector(v3, (_DWORD)a3, (int)a3 + 4, 0, 1);
  return result;
}
