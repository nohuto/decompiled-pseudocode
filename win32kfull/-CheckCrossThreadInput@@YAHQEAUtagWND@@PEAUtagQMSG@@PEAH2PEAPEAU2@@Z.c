__int64 __fastcall CheckCrossThreadInput(
        struct tagWND *const a1,
        struct tagQMSG *a2,
        int *a3,
        int *a4,
        struct tagQMSG **a5)
{
  struct tagTHREADINFO *v9; // r11
  int v10; // esi
  int v11; // eax
  __int64 result; // rax
  char v13; // al

  v9 = (struct tagTHREADINFO *)gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 672LL)
    || *(struct tagQMSG **)(*(_QWORD *)(gptiCurrent + 432LL) + 88LL) != a2
    || a2 == (struct tagQMSG *)1 )
  {
    goto LABEL_7;
  }
  v10 = *((_DWORD *)a2 + 25);
  if ( (v10 & 0x20) != 0 )
  {
    *a3 = 0;
    *a5 = a2;
    return 0LL;
  }
  if ( (v10 & 0x40) != 0
    || (v11 = *((_DWORD *)a1 + 65)) == 0
    || (v11 & 2) == 0
    || (v13 = CalcWakeMask(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 6), 0),
        (v13 & 2) == 0 || v9 == *((struct tagTHREADINFO **)a1 + 33)) )
  {
LABEL_7:
    *a3 = *((_QWORD *)a1 + 2) != (_QWORD)v9;
    *a5 = 0LL;
    return 0LL;
  }
  *((_DWORD *)a2 + 25) = v10 | 0x20;
  ReassignInputMessage(v9, *((struct tagTHREADINFO **)a1 + 33), a2);
  result = 1LL;
  *((_QWORD *)a2 + 2) = *(_QWORD *)a1;
  *a4 = 0;
  *a3 = 0;
  return result;
}
