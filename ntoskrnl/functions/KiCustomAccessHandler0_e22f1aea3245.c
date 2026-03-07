__int64 __fastcall KiCustomAccessHandler0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0x66) == 0 )
  {
    v3 = __rdtsc();
    *(_QWORD *)(a1 + 40) = (unsigned int)v3;
    *(_QWORD *)(a1 + 40) ^= HIDWORD(v3);
    a3[19] -= ((unsigned int)v3 >> 5) & 0x70;
    *(_DWORD *)a1 = BYTE4(v3) & 0x7F | 0xC0000000;
    *(_QWORD *)(a1 + 16) = KiCustomAccessHandler0;
    a3[31] = KiCustomAccessHandler0;
    a3[17] = 0LL;
  }
  return 1LL;
}
