/*
 * XREFs of VfAllocateCommonBuffer @ 0x140AC2050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VF_ASSERT_IRQL @ 0x140AC16AC (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140AC6E2C (ViSpecialAllocateCommonBuffer.c)
 */

__int64 __fastcall VfAllocateCommonBuffer(int a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rbx
  __int64 v10; // r9
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(0),
        (result = ViSpecialAllocateCommonBuffer(
                    *(_QWORD *)(*(_QWORD *)(RealDmaAdapter + 8) + 16LL),
                    AdapterInformationInternal,
                    (_DWORD)retaddr,
                    a2,
                    a3,
                    a4)) == 0) )
  {
    LOBYTE(v10) = a4;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 16LL))(
               RealDmaAdapter,
               a2,
               a3,
               v10);
    if ( result )
    {
      if ( AdapterInformationInternal )
        _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 204));
    }
  }
  return result;
}
