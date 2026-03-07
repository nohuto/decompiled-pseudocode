void __fastcall sub_140021B24(__int64 a1)
{
  __int64 (__fastcall **v2)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v3; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v5; // [rsp+38h] [rbp-18h]
  __int64 v6; // [rsp+40h] [rbp-10h]

  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Transmit With No CRS", 0x14uLL);
  sub_14007C27C(a1, &v2, 16436LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Host Transmit Discarded Packets By MAC", 0x26uLL);
  sub_14007C27C(a1, &v2, 16444LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Good Packet Transmitted", 0x17uLL);
  sub_14007C27C(a1, &v2, 16512LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Total Packet Transmitted", 0x18uLL);
  sub_14007C27C(a1, &v2, 16596LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Transmitted 64", 0x15uLL);
  sub_14007C27C(a1, &v2, 16600LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Transmitted 127", 0x16uLL);
  sub_14007C27C(a1, &v2, 16604LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Transmitted 255", 0x16uLL);
  sub_14007C27C(a1, &v2, 16608LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Transmitted 511", 0x16uLL);
  sub_14007C27C(a1, &v2, 16612LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Transmitted 1023", 0x17uLL);
  sub_14007C27C(a1, &v2, 16616LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Transmitted 1522", 0x17uLL);
  sub_14007C27C(a1, &v2, 16620LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Multicast Packet Transmitted", 0x1CuLL);
  sub_14007C27C(a1, &v2, 16624LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Broadcast Packet Transmitted", 0x1CuLL);
  sub_14007C27C(a1, &v2, 16628LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"TCP Segmentation Context", 0x18uLL);
  sub_14007C27C(a1, &v2, 16632LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
}
