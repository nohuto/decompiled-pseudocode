unsigned __int8 __fastcall sub_140095EA4(__int64 a1, _BYTE *a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int8 result; // al

  v5 = a2[28] & (unsigned __int8)(*(_BYTE *)(a1 + 504) & byte_1400DA118[(((unsigned __int64)*a4 >> 2) & 3) + 16]) & 1;
  a2[36] = v5;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 816), v5);
  v6 = (unsigned __int8)(*(_BYTE *)(a1 + 506) & byte_1400DA118[(*(_BYTE *)(a3 + 4) & 0xF) + 8] & byte_1400DA118[(((unsigned __int64)*a4 >> 4) & 3) + 16]);
  a2[37] = v6;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 832), v6);
  result = *(_BYTE *)(a1 + 505) & byte_1400DA118[*(_BYTE *)(a3 + 4) & 0xF] & byte_1400DA118[(((unsigned __int64)*a4 >> 4) & 3)
                                                                                          + 16];
  a2[38] = result;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 824), result);
  return result;
}
