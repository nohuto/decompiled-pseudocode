/*
 * XREFs of ?CryptReleaseContextNoParam@details@wil@@YAX_K@Z @ 0x1804CF69C
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?CryptReleaseContextNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1804CF55C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@_KP6AX_K@Z$1-CryptReleaseContextNoParam@d.c)
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804CF740 (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::CryptReleaseContextNoParam(wil::details *this)
{
  CryptReleaseContext((HCRYPTPROV)this, 0);
}
