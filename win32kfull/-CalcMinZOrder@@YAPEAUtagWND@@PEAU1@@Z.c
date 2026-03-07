struct tagWND *__fastcall CalcMinZOrder(struct tagWND *a1)
{
  _QWORD *v2; // rdx
  char v3; // r9
  _QWORD *v4; // r8
  __int64 v5; // rcx

  v2 = (_QWORD *)*((_QWORD *)a1 + 11);
  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8;
  v4 = 0LL;
  while ( v2 )
  {
    v5 = v2[5];
    if ( (*(_BYTE *)(v5 + 20) & 0x20) != 0 || (*(_BYTE *)(v5 + 24) & 8) != v3 )
      break;
    if ( v2[15] == *((_QWORD *)a1 + 15) )
      v4 = v2;
    v2 = (_QWORD *)v2[11];
  }
  return (struct tagWND *)v4;
}
