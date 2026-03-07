__int64 __fastcall CNineGridBrush::ProcessSetInsetProperty(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY *a3)
{
  unsigned int v3; // ebx
  float v4; // xmm2_4
  CNineGridBrush *v5; // rcx
  __int64 v6; // r8

  v3 = 0;
  v4 = *((float *)a3 + 3);
  if ( CNineGridBrush::TryGetInsetFieldPointer(this, *((_DWORD *)a3 + 2)) && v4 >= 0.0 )
  {
    CNineGridBrush::SetInsetProperty(v5, *(_DWORD *)(v6 + 8), v4);
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, -2003303421, 0x145u, 0LL);
  }
  return v3;
}
