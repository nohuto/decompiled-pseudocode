/*
 * XREFs of sub_1800F7938 @ 0x1800F7938
 * Callers:
 *     sub_1800F7C70 @ 0x1800F7C70 (sub_1800F7C70.c)
 * Callees:
 *     sub_1800BEA04 @ 0x1800BEA04 (sub_1800BEA04.c)
 */

__int64 __fastcall sub_1800F7938(const wchar_t *a1)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BEA04(*((_QWORD *)off_18019C348 + 2), 0x19u, (__int64)&unk_180171E90, a1);
  }
  RtlAcquireResourceExclusive(&Resource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)lpBaseAddress + 1);
  _InterlockedIncrement((volatile signed __int32 *)lpMem + 1);
  RtlReleaseResource(&Resource);
  return 0LL;
}
