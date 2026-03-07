void __fastcall xxxDCECalcCaptionButton(struct tagWND *a1, int a2, unsigned __int16 *a3)
{
  __int64 v4; // rdx
  unsigned __int16 v5; // ax
  __int64 v6; // rdx

  *a3 = 0;
  switch ( a2 )
  {
    case 5:
      if ( (unsigned int)xxxMNCanClose((__int64)a1) )
        *a3 = -4000;
      return;
    case 2:
      v4 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v4 + 30) & 2) == 0 )
        return;
      if ( (*(_BYTE *)(v4 + 31) & 0x20) == 0 )
      {
        v5 = -4064;
        goto LABEL_16;
      }
LABEL_7:
      v5 = -3808;
LABEL_16:
      *a3 = v5;
      return;
    case 3:
      v6 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v6 + 30) & 1) == 0 )
        return;
      if ( (*(_BYTE *)(v6 + 31) & 1) == 0 )
      {
        v5 = -4048;
        goto LABEL_16;
      }
      goto LABEL_7;
  }
  if ( a2 == 4 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
  {
    v5 = -3712;
    goto LABEL_16;
  }
}
