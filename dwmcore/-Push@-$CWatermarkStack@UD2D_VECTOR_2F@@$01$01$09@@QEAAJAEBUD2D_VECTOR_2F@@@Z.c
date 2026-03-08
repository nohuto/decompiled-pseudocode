/*
 * XREFs of ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x1800C4B0C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800C4598 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push(unsigned int *a1, _QWORD *a2)
{
  void *v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rax
  unsigned int v7; // eax
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // rcx
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
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024362, 0x64u, 0LL);
    goto LABEL_5;
  }
  if ( v9 <= 2 )
    v9 = 2;
  v10 = HrMalloc(8uLL, v9, &v15);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x6Bu, 0LL);
    goto LABEL_16;
  }
  v12 = 8LL * *a1;
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
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * *a1) = *a2;
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
