__int64 __fastcall sub_14006F80C(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  void *v5; // rbx
  void *v6; // rdx
  PVOID v7; // rdx
  __int64 (__fastcall **v9)(PVOID); // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  v4 = (*(__int64 (__fastcall **)(_QWORD *))(a1[7] + 8LL))(a1 + 7);
  v5 = &unk_1400D44E0;
  v6 = &unk_1400D44E0;
  if ( *(_QWORD *)(v4 + 16) )
    v6 = *(void **)(v4 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2LL * *(_QWORD *)(v4 + 24));
  v10 = 0;
  v9 = &off_1400D41D0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L" Acquired at: ", 0xEuLL);
  v7 = &unk_1400D44E0;
  if ( P )
    v7 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v12);
  if ( P )
    ExFreePool(P);
  if ( a1[49] )
    v5 = (void *)a1[49];
  return (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2LL * a1[50]);
}
