/*
 * XREFs of sub_1403F152C @ 0x1403F152C
 * Callers:
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     sub_1403F160C @ 0x1403F160C (sub_1403F160C.c)
 *     sub_1403F2540 @ 0x1403F2540 (sub_1403F2540.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFB010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B0E7A8 @ 0x140B0E7A8 (sub_140B0E7A8.c)
 *     sub_140B19070 @ 0x140B19070 (sub_140B19070.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140B147A0 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1403F152C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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
