/*
 * XREFs of RtlpHpAllocVA @ 0x180022BAC
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x180003030 (RtlpHpHeapExtendContext.c)
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrReserve @ 0x18000662C (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapAllocate @ 0x180007E6C (RtlpHpHeapAllocate.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpHpVaMgrCtxAlloc @ 0x180005B5C (RtlpHpVaMgrCtxAlloc.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtAllocateVirtualMemoryEx @ 0x18009E390 (NtAllocateVirtualMemoryEx.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlpHpTlLogVAChange @ 0x18010B60C (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpAllocVA(PVOID *BaseAddress, ULONG_PTR *a2, __int64 a3, int a4, ULONG a5, __int128 *a6)
{
  unsigned int v6; // edi
  __int128 v7; // xmm0
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // r8
  ULONG v12; // r9d
  ULONG ExtendedParameterCount; // ecx
  MEM_EXTENDED_PARAMETER *v14; // rax
  NTSTATUS v15; // ebx
  ULONG_PTR v17; // rcx
  void *v18; // rcx
  __int64 v19; // rdx
  __int64 PageProtection; // [rsp+20h] [rbp-59h]
  PMEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+28h] [rbp-51h]
  __int64 v22; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+48h] [rbp-31h]
  __int64 v24; // [rsp+50h] [rbp-29h]
  __int128 v25; // [rsp+58h] [rbp-21h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-1h] BYREF
  int v27; // [rsp+80h] [rbp+7h]
  int v28; // [rsp+84h] [rbp+Bh]

  RegionSize = 0x100000001000LL;
  v6 = a4 & 0xFEFFFFFF;
  v27 = 0x200000;
  v7 = *a6;
  v28 = 0x40000000;
  v25 = v7;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v10 = *a2;
    if ( (a4 & 0x2000) != 0 )
    {
      v19 = *((unsigned int *)&RegionSize + BYTE1(v25));
      v11 = v19 - ((v10 + v19 - 1) & (unsigned int)(v19 - 1)) + v10 - 1;
    }
    else
    {
      v11 = v10 - ((v10 - 1) & 0xFFF) + 4095;
    }
    RegionSize = v11;
    if ( (a4 & 0x1000) != 0 && BYTE1(v25) >= 2u )
    {
      *a2 = v11;
      if ( (a4 & 0x40000000) != 0 )
        memset(*BaseAddress, 0, v11);
      goto LABEL_13;
    }
    if ( (a4 & 0x2000) != 0 && (v25 & 8) != 0 )
      v6 = a4 & 0xFEFBFFFF | 0x40000;
    v12 = v6 & 0xBFFFFFFF;
    if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v6 & 0x2000) == 0 )
      v12 = v6 & 0x9FFFFFFF;
    ExtendedParameterCount = 0;
    if ( (v12 & 0x2000) != 0 )
    {
      v22 = 0LL;
      v23 = 0LL;
      ExtendedParameterCount = 1;
      v24 = 0LL;
      *(_QWORD *)&v25 = 1LL;
      *((_QWORD *)&v25 + 1) = &v22;
      if ( (v12 & 0x40000) != 0 )
      {
        v12 &= ~0x40000u;
        v22 = 0x100000000LL;
      }
    }
    v14 = (MEM_EXTENDED_PARAMETER *)&v25;
    if ( !ExtendedParameterCount )
      v14 = 0LL;
    v15 = NtAllocateVirtualMemoryEx(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            BaseAddress,
            &RegionSize,
            v12,
            a5,
            v14,
            ExtendedParameterCount);
    if ( v15 >= 0 )
    {
      *a2 = RegionSize;
LABEL_13:
      v15 = 0;
    }
  }
  else
  {
    HIDWORD(v23) = 0;
    if ( BYTE3(v25) )
      LODWORD(v22) = BYTE3(v25) - 1;
    else
      LODWORD(v22) = -1;
    HIDWORD(v22) = BYTE1(v25);
    LODWORD(v23) = BYTE2(v25);
    if ( (v25 & 8) != 0 )
      HIDWORD(v23) = 1;
    v17 = *a2;
    v24 = *((_QWORD *)&v25 + 1);
    RegionSize = v17 - ((v17 - 1) & 0xFFFFF) + 0xFFFFF;
    v18 = (void *)RtlpHpVaMgrCtxAlloc((_RTL_SRWLOCK *)&unk_18016DC78, (__int64)&RegionSize, a3, &v22);
    if ( v18 )
    {
      *a2 = RegionSize;
      *BaseAddress = v18;
      goto LABEL_13;
    }
    v15 = -1073741670;
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v6, *a2, *BaseAddress, (unsigned int)v15, PageProtection, ExtendedParameters);
  return (unsigned int)v15;
}
