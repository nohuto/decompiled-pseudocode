__int64 __fastcall IoGetSiloParameters(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( !v1 || v1 == IopRevocationExtension )
    return 0LL;
  else
    return v1[8];
}
