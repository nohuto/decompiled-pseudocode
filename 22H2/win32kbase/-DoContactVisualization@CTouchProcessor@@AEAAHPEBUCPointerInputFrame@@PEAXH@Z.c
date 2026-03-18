/*
 * XREFs of ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C01C1D10
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01C1DC8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0052938 (HMValidateHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualization(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // esi

  v4 = 0;
  v7 = 0;
  if ( a4 )
  {
    v8 = HMValidateHandle(a3, 0x13u);
    if ( v8 )
      v7 = *(_DWORD *)(*(_QWORD *)(v8 + 472) + 808LL);
    else
      v7 = 1;
  }
  v9 = *((_QWORD *)a2 + 30);
  v10 = *((_DWORD *)a2 + 12);
  if ( qword_1C0296A80 && (int)qword_1C0296A80(this, a2, a3) >= 0 && qword_1C0296A88 )
    return (unsigned int)qword_1C0296A88(v10, v9, 480LL, a4, v7);
  return v4;
}
