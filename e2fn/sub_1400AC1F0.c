__int64 __fastcall sub_1400AC1F0(__int64 a1, __int64 a2, int a3)
{
  char v6; // di
  _QWORD *Pool2; // rbp
  _QWORD *v8; // rax
  __int64 (__fastcall **v10)(PVOID); // [rsp+20h] [rbp-58h] BYREF
  __int16 v11; // [rsp+28h] [rbp-50h]
  PVOID P; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400D44C8;
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 640LL, 1685091442LL);
  if ( Pool2 )
  {
    v10 = &off_1400D41D0;
    v11 = 0;
    P = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    if ( a2 )
      sub_1400011A8(&v10, a2, 0x15uLL);
    v8 = sub_14005C6A4(Pool2, (int)&v10, a3);
    v6 = 1;
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v8;
  if ( (v6 & 1) != 0 )
  {
    v10 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
  }
  return a1;
}
