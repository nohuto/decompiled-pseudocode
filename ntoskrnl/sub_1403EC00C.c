/*
 * XREFs of sub_1403EC00C @ 0x1403EC00C
 * Callers:
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     sub_1403EC0EC @ 0x1403EC0EC (sub_1403EC0EC.c)
 *     sub_1403ED020 @ 0x1403ED020 (sub_1403ED020.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AF7010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B0A7A8 @ 0x140B0A7A8 (sub_140B0A7A8.c)
 *     sub_140B15070 @ 0x140B15070 (sub_140B15070.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140B107A0 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1403EC00C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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
