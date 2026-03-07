char __fastcall EmpRuleParserStackPop(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _DWORD *a5)
{
  _QWORD *v5; // r10

  v5 = *(_QWORD **)(a1 + 8);
  if ( !v5 )
    return 0;
  *(_QWORD *)(a1 + 8) = *v5;
  --*(_DWORD *)a1;
  *a3 = *(v5 - 3);
  *a4 = *(v5 - 2);
  *a5 = *((_DWORD *)v5 - 2);
  *a2 = *((_DWORD *)v5 - 8);
  ExFreePoolWithTag(v5 - 4, 0x74734D45u);
  return 1;
}
