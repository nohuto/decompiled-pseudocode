/*
 * XREFs of RtlpWow64CreateUserStack @ 0x1406AF9A8
 * Callers:
 *     PspWow64SetupUserStack @ 0x1406AF8F8 (PspWow64SetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x1403FA6A0 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x1403FA720 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1403FA760 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlpWow64CreateUserStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  NTSTATUS v14; // esi
  char *v15; // rax
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  PVOID BaseAddress; // [rsp+30h] [rbp-98h] BYREF
  int v22; // [rsp+38h] [rbp-90h]
  ULONG_PTR v23[2]; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-78h] BYREF
  ULONG_PTR v25; // [rsp+58h] [rbp-70h] BYREF
  PVOID v26; // [rsp+60h] [rbp-68h] BYREF
  int v27; // [rsp+68h] [rbp-60h]
  int v28; // [rsp+6Ch] [rbp-5Ch]
  int v29; // [rsp+70h] [rbp-58h]
  int v30; // [rsp+74h] [rbp-54h]
  unsigned __int64 v31; // [rsp+78h] [rbp-50h]
  __int64 v32; // [rsp+80h] [rbp-48h]
  __int64 v33; // [rsp+88h] [rbp-40h]
  ULONG_PTR v34; // [rsp+90h] [rbp-38h]
  unsigned __int64 v35; // [rsp+D0h] [rbp+8h]

  v35 = a1;
  v23[0] = 0LL;
  v33 = 0LL;
  v7 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[4];
  v23[1] = v7;
  if ( !a1 || (v8 = a2) == 0 )
  {
    v16 = 0;
    v17 = RtlImageNtHeader(KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[18]);
    v18 = v17;
    if ( v17 )
    {
      v19 = *(unsigned int *)(v17 + 100);
      v20 = *(_DWORD *)(v18 + 96);
      a1 = v35;
      if ( !v35 )
        a1 = v19;
      v8 = a2;
      if ( !a2 )
        v8 = v20;
    }
    else
    {
      v16 = -1073741701;
      v22 = -1073741701;
      v8 = a2;
      a1 = v35;
    }
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  if ( !a1 )
    a1 = 0x4000LL;
  if ( a1 >= v8 )
    v8 = (a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v9 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v34 = *(_QWORD *)(v7 + 792);
  if ( v34 && v9 < v34 )
  {
    v9 = (v34 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v10 = (v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  v27 = a4;
  v28 = 0;
  v30 = 0;
  v29 = 0;
  v31 = v10;
  v32 = a3;
  result = ZwSetInformationProcess(-1LL, 41LL);
  if ( (int)result >= 0 )
  {
    v12 = v33;
    *(_QWORD *)(a5 + 56) = v33;
    *(_QWORD *)(a5 + 40) = v12 + v10;
    BaseAddress = (PVOID)(v10 + v12 - v9);
    v13 = v10 - v9;
    RegionSize = v9;
    v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v14 < 0
      || (v15 = (char *)BaseAddress, *(_QWORD *)(a5 + 48) = BaseAddress, v13 >= 0x2000)
      && (BaseAddress = v15 - 0x2000,
          v23[0] = 0x2000LL,
          v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v23, 0x1000u, 0x104u),
          v14 < 0) )
    {
      v26 = *(PVOID *)(a5 + 56);
      v25 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v26, &v25, 0x8000u);
      *(_QWORD *)(a5 + 56) = 0LL;
      *(_QWORD *)(a5 + 40) = 0LL;
      *(_QWORD *)(a5 + 48) = 0LL;
      return (unsigned int)v14;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
