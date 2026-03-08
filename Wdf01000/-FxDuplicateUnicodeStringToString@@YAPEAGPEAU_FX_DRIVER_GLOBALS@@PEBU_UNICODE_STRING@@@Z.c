/*
 * XREFs of ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C004F5FC
 * Callers:
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0030880 (imp_WdfPdoInitAddDeviceText.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 */

FX_POOL **__fastcall FxDuplicateUnicodeStringToString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source)
{
  ULONG Tag; // r8d
  unsigned __int64 v3; // r9
  void *v5; // rax
  FX_POOL **v6; // rax
  FX_POOL **v7; // rbx
  __m128i v9; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  Tag = FxDriverGlobals->Tag;
  v3 = Source->Length + 2LL;
  v9.m128i_i64[0] = 0LL;
  v9.m128i_i64[1] = 256LL;
  v5 = retaddr;
  if ( !FxDriverGlobals->FxPoolTrackingOn )
    v5 = 0LL;
  v6 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v9, v3, Tag, v5);
  v7 = v6;
  if ( v6 )
  {
    memmove(v6, Source->Buffer, Source->Length);
    *((_WORD *)v7 + ((unsigned __int64)Source->Length >> 1)) = 0;
  }
  return v7;
}
