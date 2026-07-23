/*
 * XREFs of VfAllocateCommonBuffer @ 0x1409CBA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VF_ASSERT_IRQL @ 0x1409CB0EC (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409D072C (ViSpecialAllocateCommonBuffer.c)
 */

__int64 __fastcall VfAllocateCommonBuffer(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, _QWORD, __int64, __int64); // r14
  __int64 AdapterInformationInternal; // rbx
  __int64 v10; // r9
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  RealDmaOperation = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(0),
        (result = ViSpecialAllocateCommonBuffer(
                    (_DWORD)RealDmaOperation,
                    AdapterInformationInternal,
                    (_DWORD)retaddr,
                    a2,
                    a3,
                    a4)) == 0) )
  {
    LOBYTE(v10) = a4;
    result = RealDmaOperation(a1, a2, a3, v10);
    if ( result )
    {
      if ( AdapterInformationInternal )
        _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 172));
    }
  }
  return result;
}
