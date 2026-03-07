__int64 __fastcall CVisual::ProcessTopLevelNode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_TOPLEVELNODE *a3)
{
  char v3; // al
  unsigned __int64 v4; // rdx

  v3 = *((_BYTE *)this + 100);
  v4 = 0LL;
  if ( *((_BYTE *)a3 + 16) )
  {
    *((_BYTE *)this + 100) = v3 | 0x40;
    v4 = *((_QWORD *)a3 + 1);
  }
  else
  {
    *((_BYTE *)this + 100) = v3 & 0xBF;
  }
  CVisual::SetTopLevelWindow(this, v4);
  return 0LL;
}
