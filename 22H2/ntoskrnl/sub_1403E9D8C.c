/*
 * XREFs of sub_1403E9D8C @ 0x1403E9D8C
 * Callers:
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 *     sub_1403E9E6C @ 0x1403E9E6C (sub_1403E9E6C.c)
 *     sub_1403EADD8 @ 0x1403EADD8 (sub_1403EADD8.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F8010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0C0FC @ 0x140A0C0FC (sub_140A0C0FC.c)
 *     sub_140A1BFE4 @ 0x140A1BFE4 (sub_140A1BFE4.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140A11330 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1403E9D8C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1024))(a2, a3, v8);
  for ( i = 0LL; i < 4; ++i )
    *(_DWORD *)(a4 + 4 * i) = v8[i] ^ v8[i + 4];
  result = *(_BYTE *)(a4 + 15);
  for ( j = result; ; j ^= result )
  {
    result >>= 7;
    if ( !result )
      break;
  }
  *(_BYTE *)(a4 + 15) = j & 0x7F;
  return result;
}
