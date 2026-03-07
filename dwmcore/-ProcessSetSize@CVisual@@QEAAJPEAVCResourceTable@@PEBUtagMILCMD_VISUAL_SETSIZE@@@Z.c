__int64 __fastcall CVisual::ProcessSetSize(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETSIZE *a3)
{
  CVisual::SetSize(this, *((float *)a3 + 2), *((float *)a3 + 3));
  return 0LL;
}
