void __fastcall sub_140021990(__int64 a1)
{
  __int64 (__fastcall **v2)(PVOID); // [rsp+20h] [rbp-38h] BYREF
  __int16 v3; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v5; // [rsp+38h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-18h]

  sub_140055FB0();
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Rx Packets To Host", 0x12uLL);
  sub_14007C27C(a1, &v2, 16644LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
}
