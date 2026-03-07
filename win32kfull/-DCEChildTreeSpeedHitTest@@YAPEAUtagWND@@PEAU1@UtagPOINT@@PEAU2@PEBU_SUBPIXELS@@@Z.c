struct tagWND *__fastcall DCEChildTreeSpeedHitTest(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  struct tagWND *i; // rsi
  __int64 v9; // rcx
  struct tagPOINT v10; // rbx
  __int64 v11; // rcx
  struct tagWND *v12; // rax
  struct tagPOINT v14; // [rsp+40h] [rbp+8h] BYREF

  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); ; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( !i )
      return a1;
    if ( *((_QWORD *)i + 27) )
      break;
    v9 = *((_QWORD *)i + 5);
    v10 = *a3;
    if ( (*(_BYTE *)(v9 + 31) & 0x10) != 0
      && v10.x >= *(_DWORD *)(v9 + 88)
      && v10.x < *(_DWORD *)(v9 + 96)
      && v10.y >= *(_DWORD *)(v9 + 92)
      && v10.y < *(_DWORD *)(v9 + 100) )
    {
      v11 = *(_QWORD *)(v9 + 168);
      if ( (!v11 || (unsigned int)GrePtInRegion(v11, (unsigned int)v10.x, HIDWORD(*(unsigned __int64 *)&v10)))
        && ((*(_BYTE *)(*((_QWORD *)i + 5) + 26LL) & 8) == 0 || LayerHitTest(i, v10)) )
      {
        goto LABEL_11;
      }
    }
LABEL_17:
    ;
  }
  v14 = a2;
  if ( !(unsigned int)DCEIsWindowHit(i, &v14, a4) )
    goto LABEL_17;
  *a3 = v14;
LABEL_11:
  if ( *((_QWORD *)i + 14) )
  {
    if ( (unsigned int)PtInRect(*((_QWORD *)i + 5) + 104LL, *a3) )
    {
      v12 = DCEChildTreeSpeedHitTest(i, a2, a3, a4);
      if ( v12 )
      {
        if ( v12 != i )
          return v12;
      }
    }
  }
  return i;
}
