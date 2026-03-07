__int64 __fastcall CWindowNode::ProcessSetAlphaMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETALPHAMARGINS *a3)
{
  int v3; // edx
  unsigned int v4; // ebx

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 < 0 || *((int *)a3 + 3) < 0 || *((int *)a3 + 4) < 0 || *((int *)a3 + 5) < 0 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x2A7u, 0LL);
  }
  else
  {
    v4 = 0;
    if ( *((_DWORD *)this + 209) != v3
      || *((_DWORD *)this + 210) != *((_DWORD *)a3 + 3)
      || *((_DWORD *)this + 211) != *((_DWORD *)a3 + 4)
      || *((_DWORD *)this + 212) != *((_DWORD *)a3 + 5) )
    {
      *(_OWORD *)((char *)this + 836) = *(_OWORD *)((char *)a3 + 8);
      CVisual::PropagateFlags((__int64)this, 4u);
    }
  }
  return v4;
}
