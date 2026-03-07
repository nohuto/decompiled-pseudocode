_QWORD *__fastcall sub_140061564(_QWORD *a1, int a2)
{
  __int64 (__fastcall **v5)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v6; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v8; // [rsp+48h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp-10h]

  v5 = &off_1400D41D0;
  v6 = 0;
  P = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  sub_1400011A8(&v5, (__int64)L"File Accessor Factory", 0x15uLL);
  sub_140070F24((_DWORD)a1, (unsigned int)&v5, a2, 0, 1000);
  v5 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *a1 = &off_1400D8260;
  a1[7] = off_1400D8288;
  a1[25] = off_1400D82B8;
  a1[44] = &off_1400D8300;
  a1[45] = 0xA5A5A5A5A5000084uLL;
  return a1;
}
