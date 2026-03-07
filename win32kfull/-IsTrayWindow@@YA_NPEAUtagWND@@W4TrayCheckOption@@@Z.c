bool __fastcall IsTrayWindow(struct tagWND *a1, char a2)
{
  __int64 v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  __int64 v7; // rax
  char v9; // al

  if ( !a1 )
    return 0;
  v3 = *((_QWORD *)a1 + 3);
  if ( !v3
    || (a2 & 1) != 0
    && ((*(_DWORD *)(gpsi + 2120LL) & 8) == 0
     || ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) == 0
     && !*(_QWORD *)(*(_QWORD *)(v3 + 8) + 192LL)) )
  {
    return 0;
  }
  if ( (a2 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 1) == 0 )
    return 0;
  v4 = *((_QWORD *)a1 + 13);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v3 + 8);
  if ( !v5 || v4 != *(_QWORD *)(v5 + 24) )
    return 0;
  v6 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v6[26] & 4) != 0 )
    return 1;
  if ( (char)v6[24] < 0 || (v6[27] & 8) != 0 )
    return 0;
  if ( (v6[21] & 2) != 0 )
  {
    v7 = *((_QWORD *)a1 + 15);
    if ( !v7 )
      return 1;
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 21LL) & 2) != 0 )
      return 0;
  }
  if ( (v6[20] & 0x40) != 0 )
    return (unsigned int)Is31TrayWindow(a1) != 0;
  v9 = v6[30];
  return (v9 & 0xA) != 0 && ((v9 & 0xC0) != 0 || (v6[31] & 0x20) != 0) && (unsigned int)Is31TrayWindow(a1) != 0;
}
