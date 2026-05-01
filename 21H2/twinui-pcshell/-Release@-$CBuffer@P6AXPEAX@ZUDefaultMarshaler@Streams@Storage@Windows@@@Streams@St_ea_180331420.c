/*
 * XREFs of ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAKXZ @ 0x180331420
 * Callers:
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAKXZ @ 0x1801694B0 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows.c)
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBA@EAAKXZ @ 0x1801694C0 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@St_ea_1801694C0.c)
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBI@EAAKXZ @ 0x1801694D0 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@St_ea_1801694D0.c)
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WCA@EAAKXZ @ 0x1801694E0 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@St_ea_1801694E0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::Release(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(a1);
}
