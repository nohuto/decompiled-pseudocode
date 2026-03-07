__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, _QWORD *a4, int a5, int a6, __int64 a7, __int64 a8)
{
  unsigned int v8; // edx
  int v9; // r10d
  __int128 *Address; // r11
  int v12; // [rsp+40h] [rbp-38h]
  ULONGLONG ullMultiplicand; // [rsp+50h] [rbp-28h]
  __int128 v14; // [rsp+60h] [rbp-18h] BYREF

  v8 = a6;
  v9 = 0;
  Address = 0LL;
  v14 = 0LL;
  if ( (a6 & 0x7F) != 0 )
  {
    Address = &v14;
    v8 = a6 & 0xFFFFFF80;
    *(_QWORD *)&v14 = 2LL;
    v9 = 1;
    *((_QWORD *)&v14 + 1) = (a6 & 0x7Fu) - 1;
  }
  LODWORD(ullMultiplicand) = v9;
  return MmCreateSectionEx(a1, a3, *a4, a5, v8, a7, a8, 0, v12, Address, ullMultiplicand);
}
