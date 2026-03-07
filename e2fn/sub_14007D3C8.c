__int64 __fastcall sub_14007D3C8(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 384);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  LODWORD(a2) = sub_14007D834(a1, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  return (unsigned int)a2;
}
