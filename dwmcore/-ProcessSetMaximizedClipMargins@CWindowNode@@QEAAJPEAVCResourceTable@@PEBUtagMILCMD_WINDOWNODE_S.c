__int64 __fastcall CWindowNode::ProcessSetMaximizedClipMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS *a3)
{
  if ( *((_DWORD *)this + 214) != *((_DWORD *)a3 + 2)
    || *((_DWORD *)this + 215) != *((_DWORD *)a3 + 3)
    || *((_DWORD *)this + 216) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)this + 217) != *((_DWORD *)a3 + 5) )
  {
    *(_OWORD *)((char *)this + 856) = *(_OWORD *)((char *)a3 + 8);
    CVisual::PropagateFlags(this, 5LL);
  }
  return 0LL;
}
