/*
 * XREFs of ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA798
 * Callers:
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x1800AA62C (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 * Callees:
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800DE484 (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 */

__int64 __fastcall CResourceTable::CountResource(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d

  v2 = AddToResourceCount(*(_QWORD *)(a1 + 56) + 44LL, a2, 1LL);
  return anonymous_namespace_::AddToResourceCount(v2, v3);
}
