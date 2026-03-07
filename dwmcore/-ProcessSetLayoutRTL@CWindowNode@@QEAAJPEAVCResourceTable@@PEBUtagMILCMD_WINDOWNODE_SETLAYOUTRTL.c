__int64 __fastcall CWindowNode::ProcessSetLayoutRTL(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETLAYOUTRTL *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8) != 0;
  if ( *((_BYTE *)this + 892) != v3 )
  {
    *((_BYTE *)this + 892) = v3;
    CVisual::PropagateFlags((__int64)this, 4u);
  }
  return 0LL;
}
