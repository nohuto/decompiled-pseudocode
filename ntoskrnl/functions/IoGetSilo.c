__int64 __fastcall IoGetSilo(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( v1 && v1 != IopRevocationExtension && (v2 = v1[8]) != 0 )
    return *(_QWORD *)(v2 + 8);
  else
    return 0LL;
}
