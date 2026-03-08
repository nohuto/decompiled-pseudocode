/*
 * XREFs of ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVisual@@@@@Z @ 0x18004C328
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B254 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800E6DB0 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Push(unsigned int *a1, _OWORD *a2)
{
  void *v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rax
  unsigned int v7; // eax
  unsigned int v9; // ebp
  int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  void *v13; // rbx
  HANDLE ProcessHeap; // rax
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0;
  v15 = 0LL;
  v5 = a1[1];
  if ( *a1 != (_DWORD)v5 )
    goto LABEL_2;
  v9 = 2 * v5;
  if ( (unsigned __int64)(2 * v5) > 0xFFFFFFFF )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024362, 0x64u, 0LL);
    goto LABEL_5;
  }
  if ( v9 <= 0x40 )
    v9 = 64;
  v10 = HrMalloc(0x10uLL, v9, &v15);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x6Bu, 0LL);
    goto LABEL_16;
  }
  v12 = 16LL * *a1;
  if ( v12 > 0xFFFFFFFF )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0x6Du, 0LL);
LABEL_16:
    v2 = v15;
    goto LABEL_5;
  }
  v13 = v15;
  v3 = 0;
  memcpy_0(v15, *((const void **)a1 + 2), (unsigned int)v12);
  operator delete(*((void **)a1 + 2));
  *((_QWORD *)a1 + 2) = v13;
  v2 = 0LL;
  a1[1] = v9;
LABEL_2:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * *a1) = *a2;
  v7 = a1[6];
  if ( v7 <= ++*a1 )
    v7 = *a1;
  a1[6] = v7;
LABEL_5:
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  return v3;
}
