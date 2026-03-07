void __fastcall MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS(struct _SPRITESTATE **this)
{
  struct _SPRITESTATE *v1; // r8
  __int64 v3; // rbx
  __int64 v4; // rax

  v1 = *this;
  if ( *this )
  {
    if ( *((_DWORD *)v1 + 15) )
    {
      v3 = 0LL;
      do
      {
        v4 = *(_QWORD *)(*((_QWORD *)v1 + 8) + 8 * v3);
        if ( *(_DWORD *)(v4 + 168) && (*(_DWORD *)(v4 + 40) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v4 + 80), 0);
        v1 = *this;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)*this + 15) );
    }
    else if ( *((_DWORD *)v1 + 22) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 40LL) & 0x20000) == 0 )
        vSpDirectDriverAccess(*this, 0);
    }
  }
}
