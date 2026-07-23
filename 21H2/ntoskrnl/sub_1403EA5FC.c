/*
 * XREFs of sub_1403EA5FC @ 0x1403EA5FC
 * Callers:
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     sub_1403EA6DC @ 0x1403EA6DC (sub_1403EA6DC.c)
 *     sub_1403EB648 @ 0x1403EB648 (sub_1403EB648.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F9010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0D0FC @ 0x140A0D0FC (sub_140A0D0FC.c)
 *     sub_140A1CFE4 @ 0x140A1CFE4 (sub_140A1CFE4.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1403EA5FC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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
