__int64 __fastcall RtlpWow64CreateUserStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD *v6; // r15
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  NTSTATUS v13; // r15d
  _QWORD *v14; // rsi
  char *v15; // rax
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  PVOID BaseAddress; // [rsp+30h] [rbp-98h] BYREF
  int v22; // [rsp+38h] [rbp-90h]
  PVOID v23; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR v24; // [rsp+48h] [rbp-80h] BYREF
  ULONG_PTR v25; // [rsp+50h] [rbp-78h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-70h] BYREF
  int v27; // [rsp+60h] [rbp-68h]
  int v28; // [rsp+64h] [rbp-64h]
  int v29; // [rsp+68h] [rbp-60h]
  int v30; // [rsp+6Ch] [rbp-5Ch]
  unsigned __int64 v31; // [rsp+70h] [rbp-58h]
  __int64 v32; // [rsp+78h] [rbp-50h]
  __int64 v33; // [rsp+80h] [rbp-48h]
  ULONG_PTR v34; // [rsp+88h] [rbp-40h]
  unsigned __int64 v35; // [rsp+D0h] [rbp+8h]
  __int64 v37; // [rsp+E0h] [rbp+18h]

  v37 = a3;
  v35 = a1;
  v25 = 0LL;
  v33 = 0LL;
  v6 = (_QWORD *)KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24];
  v23 = v6;
  if ( !a1 || (v7 = a2) == 0 )
  {
    v16 = 0;
    v17 = RtlImageNtHeader(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[18]);
    v18 = v17;
    if ( v17 )
    {
      v19 = *(unsigned int *)(v17 + 100);
      v20 = *(_DWORD *)(v18 + 96);
      a1 = v35;
      if ( !v35 )
        a1 = v19;
      v7 = a2;
      if ( !a2 )
        v7 = v20;
    }
    else
    {
      v16 = -1073741701;
      v22 = -1073741701;
      v7 = a2;
      a1 = v35;
    }
    if ( v16 < 0 )
      return (unsigned int)v16;
    a3 = v37;
  }
  if ( !a1 )
    a1 = 0x4000LL;
  if ( a1 >= v7 )
    v7 = (a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v8 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v9 = (v7 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v34 = v6[99];
  if ( v34 && v8 < v34 )
  {
    v8 = (v34 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v9 = (v8 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  v27 = a4;
  v28 = 0;
  v30 = 0;
  v29 = 0;
  v31 = v9;
  v32 = a3;
  result = ZwSetInformationProcess(-1LL, 41LL);
  if ( (int)result >= 0 )
  {
    v11 = v33;
    *(_QWORD *)(a5 + 56) = v33;
    *(_QWORD *)(a5 + 40) = v11 + v9;
    BaseAddress = (PVOID)(v9 + v11 - v8);
    v12 = v9 - v8;
    RegionSize = v8;
    v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v13 < 0 )
    {
      v14 = (_QWORD *)(a5 + 48);
    }
    else
    {
      v14 = (_QWORD *)(a5 + 48);
      v15 = (char *)BaseAddress;
      *(_QWORD *)(a5 + 48) = BaseAddress;
      if ( v12 < 0x2000 )
        return 0LL;
      BaseAddress = v15 - 0x2000;
      v25 = 0x2000LL;
      v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v25, 0x1000u, 0x104u);
      if ( v13 >= 0 )
        return 0LL;
    }
    v23 = *(PVOID *)(a5 + 56);
    v24 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v23, &v24, 0x8000u);
    *(_QWORD *)(a5 + 56) = 0LL;
    *(_QWORD *)(a5 + 40) = 0LL;
    *v14 = 0LL;
    return (unsigned int)v13;
  }
  return result;
}
