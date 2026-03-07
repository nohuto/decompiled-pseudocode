void __fastcall UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo(UNDOWNDOBJSPRITEOVERLAPCLIP *this)
{
  __int64 v2; // rbp
  __int64 v3; // rcx
  __int64 i; // rdi
  __int64 j; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // esi
  _BYTE v9[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  v12 = *((_QWORD *)Gre::Base::Globals(this) + 7);
  GreAcquireSemaphore(v12);
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 23664LL); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v9, (struct EWNDOBJ *)j, (struct _SPRITESTATE *)v2);
      if ( (*(_DWORD *)(j + 184) & 0x200) != 0 )
      {
        v6 = *(_QWORD *)(j + 192);
        v7 = *(_QWORD *)(v2 + 704);
        v10 = v7;
        v11 = v6;
        if ( v6 )
        {
          if ( v7 )
          {
            v8 = 0;
            if ( *((_DWORD *)this + 2) )
            {
              while ( RGNOBJ::bInside((RGNOBJ *)&v11, (struct _RECTL *)(*((_QWORD *)this + 2) + 16LL * v8)) != 2 )
              {
                if ( ++v8 >= *((_DWORD *)this + 2) )
                  goto LABEL_11;
              }
              RGNOBJ::vSet((RGNOBJ *)&v10);
              vUpdateClientRgnOnSpriteOverlap((struct EWNDOBJ *)j, (struct RGNOBJ *)&v10);
              *(_QWORD *)(v2 + 704) = v10;
              *(_DWORD *)(j + 184) |= 0x800000u;
            }
          }
        }
      }
LABEL_11:
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v9);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
}
