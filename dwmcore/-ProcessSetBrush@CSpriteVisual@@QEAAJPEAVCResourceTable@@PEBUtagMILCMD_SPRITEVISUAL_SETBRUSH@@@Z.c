__int64 __fastcall CSpriteVisual::ProcessSetBrush(
        CSpriteVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVISUAL_SETBRUSH *a3)
{
  struct CContent *Resource; // rax
  __int64 v5; // rdx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  Resource = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 && (Resource = (struct CContent *)CResourceTable::GetResource(a2, v5, 17LL)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x3Cu, 0LL);
  }
  else
  {
    v8 = CVisual::SetContent(this, Resource);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x40u, 0LL);
  }
  return v10;
}
