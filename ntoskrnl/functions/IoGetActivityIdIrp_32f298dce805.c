__int64 __fastcall IoGetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v2 || (*(_BYTE *)(v2 + 2) & 1) == 0 )
    return 3221226021LL;
  result = 0LL;
  *a2 = *(_OWORD *)(*(_QWORD *)(a1 + 200) + 24LL);
  return result;
}
