/*
 * XREFs of ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00EE2C0
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00EE000 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00EE310 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS(struct _SPRITESTATE **this)
{
  struct _SPRITESTATE *v1; // r8
  __int64 v3; // rbx
  struct _SPRITESTATE *v4; // r9
  __int64 v5; // rax

  v1 = *this;
  if ( *this )
  {
    if ( *((_DWORD *)v1 + 15) )
    {
      v3 = 0LL;
      do
      {
        v4 = v1;
        v5 = *(_QWORD *)(*((_QWORD *)v1 + 8) + 8 * v3);
        if ( *(_DWORD *)(v5 + 176) && (*(_DWORD *)(v5 + 40) & 0x20000) == 0 )
        {
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v5 + 88), 0);
          v4 = *this;
        }
        v3 = (unsigned int)(v3 + 1);
        v1 = v4;
      }
      while ( (unsigned int)v3 < *((_DWORD *)v4 + 15) );
    }
    else if ( *((_DWORD *)v1 + 22) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 40LL) & 0x20000) == 0 )
        vSpDirectDriverAccess(*this, 0);
    }
  }
}
