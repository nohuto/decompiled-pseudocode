/*
 * XREFs of EtwpCoverageFreeStringBuffers @ 0x1409E55C0
 * Callers:
 *     EtwpCoverageEnsureContext @ 0x1408537B4 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x1409E566C (EtwpCoverageReset.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageFreeStringBuffers(__int64 a1, int a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rax

  v2 = (_QWORD *)(a1 + 48);
  v4 = *(_QWORD **)(a1 + 48);
  while ( v4 != v2 )
  {
    v6 = v4;
    v4 = (_QWORD *)*v4;
    if ( a2 && v6 == *(_QWORD **)(a1 + 40) )
    {
      memset(v6 + 5, 0, v6[2] - (_QWORD)v6 - 40LL);
      v6[3] = v6 + 5;
      v6[4] = v6 + 5;
    }
    else
    {
      if ( (_QWORD *)v4[1] != v6 || (v7 = (_QWORD *)v6[1], (_QWORD *)*v7 != v6) )
        __fastfail(3u);
      *v7 = v4;
      v4[1] = v7;
      ExFreePoolWithTag(v6, 0x56777445u);
    }
  }
}
