void __fastcall sub_140071A6C(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int64 *v7; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF

  v7 = *(__int64 **)(a1 + 144);
  if ( v7 )
  {
    v11 = *v7;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, &v13);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64, int, int, int, int))(v11 + 16))(
      v7,
      a2,
      v12,
      a3,
      a4,
      a5,
      a6,
      a7);
  }
}
