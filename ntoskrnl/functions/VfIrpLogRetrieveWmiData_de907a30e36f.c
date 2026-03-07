__int64 __fastcall VfIrpLogRetrieveWmiData(unsigned int a1, __int64 a2, int *a3, _DWORD *a4, _DWORD *a5, ULONG *a6)
{
  __int64 v6; // rbx
  struct _OBJECT_NAME_INFORMATION *Pool2; // rsi
  int v10; // ecx
  _QWORD *v11; // r12
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  __int64 v14; // rbp
  _DWORD *v15; // r15
  _WORD *v16; // r14
  NTSTATUS v17; // ebx
  struct _OBJECT_NAME_INFORMATION *v18; // rax
  void *v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // r15
  _OWORD *v22; // r14
  int v23; // ebp
  ULONG v24; // edi
  int v25; // r14d
  char *v26; // rsi
  _QWORD *v27; // r15
  _DWORD *v28; // rcx
  _QWORD *v29; // r12
  int v30; // eax
  unsigned int v31; // edx
  int v32; // ebp
  ULONG *v33; // r8
  char *v34; // rsi
  size_t v35; // rbx
  ULONG ReturnLength; // [rsp+20h] [rbp-68h] BYREF
  int v37; // [rsp+24h] [rbp-64h]
  ULONG Length[2]; // [rsp+28h] [rbp-60h]
  _QWORD *v39; // [rsp+30h] [rbp-58h]
  ULONG *v40; // [rsp+38h] [rbp-50h]
  _DWORD *v41; // [rsp+40h] [rbp-48h]
  __int64 v42; // [rsp+48h] [rbp-40h]

  v6 = a1;
  ReturnLength = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *(_QWORD *)Length = 16LL;
  Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, 0x10uLL, 0x74496656u);
  if ( !Pool2 )
    return 3221225626LL;
  v42 = 3 * v6;
  v10 = 0;
  v11 = (_QWORD *)(ViIrpLogDatabase + 8 + 24 * v6);
  v12 = (_QWORD *)*v11;
  if ( (_QWORD *)*v11 != v11 )
  {
    v13 = (_QWORD *)*v11;
    do
    {
      ++v10;
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v11 );
  }
  v39 = (_QWORD *)(ViIrpLogDatabase + 8 + 24 * v6);
  v14 = (unsigned int)(8 * v10 + 60 + 4 * v10);
  v15 = (_DWORD *)(a2 + (unsigned int)(8 * v10 + 60));
  v37 = 8 * v10 + 60;
  v16 = (_WORD *)(a2 + v14);
  v17 = 0;
  v40 = (ULONG *)(a2 + 60);
  while ( v12 != v11 )
  {
    v17 = ObQueryNameString((PVOID)*(v12 - 1), Pool2, Length[0], &ReturnLength);
    if ( v17 == -1073741820 )
    {
      ExFreePoolWithTag(Pool2, 0);
      v18 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 0x74496656u);
      Pool2 = v18;
      if ( !v18 )
        return (unsigned int)-1073741670;
      v19 = (void *)*(v12 - 1);
      Length[0] = ReturnLength;
      v17 = ObQueryNameString(v19, v18, ReturnLength, &ReturnLength);
    }
    if ( v17 < 0 )
      break;
    if ( Pool2->Name.Length )
    {
      if ( a2 )
        *v15 = v14;
      v20 = Pool2->Name.Length + 18;
      v41 = v15 + 1;
      v21 = v20 >> 1;
      if ( a2 )
        *v16 = v20;
      v22 = v16 + 1;
      v23 = v14 + 2;
      if ( a2 )
      {
        *v22 = *(_OWORD *)L"VERIFIER";
        memmove(v22 + 1, Pool2->Name.Buffer, Pool2->Name.Length);
        *((_WORD *)v22 + (unsigned int)(v21 - 1)) = 0;
      }
      v16 = (_WORD *)v22 + v21;
      LODWORD(v14) = v20 + v23;
      v15 = v41;
    }
    else
    {
      *((_DWORD *)v12 + 4) |= 2u;
    }
    v39 = (_QWORD *)*v39;
    v12 = (_QWORD *)*v39;
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( v17 < 0 )
    return (unsigned int)v17;
  v24 = (v14 + 7) & 0xFFFFFFF8;
  v25 = 0;
  v26 = (char *)(a2 + v24);
  Length[0] = v24;
  v27 = (_QWORD *)(ViIrpLogDatabase + 8 * (v42 + 1));
  v28 = (_DWORD *)*v27;
  v29 = v27;
  while ( v28 != (_DWORD *)v27 )
  {
    v30 = v28[4];
    if ( (v30 & 2) == 0 )
    {
      ++v25;
      if ( (v30 & 1) != 0 )
        v31 = v28[6];
      else
        v31 = v28[7];
      v32 = 40 * v31;
      if ( a2 )
      {
        v33 = v40;
        v40[1] = v32 + 8;
        *v33 = v24;
        *(_DWORD *)v26 = v28[5];
        *((_DWORD *)v26 + 1) = v31;
        v34 = v26 + 8;
        v40 = v33 + 2;
        v35 = 40LL * v31;
        memmove(v34, v28 + 8, v35);
        v26 = &v34[v35];
      }
      v24 += v32 + 8;
    }
    v29 = (_QWORD *)*v29;
    v28 = (_DWORD *)*v29;
  }
  *a3 = v37;
  *a4 = v25;
  *a5 = Length[0];
  *a6 = v24;
  return 0LL;
}
