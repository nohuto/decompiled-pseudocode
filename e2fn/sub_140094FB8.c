_QWORD *__fastcall sub_140094FB8(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  void *v5; // rdx
  void *v6; // r8
  __int64 v7; // rax

  *a1 = a2;
  v3 = a3 + 56;
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a3 + 56) + 16LL))(a3 + 56, a1 + 1);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 24LL))(v3, a1 + 3);
  v5 = &unk_1400D44E0;
  v6 = &unk_1400D44E0;
  v7 = a1[1];
  if ( *(_QWORD *)(a1[3] + 16LL) )
    v6 = *(void **)(a1[3] + 16LL);
  if ( *(_QWORD *)(v7 + 16) )
    v5 = *(void **)(v7 + 16);
  sub_1400B168C(*a1, v5, v6);
  return a1;
}
