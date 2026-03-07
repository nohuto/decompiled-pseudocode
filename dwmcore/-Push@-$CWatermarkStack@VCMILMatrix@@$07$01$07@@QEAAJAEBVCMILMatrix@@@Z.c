__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Push(unsigned int *a1, __int64 a2)
{
  void *v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v11; // ebp
  int v12; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rcx
  void *v15; // rbx
  HANDLE ProcessHeap; // rax
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0;
  v17 = 0LL;
  v5 = a1[1];
  if ( *a1 != (_DWORD)v5 )
    goto LABEL_2;
  v11 = 2 * v5;
  if ( (unsigned __int64)(2 * v5) > 0xFFFFFFFF )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024362, 0x64u, 0LL);
    goto LABEL_5;
  }
  if ( v11 <= 8 )
    v11 = 8;
  v12 = HrMalloc(0x44uLL, v11, &v17);
  v3 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6Bu, 0LL);
    goto LABEL_16;
  }
  v14 = 68LL * *a1;
  if ( v14 > 0xFFFFFFFF )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0x6Du, 0LL);
LABEL_16:
    v2 = v17;
    goto LABEL_5;
  }
  v15 = v17;
  v3 = 0;
  memcpy_0(v17, *((const void **)a1 + 2), (unsigned int)v14);
  operator delete(*((void **)a1 + 2));
  *((_QWORD *)a1 + 2) = v15;
  v2 = 0LL;
  a1[1] = v11;
LABEL_2:
  v7 = *((_QWORD *)a1 + 2);
  v8 = 68LL * *a1;
  *(_OWORD *)(v8 + v7) = *(_OWORD *)a2;
  *(_OWORD *)(v8 + v7 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v8 + v7 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v8 + v7 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(v8 + v7 + 64) = *(_DWORD *)(a2 + 64);
  v9 = a1[6];
  if ( v9 <= ++*a1 )
    v9 = *a1;
  a1[6] = v9;
LABEL_5:
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  return v3;
}
