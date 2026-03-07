void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  _DWORD *v2; // rbx
  _QWORD *v3; // rsi
  struct HOBJ__ *EmptyRgnPublic; // rsi
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rbp
  HRGN v8; // rcx
  int v9; // r9d
  HRGN v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( !qword_1C02D6C20 || (int)qword_1C02D6C20() < 0 )
  {
    v2 = (_DWORD *)((char *)a1 + 64);
    v3 = (_QWORD *)((char *)a1 + 16);
LABEL_12:
    *v2 |= 0x10000000u;
    goto LABEL_6;
  }
  v2 = (_DWORD *)((char *)a1 + 64);
  v3 = (_QWORD *)((char *)a1 + 16);
  if ( !qword_1C02D6C28
    || !(unsigned int)qword_1C02D6C28(&v10, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3), *((unsigned int *)a1 + 16)) )
  {
    goto LABEL_12;
  }
  *v2 &= ~0x10000000u;
LABEL_6:
  if ( *((_QWORD *)a1 + 6) > 2uLL
    && (int)IsGetStyleWindowSupported() >= 0
    && qword_1C02D6C38
    && (v7 = qword_1C02D6C38(*v3, 2848LL)) != 0 )
  {
    EmptyRgnPublic = (struct HOBJ__ *)CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn(
      (HRGN)EmptyRgnPublic,
      *(_DWORD *)(*(_QWORD *)(v7 + 40) + 88LL),
      *(_DWORD *)(*(_QWORD *)(v7 + 40) + 92LL));
    v5 = 1;
    v2 = (_DWORD *)((char *)a1 + 64);
  }
  else
  {
    EmptyRgnPublic = (struct HOBJ__ *)*((_QWORD *)a1 + 6);
    v5 = 0;
  }
  if ( (*v2 & 0x80u) != 0 )
  {
    v8 = v10;
    if ( EmptyRgnPublic )
    {
      v9 = 1;
LABEL_19:
      GreCombineRgn(v8, v8, (HRGN)EmptyRgnPublic, v9);
      goto LABEL_10;
    }
  }
  else
  {
    if ( (*v2 & 0x40) == 0 )
      goto LABEL_10;
    v8 = v10;
    if ( EmptyRgnPublic != (struct HOBJ__ *)1 )
    {
      v9 = 4;
      goto LABEL_19;
    }
  }
  GreSetRectRgn(v8, gZero.LowPart, gZero.HighPart, 0, 0);
LABEL_10:
  ResetOrg(v10, a1, 1);
  if ( v5 )
    GreDeleteObject(EmptyRgnPublic, v6);
}
