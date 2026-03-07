unsigned __int64 __fastcall sub_1400995DC(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v3; // r10
  unsigned __int64 result; // rax

  v3 = *a3 & 0xFC | 1;
  *a3 = v3;
  *a3 = v3 ^ (v3 ^ (4
                  * byte_1400DA368[4
                                 * (((*(unsigned __int16 *)(a2 + 2) >> 2) & 1) << ((*(_WORD *)(a2 + 2) & 0x200) != 0))
                                 * *(unsigned __int8 *)(a1 + 696)])) & 0xC;
  _InterlockedAdd64(
    (volatile signed __int64 *)(a1 + 904),
    ~((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 9) & ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 2) & 1);
  *a3 ^= (*a3 ^ (16
               * byte_1400DA368[4
                              * ((((*(unsigned __int16 *)(a2 + 2) >> 4) & *(unsigned __int8 *)(a1 + 697) | (*(unsigned __int16 *)(a2 + 2) >> 5) & *(unsigned __int8 *)(a1 + 698)) & ((*(_WORD *)(a2 + 2) & 0xC) != 0)) << ((*(_WORD *)(a2 + 2) & 0x400) != 0))])) & 0x30;
  _InterlockedAdd64(
    (volatile signed __int64 *)(a1 + 912),
    ~((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 10) & ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 4) & 1);
  result = ~((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 10);
  _InterlockedAdd64(
    (volatile signed __int64 *)(a1 + 920),
    result & ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 5) & 1);
  return result;
}
