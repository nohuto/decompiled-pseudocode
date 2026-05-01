/*
 * XREFs of ?MarshalInterface@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18032F3B0
 * Callers:
 *     ?MarshalInterface@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180169460 (-MarshalInterface@-$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureInit@DefaultMarshaler@Streams@Storage@Windows@@AEAAJXZ @ 0x180337F80 (-_EnsureInit@DefaultMarshaler@Streams@Storage@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::MarshalInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  _QWORD *v7; // rbx
  __int64 result; // rax

  v7 = (_QWORD *)(a1 + 80);
  result = Windows::Storage::Streams::DefaultMarshaler::_EnsureInit((Windows::Storage::Streams::DefaultMarshaler *)(a1 + 80));
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64, int))(*(_QWORD *)*v7 + 40LL))(
             *v7,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  return result;
}
