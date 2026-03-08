/*
 * XREFs of ??4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801B2FE8
 * Callers:
 *     ??$move@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1801B093C (--$move@V-$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V-$checked_array_iterator@.c)
 *     ??$move_backward@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1801B2A74 (--$move_backward@V-$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V-$checked_array_.c)
 *     ??0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z @ 0x1801B2C20 (--0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z.c)
 * Callees:
 *     ??4CBspPreComputeHelper@@QEAAAEAV0@$$QEAV0@@Z @ 0x1801B2CDC (--4CBspPreComputeHelper@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CPreComputeContext::SubTreeContext::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _DWORD *v3; // r11
  _DWORD *v4; // r8

  if ( a1 != a2 )
  {
    CBspPreComputeHelper::operator=(a1, a2);
    v3 = (_DWORD *)(v2 + 360);
    if ( a1 + 360 != v2 + 360 )
    {
      *(_DWORD *)(a1 + 360) = *v3;
      *(_DWORD *)(a1 + 364) = *(_DWORD *)(v2 + 364);
      *(_DWORD *)(a1 + 368) = *(_DWORD *)(v2 + 368);
      *(_QWORD *)(a1 + 376) = *(_QWORD *)(v2 + 376);
      *(_DWORD *)(a1 + 384) = *(_DWORD *)(v2 + 384);
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v2 + 376) = 0LL;
      *(_DWORD *)(v2 + 368) = 0;
      *(_DWORD *)(v2 + 384) = 0;
    }
    v4 = (_DWORD *)(v2 + 392);
    if ( a1 + 392 != v2 + 392 )
    {
      *(_DWORD *)(a1 + 392) = *v4;
      *(_DWORD *)(a1 + 396) = *(_DWORD *)(v2 + 396);
      *(_DWORD *)(a1 + 400) = *(_DWORD *)(v2 + 400);
      *(_QWORD *)(a1 + 408) = *(_QWORD *)(v2 + 408);
      *(_DWORD *)(a1 + 416) = *(_DWORD *)(v2 + 416);
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)(v2 + 408) = 0LL;
      *(_DWORD *)(v2 + 400) = 0;
      *(_DWORD *)(v2 + 416) = 0;
    }
    *(_QWORD *)(a1 + 424) = *(_QWORD *)(v2 + 424);
    *(_QWORD *)(a1 + 432) = *(_QWORD *)(v2 + 432);
    *(_DWORD *)(a1 + 440) = *(_DWORD *)(v2 + 440);
    *(_DWORD *)(a1 + 444) = *(_DWORD *)(v2 + 444);
    *(_BYTE *)(a1 + 448) = *(_BYTE *)(v2 + 448);
    *(_BYTE *)(v2 + 448) = 0;
  }
  return a1;
}
