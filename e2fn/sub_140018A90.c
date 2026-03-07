__int64 __fastcall sub_140018A90(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall **v5)(PVOID); // rax
  PVOID v6; // rbx
  PVOID v7; // rdx
  __int64 (__fastcall **v9)(PVOID); // [rsp+28h] [rbp-59h] BYREF
  __int16 v10; // [rsp+30h] [rbp-51h]
  PVOID P; // [rsp+38h] [rbp-49h]
  __int64 v12; // [rsp+40h] [rbp-41h]
  __int64 v13; // [rsp+48h] [rbp-39h]
  __int64 (__fastcall **v14)(PVOID); // [rsp+58h] [rbp-29h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+60h] [rbp-21h]
  unsigned __int64 v16; // [rsp+A0h] [rbp+1Fh]
  __int64 v17; // [rsp+A8h] [rbp+27h]
  __int64 v18; // [rsp+B0h] [rbp+2Fh]

  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"st_packetDroppedCounter", 0x17uLL);
  v4 = *(_QWORD *)(a1 + 656);
  sub_1400120E0((__int64)&v14, (__int64)&v9);
  v18 = 10LL;
  v5 = &off_1400D46F8;
  v14 = &off_1400D46F8;
  v15 = off_1400D4720;
  v16 = 0xA5A5A5A5A5000012uLL;
  v17 = v4;
  if ( P )
  {
    ExFreePool(P);
    v5 = v14;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v5[4])(&v14, a2);
  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)qword_1400B6F30, 1uLL);
  v6 = P;
  v7 = &unk_1400D44E0;
  if ( P )
    v7 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v12);
  if ( v6 )
    ExFreePool(v6);
  v14 = &off_1400D46F8;
  v15 = off_1400D4720;
  sub_140005CFC(&v14);
  return sub_140087050(a1, a2);
}
