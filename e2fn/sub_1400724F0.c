__int64 __fastcall sub_1400724F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 144) + 8LL))(a1 - 144);
  v4 = &unk_1400D44E0;
  if ( *(_QWORD *)(v3 + 16) )
    v4 = *(void **)(v3 + 16);
  return (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v4, 2LL * *(_QWORD *)(v3 + 24));
}
