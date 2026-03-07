__int64 __fastcall NlsKanaModeToggleProc(struct tagKE *a1)
{
  __int16 v1; // bx
  int v3; // eax
  __int16 v4; // dx
  __int16 v5; // ax
  __int16 v6; // dx
  __int64 result; // rax

  v1 = *((_WORD *)a1 + 1);
  v3 = NlsTestKeyStateToggle(0x15u);
  v4 = *((_WORD *)a1 + 1) & 0xF00;
  *((_WORD *)a1 + 1) = v4;
  if ( v1 < 0 )
    return 0LL;
  if ( v3 )
    v5 = -32747;
  else
    v5 = 21;
  v6 = v5 | v4;
  result = 1LL;
  *((_WORD *)a1 + 1) = v6;
  return result;
}
