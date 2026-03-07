struct SPRITE *__fastcall pSpMoveSpriteFromMeta(HDEV a1, _QWORD *a2, struct _METASPRITE *a3, unsigned int a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 i; // rsi
  struct SPRITE *v10; // rcx
  __int64 v11; // rax
  __int64 j; // rcx

  v7 = *((_QWORD *)a3 + a4 + 3);
  if ( v7 )
    *(_QWORD *)(v7 + 8) = 0LL;
  v8 = 0LL;
  for ( i = v7 & -(__int64)(*(_QWORD *)a3 != 0LL); (unsigned int)v8 < *((_DWORD *)a3 + 5); v8 = (unsigned int)(v8 + 1) )
  {
    if ( (_DWORD)v8 != a4 || !i )
    {
      v10 = (struct SPRITE *)*((_QWORD *)a3 + v8 + 3);
      if ( (*(_DWORD *)v10 & 0x40) != 0 )
        pSpHintSpriteShape(v10, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + v8 + 3));
    }
  }
  v11 = a2[19];
  if ( (struct _METASPRITE *)v11 == a3 )
  {
    a2[19] = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( j = *(_QWORD *)(v11 + 8); (struct _METASPRITE *)j != a3; j = *(_QWORD *)(j + 8) )
      v11 = j;
    *(_QWORD *)(v11 + 8) = *((_QWORD *)a3 + 1);
  }
  Win32FreePool(a3);
  return (struct SPRITE *)i;
}
