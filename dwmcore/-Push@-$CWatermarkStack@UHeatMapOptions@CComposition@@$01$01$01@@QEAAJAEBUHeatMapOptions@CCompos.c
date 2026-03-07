__int64 __fastcall CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // eax
  void *v3; // rdi
  unsigned int v6; // esi
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // eax
  void *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[1];
  v3 = 0LL;
  v6 = 0;
  v16 = 0LL;
  if ( *a1 != v2 )
    goto LABEL_8;
  v7 = 2LL * v2;
  if ( v7 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024362, 0x64u, 0LL);
    goto LABEL_11;
  }
  if ( (unsigned int)v7 <= 2 )
    LODWORD(v7) = 2;
  v8 = HrMalloc(0x18uLL, (unsigned int)v7, &v16);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6Bu, 0LL);
    goto LABEL_14;
  }
  v10 = 24LL * *a1;
  if ( v10 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0x6Du, 0LL);
LABEL_14:
    v3 = v16;
    goto LABEL_11;
  }
  v11 = v16;
  v6 = 0;
  memcpy_0(v16, *((const void **)a1 + 2), (unsigned int)v10);
  operator delete(*((void **)a1 + 2));
  *((_QWORD *)a1 + 2) = v11;
  a1[1] = v7;
LABEL_8:
  v12 = 3LL * *a1;
  v13 = *((_QWORD *)a1 + 2);
  *(_OWORD *)(v13 + 8 * v12) = *(_OWORD *)a2;
  *(_QWORD *)(v13 + 8 * v12 + 16) = *(_QWORD *)(a2 + 16);
  v14 = a1[6];
  if ( v14 <= ++*a1 )
    v14 = *a1;
  a1[6] = v14;
LABEL_11:
  operator delete(v3);
  return v6;
}
