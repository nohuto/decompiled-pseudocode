/*
 * XREFs of VfCreateCommonBufferFromMdl @ 0x140AC2D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfCreateCommonBufferFromMdl(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 RealDmaAdapter; // rdi

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( ViGetAdapterInformationInternal(a1) )
    return 3221225473LL;
  else
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)(RealDmaAdapter + 8)
                                                                                 + 312LL))(
             RealDmaAdapter,
             a2,
             a3,
             a4,
             a5);
}
