/*
 * XREFs of ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVectorShape@@@@@Z @ 0x180084808
 * Callers:
 *     ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x180084728 (-GotoFirstChild@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Push(unsigned int *a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v6; // ecx
  unsigned int v8; // esi
  HANDLE ProcessHeap; // rax
  void *v10; // rbp
  unsigned __int64 v11; // rax
  void *v12; // r14
  HANDLE v13; // rax
  HANDLE v14; // rax

  v2 = a1[1];
  v3 = 0;
  if ( *a1 != (_DWORD)v2 )
    goto LABEL_2;
  v8 = 2 * v2;
  if ( (unsigned __int64)(2 * v2) > 0xFFFFFFFF )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024362, 0x64u, 0LL);
    return v3;
  }
  if ( v8 <= 0x40 )
    v8 = 64;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v8 <= 0x10 )
  {
    v3 = -2147024809;
    goto LABEL_18;
  }
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 16LL * v8);
  if ( !v10 )
  {
    v3 = -2147024882;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v3, 0x6Bu, 0LL);
    return v3;
  }
  v11 = 16LL * *a1;
  if ( v11 > 0xFFFFFFFF )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024362, 0x6Du, 0LL);
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v10);
    return v3;
  }
  v3 = 0;
  memcpy_0(v10, *((const void **)a1 + 2), (unsigned int)v11);
  v12 = (void *)*((_QWORD *)a1 + 2);
  if ( v12 )
  {
    v13 = GetProcessHeap();
    HeapFree(v13, 0, v12);
  }
  *((_QWORD *)a1 + 2) = v10;
  a1[1] = v8;
LABEL_2:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * *a1) = *a2;
  v6 = a1[6];
  if ( v6 <= ++*a1 )
    v6 = *a1;
  a1[6] = v6;
  return v3;
}
