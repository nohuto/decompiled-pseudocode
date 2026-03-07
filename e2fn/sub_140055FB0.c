void __fastcall sub_140055FB0(__int64 a1)
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
  sub_1400011A8(&v2, (__int64)L"CRC Error", 9uLL);
  sub_14007C27C(a1, &v2, 0x4000LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Alignment Error", 0xFuLL);
  sub_14007C27C(a1, &v2, 16388LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Missed Packets", 0xEuLL);
  sub_14007C27C(a1, &v2, 16400LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Single Collision", 0x10uLL);
  sub_14007C27C(a1, &v2, 16404LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Excessive Collision", 0x13uLL);
  sub_14007C27C(a1, &v2, 16408LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Multiple Collision", 0x12uLL);
  sub_14007C27C(a1, &v2, 16412LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Late Collision", 0xEuLL);
  sub_14007C27C(a1, &v2, 16416LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Collision", 9uLL);
  sub_14007C27C(a1, &v2, 16424LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Receive Error", 0xDuLL);
  sub_14007C27C(a1, &v2, 16428LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Defer", 5uLL);
  sub_14007C27C(a1, &v2, 16432LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"ReceiveLengthError", 0x12uLL);
  sub_14007C27C(a1, &v2, 16448LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Receive 64", 0x11uLL);
  sub_14007C27C(a1, &v2, 16476LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Receive 127", 0x12uLL);
  sub_14007C27C(a1, &v2, 16480LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Receive 255", 0x12uLL);
  sub_14007C27C(a1, &v2, 16484LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Receive 511", 0x12uLL);
  sub_14007C27C(a1, &v2, 16488LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Receive 1023", 0x13uLL);
  sub_14007C27C(a1, &v2, 16492LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Packet Receive 1522", 0x13uLL);
  sub_14007C27C(a1, &v2, 16496LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Good Packet Receive", 0x13uLL);
  sub_14007C27C(a1, &v2, 16500LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Broadcast Packet Receive", 0x18uLL);
  sub_14007C27C(a1, &v2, 16504LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Multicast Packet Receive", 0x18uLL);
  sub_14007C27C(a1, &v2, 16508LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Receive No Buffers", 0x12uLL);
  sub_14007C27C(a1, &v2, 16544LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Receive Fragment", 0x10uLL);
  sub_14007C27C(a1, &v2, 16552LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Total Packet Receive", 0x14uLL);
  sub_14007C27C(a1, &v2, 16592LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v2 = &off_1400D41D0;
  v3 = 0;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Interrupt Assertion", 0x13uLL);
  sub_14007C27C(a1, &v2, 16640LL);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
}
