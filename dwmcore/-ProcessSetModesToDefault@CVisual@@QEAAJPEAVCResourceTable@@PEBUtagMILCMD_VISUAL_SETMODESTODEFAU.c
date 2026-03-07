__int64 __fastcall CVisual::ProcessSetModesToDefault(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETMODESTODEFAULT *a3)
{
  unsigned int v3; // eax

  *((_BYTE *)this + 104) |= 0x3Eu;
  v3 = *((_DWORD *)this + 26) & 0xFFF807FF;
  *(_QWORD *)((char *)this + 196) = 1LL;
  *((_DWORD *)this + 26) = v3 | 0x400;
  *(_QWORD *)((char *)this + 204) = 0LL;
  CVisual::PropagateFlags((__int64)this, 5u);
  return 0LL;
}
