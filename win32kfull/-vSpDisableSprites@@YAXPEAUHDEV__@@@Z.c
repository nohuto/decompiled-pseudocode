void __fastcall vSpDisableSprites(_QWORD *a1)
{
  HDEV v1; // rdi
  __int64 v2; // rcx
  Gre::Base *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  REGION *v6; // rcx
  REGION *v7; // rcx
  REGION *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v1 = (HDEV)(a1 + 10);
  v2 = a1[150];
  *((_QWORD *)v1 + 140) = 0LL;
  *((_QWORD *)v1 + 139) = 0LL;
  *((_DWORD *)v1 + 271) = 0;
  if ( v2 )
  {
    do
    {
      v9 = *(_QWORD *)(v2 + 24);
      vSpDeleteSprite((struct SPRITE *)v2);
      v2 = v9;
    }
    while ( v9 );
  }
  vSpDeleteExMirror(*(HDEV *)v1);
  if ( !*((_DWORD *)Gre::Base::Globals(v3) + 798) )
    vSpDeleteSurface(*((struct _SURFOBJ **)v1 + 128));
  v10 = *((_QWORD *)v1 + 87);
  v11 = *((_QWORD *)v1 + 88);
  v12 = *((_QWORD *)v1 + 108);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
  GreDeleteObject(*((_QWORD *)v1 + 132));
  v4 = (void *)*((_QWORD *)v1 + 17);
  if ( v4 )
    Win32FreePool(v4);
  v5 = (void *)*((_QWORD *)v1 + 8);
  if ( v5 )
    EngFreeMem(v5);
  v6 = (REGION *)*((_QWORD *)v1 + 129);
  if ( v6 )
    REGION::vDeleteREGION(v6);
  v7 = (REGION *)*((_QWORD *)v1 + 130);
  if ( v7 )
    REGION::vDeleteREGION(v7);
  v8 = (REGION *)*((_QWORD *)v1 + 131);
  if ( v8 )
    REGION::vDeleteREGION(v8);
  if ( *((_QWORD *)v1 + 15) )
    GreDeleteSemaphore();
  if ( *((_QWORD *)v1 + 16) )
    GreDeleteSemaphore();
  memset_0(v1, 0, 0x540uLL);
}
