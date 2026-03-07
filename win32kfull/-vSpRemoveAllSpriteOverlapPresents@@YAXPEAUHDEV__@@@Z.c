void __fastcall vSpRemoveAllSpriteOverlapPresents(Gre::Base *a1)
{
  int v1; // ebp
  HDEV v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  struct _POINTL v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (HDEV)((char *)a1 + 80);
  v3 = (_QWORD *)*((_QWORD *)a1 + 20);
  v5 = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)v3[1];
      if ( !v1 )
      {
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, &v5, (struct _RECTL *)(v2 + 10), 0LL, 1);
        v1 = 1;
      }
      Win32FreePool(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  *((_QWORD *)v2 + 10) = 0LL;
  Gre::Base::Globals(a1);
  vSpComputeNoPresentRegion((struct _SPRITESTATE *)v2, 0);
}
