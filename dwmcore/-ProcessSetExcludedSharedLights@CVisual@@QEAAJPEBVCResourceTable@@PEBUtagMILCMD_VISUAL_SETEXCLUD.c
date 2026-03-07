__int64 __fastcall CVisual::ProcessSetExcludedSharedLights(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v5 = *((_DWORD *)a3 + 2);
  if ( a5 < v5 || (v5 & 3) != 0 )
  {
    v11 = -2003303421;
    v12 = -2003303421;
    v14 = 2986;
    goto LABEL_9;
  }
  v10 = CVisual::RemoveAllSharedLights(this, 1LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = 2989;
    goto LABEL_6;
  }
  v10 = CVisual::AddSharedLights((__int64)this, (_QWORD **)this + 35, 1u, a2, a4, *((_DWORD *)a3 + 2) >> 2);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = 2994;
LABEL_6:
    v12 = v10;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v12, v14, 0LL);
  }
  return v11;
}
