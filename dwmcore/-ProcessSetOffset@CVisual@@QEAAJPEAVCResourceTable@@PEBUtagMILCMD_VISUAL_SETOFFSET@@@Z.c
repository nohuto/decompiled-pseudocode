__int64 __fastcall CVisual::ProcessSetOffset(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOFFSET *a3)
{
  CVisual::SetOffset(this, *((float *)a3 + 2), *((float *)a3 + 3), *((float *)a3 + 4));
  return 0LL;
}
