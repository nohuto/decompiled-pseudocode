void *(__fastcall **__fastcall sub_14002A960(__int64 a1, __int64 a2))(CUnknown *__hidden this, unsigned int)
{
  __int64 (__fastcall **v4)(PVOID); // rdx
  void (__fastcall *v5)(__int64, __int64); // rax
  PVOID v6; // rbx
  PVOID v7; // rdx
  __int64 (__fastcall **v9)(PVOID); // [rsp+28h] [rbp-49h] BYREF
  __int16 v10; // [rsp+30h] [rbp-41h]
  PVOID P; // [rsp+38h] [rbp-39h]
  __int64 v12; // [rsp+40h] [rbp-31h]
  __int64 v13; // [rsp+48h] [rbp-29h]
  __int64 (__fastcall **v14)(PVOID); // [rsp+58h] [rbp-19h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+60h] [rbp-11h]
  unsigned __int64 v16; // [rsp+A0h] [rbp+2Fh]
  BOOL v17; // [rsp+A8h] [rbp+37h]

  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"m_arpOffloadEnabled", 0x13uLL);
  LOBYTE(a1) = *(_BYTE *)(a1 + 416);
  sub_1400120E0((__int64)&v14, (__int64)&v9);
  v15 = off_1400D59C0;
  v4 = &off_1400D5998;
  v14 = &off_1400D5998;
  v16 = 0xA5A5A5A5A5000013uLL;
  v17 = (_BYTE)a1 != 0;
  if ( P )
  {
    ExFreePool(P);
    v4 = v14;
  }
  v5 = (void (__fastcall *)(__int64, __int64))v4[4];
  if ( v5 == sub_140007740 )
    sub_140007740((__int64)&v14, a2);
  else
    v5((__int64)&v14, a2);
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
  v14 = &off_1400D5998;
  v15 = off_1400D59C0;
  return sub_140005CFC(&v14);
}
