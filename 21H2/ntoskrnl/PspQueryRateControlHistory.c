/*
 * XREFs of PspQueryRateControlHistory @ 0x14067FA3C
 * Callers:
 *     PspEnforceLimitsJobPreCallback @ 0x14067F930 (PspEnforceLimitsJobPreCallback.c)
 *     NtQueryInformationJobObject @ 0x1406804E0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PspJobIoRateQueryHistory @ 0x140274C98 (PspJobIoRateQueryHistory.c)
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     KeQuerySchedulingGroupHistory @ 0x140274F94 (KeQuerySchedulingGroupHistory.c)
 *     RtlCopyBitMap @ 0x140275080 (RtlCopyBitMap.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspNetRateControlDispatch @ 0x140909164 (PspNetRateControlDispatch.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PspQueryRateControlHistory(__int64 a1, int a2, char a3, _DWORD *a4, int a5)
{
  char v6; // r15
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // esi
  __int64 v14; // r12
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // eax
  void *v18; // rcx
  unsigned int v19; // r13d
  unsigned int v20; // ebx
  __int64 *v21; // rdx
  ULONG v22; // eax
  PVOID PoolWithTag; // rax
  __int64 v24; // rcx
  unsigned int v26; // [rsp+24h] [rbp-4Ch] BYREF
  ULONG TargetBit; // [rsp+28h] [rbp-48h] BYREF
  __int64 v28; // [rsp+30h] [rbp-40h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+38h] [rbp-38h] BYREF
  __int128 v30; // [rsp+48h] [rbp-28h] BYREF
  __int128 v31; // [rsp+58h] [rbp-18h]

  v26 = 0;
  TargetBit = 0;
  v6 = a3;
  v28 = 0LL;
  *a4 = 0;
  v30 = 0LL;
  v31 = 0LL;
  BitMapHeader = 0LL;
  if ( a5 == 1 )
  {
    v11 = a1 + 1360;
  }
  else
  {
    v9 = (__int64 *)(a1 + 1312);
    v10 = (__int64 *)(a1 + 1008);
    if ( !a5 )
      v10 = v9;
    v11 = *v10;
  }
  if ( v11 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        if ( (int)PspJobIoRateQueryHistory(a1, &v28, &v26, &TargetBit) < 0 )
          return;
      }
      else
      {
        KeQuerySchedulingGroupHistory(v11 + 128, &v28, &v26, &TargetBit);
      }
      v12 = v26;
      v13 = TargetBit;
      v14 = v28;
    }
    else
    {
      DWORD2(v30) = 1;
      *(_QWORD *)&v30 = *(_QWORD *)(v11 + 56);
      if ( (int)PspNetRateControlDispatch(&v30) < 0 )
        return;
      v14 = v31;
      v12 = DWORD2(v31);
      v13 = HIDWORD(v31);
    }
    v15 = a2 - 2;
    if ( v15 )
    {
      if ( v15 == 1 )
        v16 = 600000;
      else
        v16 = 10000;
    }
    else
    {
      v16 = 60000;
    }
    v17 = (v12 + v16 - 1) / v12;
    v18 = *(void **)(v11 + 24);
    v19 = v17;
    v20 = (v17 + 7) >> 3;
    if ( v20 < 8 )
      v20 = 8;
    if ( *(_QWORD *)(v11 + 24) && *(_QWORD *)(v11 + 32) < (unsigned __int64)v20 )
    {
      ExFreePoolWithTag(v18, 0x624A7350u);
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
      v18 = 0LL;
    }
    if ( v18 )
    {
      if ( v13 >= 8 * v20 )
      {
        memset(v18, 0, v20);
      }
      else if ( v13 )
      {
        RtlCopyBitMap((PRTL_BITMAP)(v11 + 8), (PRTL_BITMAP)(v11 + 8), v13);
        RtlClearBits((PRTL_BITMAP)(v11 + 8), 0, v13);
      }
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x624A7350u);
      *(_QWORD *)(v11 + 24) = PoolWithTag;
      if ( !PoolWithTag )
        return;
      memset(PoolWithTag, 0, v20);
      v24 = *(_QWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 8) = 8 * v20;
      *(_QWORD *)(v11 + 16) = v24;
      *(_QWORD *)(v11 + 32) = v20;
      v6 = a3;
    }
    v21 = *(__int64 **)(v11 + 24);
    BitMapHeader.SizeOfBitMap = v19;
    if ( v13 > 0x40 )
      LOBYTE(v13) = 64;
    *v21 = v14 & ((1LL << v13) - 1) | *v21 & ~((1LL << v13) - 1);
    BitMapHeader.Buffer = *(unsigned int **)(v11 + 24);
    v22 = 100 * RtlNumberOfSetBits(&BitMapHeader) / v19;
    if ( v22 >= 0x3C )
    {
      *a4 = 3;
    }
    else if ( v22 >= 0x28 )
    {
      *a4 = 2;
    }
    else if ( v22 >= 0x14 )
    {
      *a4 = 1;
    }
    if ( v6 )
      memset(*(void **)(v11 + 24), 0, *(_QWORD *)(v11 + 32));
  }
}
