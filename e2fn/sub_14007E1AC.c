__int64 __fastcall sub_14007E1AC(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi

  v3 = *(_QWORD *)(a1 + 384);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v7 = sub_14007DDEC(a1, a2, a3);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  return v7;
}
