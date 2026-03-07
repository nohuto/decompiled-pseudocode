__int64 __fastcall sub_14014148C(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rdi
  PVOID v6; // r15
  unsigned __int64 v7; // r8
  PVOID v8; // r14
  PVOID v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 (__fastcall **v18)(PVOID); // [rsp+20h] [rbp-50h] BYREF
  __int16 v19; // [rsp+28h] [rbp-48h]
  PVOID v20; // [rsp+30h] [rbp-40h]
  unsigned __int64 v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall **v23)(PVOID); // [rsp+48h] [rbp-28h] BYREF
  __int16 v24; // [rsp+50h] [rbp-20h]
  PVOID P; // [rsp+58h] [rbp-18h]
  unsigned __int64 v26; // [rsp+60h] [rbp-10h]
  __int64 v27; // [rsp+68h] [rbp-8h]

  *(_QWORD *)a2 = &off_1400D41D0;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  sub_1400011A8((_QWORD *)a2, (__int64)L"Directed: ", 0xAuLL);
  v18 = &off_1400D41D0;
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  sub_1400011A8(&v18, (__int64)L"ENA", 3uLL);
  v23 = &off_1400D41D0;
  v24 = 0;
  P = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  sub_1400011A8(&v23, (__int64)L"DIS", 3uLL);
  v5 = v26;
  v6 = P;
  v7 = v26;
  v8 = v20;
  v9 = P;
  if ( (a3 & 1) != 0 )
  {
    v7 = v21;
    v9 = v20;
  }
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, (__int64)v9, v7);
  else
    sub_1400011A8((_QWORD *)a2, (__int64)v9, v7);
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, (__int64)L", Multicast: ", 13LL);
  else
    sub_1400011A8((_QWORD *)a2, (__int64)L", Multicast: ", 0xDuLL);
  v10 = v5;
  v11 = (__int64)v6;
  if ( (a3 & 2) != 0 )
  {
    v10 = v21;
    v11 = (__int64)v8;
  }
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, v11, v10);
  else
    sub_1400011A8((_QWORD *)a2, v11, v10);
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, (__int64)L", All Multicast: ", 17LL);
  else
    sub_1400011A8((_QWORD *)a2, (__int64)L", All Multicast: ", 0x11uLL);
  v12 = v5;
  v13 = (__int64)v6;
  if ( (a3 & 4) != 0 )
  {
    v12 = v21;
    v13 = (__int64)v8;
  }
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, v13, v12);
  else
    sub_1400011A8((_QWORD *)a2, v13, v12);
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, (__int64)L", Broadcast: ", 13LL);
  else
    sub_1400011A8((_QWORD *)a2, (__int64)L", Broadcast: ", 0xDuLL);
  v14 = v5;
  v15 = (__int64)v6;
  if ( (a3 & 8) != 0 )
  {
    v14 = v21;
    v15 = (__int64)v8;
  }
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, v15, v14);
  else
    sub_1400011A8((_QWORD *)a2, v15, v14);
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, (__int64)L", Promiscuous: ", 15LL);
  else
    sub_1400011A8((_QWORD *)a2, (__int64)L", Promiscuous: ", 0xFuLL);
  v16 = (__int64)v6;
  if ( (a3 & 0x20) != 0 )
  {
    v5 = v21;
    v16 = (__int64)v8;
  }
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, v16, v5);
  else
    sub_1400011A8((_QWORD *)a2, v16, v5);
  if ( v6 )
    ExFreePool(v6);
  if ( v8 )
    ExFreePool(v8);
  return a2;
}
