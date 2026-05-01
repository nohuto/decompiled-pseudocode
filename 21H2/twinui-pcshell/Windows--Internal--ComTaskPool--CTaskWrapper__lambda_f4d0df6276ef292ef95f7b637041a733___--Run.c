/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4d0df6276ef292ef95f7b637041a733___::Run @ 0x1800419F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4d0df6276ef292ef95f7b637041a733___::Run(
        __int64 a1)
{
  __int64 result; // rax
  unsigned int i; // ebx
  unsigned int j; // esi
  __int64 v5; // rcx
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 24) + 24LL))(
             *(_QWORD *)(a1 + 24),
             &v6);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v7 = 0LL;
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 24) + 32LL))(
                 *(_QWORD *)(a1 + 24),
                 i,
                 &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7,
                 &v7);
      if ( (int)result >= 0 )
      {
        for ( j = 0; j < *(_DWORD *)(a1 + 48); ++j )
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v7 + 32LL))(
                     v7,
                     *(_QWORD *)(a1 + 16),
                     *(_QWORD *)(a1 + 40) + 16LL * j,
                     *(unsigned int *)(a1 + 32));
      }
      v5 = v7;
      if ( v7 )
      {
        v7 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  return result;
}
