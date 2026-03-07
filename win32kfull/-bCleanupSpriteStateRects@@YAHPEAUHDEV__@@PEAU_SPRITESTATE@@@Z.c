__int64 __fastcall bCleanupSpriteStateRects(HDEV a1, struct _SPRITESTATE *a2)
{
  void **v5; // rdi
  __int64 v6; // rsi
  void *v7; // r8

  if ( *((_DWORD *)a2 + 274) )
  {
    v5 = (void **)((char *)a2 + 1128);
    v6 = 4LL;
    do
    {
      if ( *v5 )
      {
        GreDeleteSprite(a1, 0LL, *v5, *((_DWORD *)a2 + 275));
        *v5 = 0LL;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    *((_DWORD *)a2 + 274) = 0;
  }
  if ( *((_DWORD *)a2 + 276) )
  {
    v7 = (void *)*((_QWORD *)a2 + 145);
    if ( v7 )
    {
      GreDeleteSprite(a1, 0LL, v7, *((_DWORD *)a2 + 277));
      *((_QWORD *)a2 + 145) = 0LL;
    }
    *((_DWORD *)a2 + 276) = 0;
    *((_DWORD *)a2 + 277) = 0;
    *(_OWORD *)((char *)a2 + 1172) = 0LL;
  }
  return 1LL;
}
