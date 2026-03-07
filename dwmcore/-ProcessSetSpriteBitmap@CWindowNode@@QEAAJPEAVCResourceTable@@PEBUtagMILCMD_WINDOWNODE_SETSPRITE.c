__int64 __fastcall CWindowNode::ProcessSetSpriteBitmap(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSPRITEBITMAP *a3)
{
  struct CGdiSpriteBitmap *Resource; // rax
  unsigned int v5; // edx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 && (Resource = (struct CGdiSpriteBitmap *)CResourceTable::GetResource((__int64)a2, v5, 0x41u)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x175u, 0LL);
  }
  else
  {
    v8 = CWindowNode::SetSpriteBitmap(this, Resource);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x179u, 0LL);
  }
  return v10;
}
