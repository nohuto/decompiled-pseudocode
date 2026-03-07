__int64 __fastcall sub_140003960(__int64 a1, __int64 a2)
{
  void *v3; // rdx

  v3 = &unk_1400D44E0;
  if ( *(_QWORD *)(a1 + 56) )
    v3 = *(void **)(a1 + 56);
  return (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v3, 2LL * *(_QWORD *)(a1 + 64));
}
