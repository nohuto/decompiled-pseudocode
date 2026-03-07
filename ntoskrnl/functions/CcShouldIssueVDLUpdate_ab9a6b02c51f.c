char __fastcall CcShouldIssueVDLUpdate(__int64 a1)
{
  _QWORD *v1; // rax
  char v2; // dl
  char v3; // r8
  char v4; // al
  __int64 v6; // rax

  if ( CcEnablePerVolumeLazyWriter )
    v1 = (_QWORD *)(*(_QWORD *)(a1 + 600) + 1104LL);
  else
    v1 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 1168LL);
  v2 = 1;
  if ( *(_DWORD *)(a1 + 4) <= 1u || (v3 = 1, (_QWORD *)*v1 == v1) )
    v3 = 0;
  if ( (*(_DWORD *)(a1 + 152) & 0x400) == 0
    || (v6 = *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48) < v6)
    || v6 == 0x7FFFFFFFFFFFFFFFLL
    || (v4 = 1, !*(_QWORD *)(a1 + 8)) )
  {
    v4 = 0;
  }
  if ( *(_DWORD *)(a1 + 524) || !v4 || v3 )
    return 0;
  return v2;
}
