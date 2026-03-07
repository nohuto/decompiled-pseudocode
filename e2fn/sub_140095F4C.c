bool __fastcall sub_140095F4C(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v4; // r11
  int v5; // edx

  v4 = (_DWORD *)(*(_QWORD *)(a1 + 688) + *(_QWORD *)(a1 + 696) * a3);
  v5 = dword_1400DA168[(*v4 & 0xFFFFF) != 0
                     ? (*(_BYTE *)(a2 + 28) & 1) * (*(unsigned __int8 *)(a1 + 544) + 3 * *(unsigned __int8 *)(a1 + 546))
                     + 2
                     * ((*(_DWORD *)(a2 + 28) >> 1) & 1)
                     * (*(unsigned __int8 *)(a1 + 545) + 2 * *(unsigned __int8 *)(a1 + 547))
                     : 0];
  *(_DWORD *)(a2 + 40) = v5;
  *(_DWORD *)(a2 + 44) = *v4 & 0xFFFFF;
  return v5 != 0;
}
