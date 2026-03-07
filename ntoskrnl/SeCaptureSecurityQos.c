__int64 __fastcall SeCaptureSecurityQos(__int64 a1, char a2, _BYTE *a3, __int64 a4)
{
  _DWORD *v4; // rax
  _DWORD *v6; // rax

  *a3 = 0;
  if ( a2 )
  {
    if ( !a1 )
      goto LABEL_6;
    if ( (a1 & 3) != 0 )
      goto LABEL_17;
    v6 = *(_DWORD **)(a1 + 40);
    if ( !v6 )
      goto LABEL_6;
    if ( ((unsigned __int8)v6 & 3) != 0 )
LABEL_17:
      ExRaiseDatatypeMisalignment();
    if ( *v6 != 12 )
      return 3221225485LL;
    *a3 = 1;
    *(_QWORD *)a4 = *(_QWORD *)v6;
    *(_DWORD *)(a4 + 8) = v6[2];
    *(_DWORD *)a4 = 12;
  }
  else if ( a1 && *(_QWORD *)(a1 + 40) )
  {
    *a3 = 1;
    v4 = *(_DWORD **)(a1 + 40);
    if ( *v4 != 12 )
      return 3221225485LL;
    *(_QWORD *)a4 = *(_QWORD *)v4;
    *(_DWORD *)(a4 + 8) = v4[2];
  }
LABEL_6:
  if ( !*a3 )
    return 0LL;
  if ( *(_BYTE *)(a4 + 8) >= 2u )
    return 3221225485LL;
  if ( *(_DWORD *)(a4 + 4) <= 3u )
    return 0LL;
  return 3221225637LL;
}
