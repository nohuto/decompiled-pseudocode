/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800E226C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D5798 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D5988 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(const void **a1, _BYTE *a2)
{
  __int64 v2; // rax
  void *v3; // rbx
  unsigned int v4; // esi
  unsigned int v7; // eax
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // rcx
  void *v12; // rbx
  HANDLE ProcessHeap; // rax
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((unsigned int *)a1 + 1);
  v3 = 0LL;
  v4 = 0;
  v14 = 0LL;
  if ( *(_DWORD *)a1 == (_DWORD)v2 )
  {
    v9 = 2 * v2;
    if ( (unsigned __int64)(2 * v2) > 0xFFFFFFFF )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024362, 0x64u, 0LL);
      goto LABEL_5;
    }
    if ( v9 <= 0x40 )
      v9 = 64;
    v10 = HrMalloc(1uLL, v9, &v14);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x6Bu, 0LL);
      v3 = v14;
      goto LABEL_5;
    }
    v12 = v14;
    v4 = 0;
    memcpy_0(v14, a1[2], *(unsigned int *)a1);
    operator delete((void *)a1[2]);
    a1[2] = v12;
    v3 = 0LL;
    *((_DWORD *)a1 + 1) = v9;
  }
  *((_BYTE *)a1[2] + *(unsigned int *)a1) = *a2;
  v7 = *((_DWORD *)a1 + 6);
  if ( v7 <= ++*(_DWORD *)a1 )
    v7 = *(_DWORD *)a1;
  *((_DWORD *)a1 + 6) = v7;
LABEL_5:
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  return v4;
}
