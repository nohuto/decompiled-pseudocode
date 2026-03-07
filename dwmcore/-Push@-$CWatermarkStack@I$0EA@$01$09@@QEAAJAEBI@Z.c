__int64 __fastcall CWatermarkStack<unsigned int,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  void *v3; // rdi
  unsigned int v6; // esi
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // rbx
  unsigned int v12; // eax
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[1];
  v3 = 0LL;
  v6 = 0;
  v14 = 0LL;
  if ( *a1 != v2 )
    goto LABEL_8;
  v7 = 2LL * v2;
  if ( v7 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024362, 0x64u, 0LL);
    goto LABEL_11;
  }
  if ( (unsigned int)v7 <= 0x40 )
    LODWORD(v7) = 64;
  v8 = HrMalloc(4uLL, (unsigned int)v7, &v14);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6Bu, 0LL);
    goto LABEL_14;
  }
  v10 = 4LL * *a1;
  if ( v10 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0x6Du, 0LL);
LABEL_14:
    v3 = v14;
    goto LABEL_11;
  }
  v11 = v14;
  v6 = 0;
  memcpy_0(v14, *((const void **)a1 + 2), (unsigned int)v10);
  operator delete(*((void **)a1 + 2));
  *((_QWORD *)a1 + 2) = v11;
  a1[1] = v7;
LABEL_8:
  *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * *a1) = *a2;
  v12 = a1[6];
  if ( v12 <= ++*a1 )
    v12 = *a1;
  a1[6] = v12;
LABEL_11:
  operator delete(v3);
  return v6;
}
