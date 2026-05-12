/*
 * XREFs of StorpAllocateHostMemoryBuffer @ 0x1C003AD30
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zdqqqqqqqqq_EtwWriteTransfer @ 0x1C0037B2C (McTemplateK0zdqqqqqqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpAllocateHostMemoryBuffer(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        __int64 a8,
        __int64 a9,
        unsigned int *a10)
{
  __int64 *v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r13
  unsigned int v13; // r15d
  unsigned int *v14; // r14
  __int64 v15; // r8
  unsigned int v16; // edi
  char v17; // si
  unsigned __int64 v18; // r12
  unsigned __int64 v20; // r9
  _QWORD *v21; // rsi
  __int64 v22; // r12
  SIZE_T v23; // rbp
  unsigned int *PoolWithTag; // rax
  unsigned int *v25; // rdi
  __int64 (__fastcall *v26)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD); // r10
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  SIZE_T v31; // rax
  unsigned int *v32; // rax
  struct _MDL *v33; // rcx
  unsigned int *v34; // rdi
  int *Flags; // [rsp+28h] [rbp-B0h]
  int v36; // [rsp+40h] [rbp-98h]
  unsigned int v37; // [rsp+70h] [rbp-68h]
  unsigned __int64 v38; // [rsp+80h] [rbp-58h]
  __int64 v39; // [rsp+88h] [rbp-50h]
  __int64 v40; // [rsp+90h] [rbp-48h]
  unsigned __int64 v41; // [rsp+98h] [rbp-40h]
  int v42; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v43; // [rsp+E8h] [rbp+10h]
  unsigned __int64 v44; // [rsp+F0h] [rbp+18h]

  v44 = a3;
  v43 = a2;
  v10 = *(__int64 **)(a1 - 16);
  v11 = a3;
  v12 = 0LL;
  LOBYTE(a1) = 0;
  v13 = 0;
  v14 = 0LL;
  v15 = *v10;
  v42 = 0;
  v39 = v15;
  if ( *(_QWORD *)(v15 + 5720) )
  {
    v16 = -1056964607;
    v17 = 1;
    goto LABEL_12;
  }
  v18 = a2;
  if ( !a2 )
    v18 = 4096LL;
  v41 = v18;
  if ( v11 < v18 )
  {
    v17 = 2;
LABEL_11:
    v16 = -1056964602;
    goto LABEL_12;
  }
  if ( ((v11 | v18) & 0xFFF) != 0 )
  {
LABEL_10:
    v17 = 3;
    goto LABEL_11;
  }
  if ( 0x1000 % a5 )
  {
    a2 = v43;
    goto LABEL_10;
  }
  if ( !a10 || (v37 = *a10) == 0 || a8 )
  {
    a2 = v43;
    v17 = 2;
    goto LABEL_11;
  }
  if ( HmbAllocationPolicy == 1 )
    goto LABEL_27;
  if ( HmbAllocationPolicy == 2 )
  {
LABEL_26:
    v20 = v11;
    goto LABEL_28;
  }
  if ( HmbAllocationPolicy != 3 )
  {
    v16 = -1056964606;
    v17 = 4;
    goto LABEL_23;
  }
  v20 = (a4 / 0x3E8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v20 < v18 )
  {
LABEL_27:
    v20 = v18;
    goto LABEL_28;
  }
  if ( v20 > v11 )
    goto LABEL_26;
LABEL_28:
  a1 = (unsigned int)HmbMaximumSize;
  v21 = 0LL;
  v22 = a9;
  if ( v20 <= (unsigned int)HmbMaximumSize )
    a1 = v20;
  v40 = *(_QWORD *)(v15 + 728);
  v38 = a1;
  v23 = a1;
  while ( v23 >= 0x1000 && v12 < a1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x45416152u);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LOBYTE(a1) = v38;
      break;
    }
    *(_OWORD *)PoolWithTag = 0LL;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    v26 = *(__int64 (__fastcall **)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD))(*(_QWORD *)(v40 + 8) + 272LL);
    if ( v26 )
    {
      Flags = &v42;
      *((_QWORD *)PoolWithTag + 3) = v26(v40, &LowAddress, &HighAddress, (unsigned int)v23, 0);
    }
    else
    {
      *((_QWORD *)PoolWithTag + 1) = MmAllocatePagesForMdlEx(LowAddress, HighAddress, 0LL, v23, MmNonCached, 0x20u);
    }
    v27 = *((_QWORD *)v25 + 1);
    if ( v27 )
    {
      v28 = *(unsigned int *)(v27 + 40);
      v29 = 2LL * v13;
      v12 += v28;
      *(_QWORD *)(v22 + 8 * v29) = *(_QWORD *)(v27 + 48) << 12;
      *(_DWORD *)(v22 + 8 * v29 + 8) = v28;
LABEL_39:
      ++v13;
      if ( v14 )
        *v21 = v25;
      else
        v14 = v25;
      v21 = v25;
      goto LABEL_46;
    }
    if ( *((_QWORD *)v25 + 3) )
    {
      v30 = 2LL * v13;
      v12 += v23;
      *(_QWORD *)(v22 + 8 * v30) = *((_QWORD *)v25 + 2);
      *(_DWORD *)(v22 + 8 * v30 + 8) = v23;
      *((_QWORD *)v25 + 4) = v23;
      goto LABEL_39;
    }
    v23 -= 4096LL;
LABEL_46:
    a1 = v38;
    v31 = v38 - v12;
    if ( v23 <= v38 - v12 )
      v31 = v23;
    v23 = v31;
    if ( v13 >= v37 )
      break;
  }
  v17 = 0;
  if ( v13 )
  {
    if ( v12 < v41 )
    {
      if ( v14 )
      {
        do
        {
          v33 = (struct _MDL *)*((_QWORD *)v14 + 1);
          v34 = *(unsigned int **)v14;
          if ( v33 )
          {
            MmFreePagesFromMdl(v33);
            ExFreePoolWithTag(*((PVOID *)v14 + 1), 0);
          }
          if ( *((_QWORD *)v14 + 3) )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v40 + 8) + 24LL))(
              v40,
              v14[8],
              *((_QWORD *)v14 + 2));
          ExFreePoolWithTag(v14, 0);
          v14 = v34;
        }
        while ( v34 );
      }
      v15 = v39;
      v16 = -1056964605;
      v17 = 5;
    }
    else
    {
      v15 = v39;
      v16 = 0;
      v32 = a10;
      *(_QWORD *)(v39 + 5720) = v14;
      *v32 = v13;
    }
    LOBYTE(a1) = v38;
    LOBYTE(v11) = v44;
  }
  else
  {
    LOBYTE(v11) = v44;
    v16 = -1056964605;
    v15 = v39;
    v17 = 5;
  }
LABEL_23:
  a2 = v43;
LABEL_12:
  if ( (byte_1C0069844 & 0x10) != 0 )
    McTemplateK0zdqqqqqqqqq_EtwWriteTransfer(
      *(unsigned int *)(v15 + 56),
      a2,
      v15,
      *(const wchar_t **)(v15 + 48),
      *(_DWORD *)(v15 + 56),
      (int)Flags,
      a2,
      v11,
      v36,
      a1,
      v12,
      v13,
      v16 == 0,
      v17);
  return v16;
}
