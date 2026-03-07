__int64 __fastcall CProjectedShadowCaster::ProcessSetCastingVisual(
        CProjectedShadowScene ***this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWCASTER_SETCASTINGVISUAL *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CComposition **Resource; // rax
  unsigned int v8; // ecx

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = (CComposition **)CResourceTable::GetResource(a2, v5, 196LL)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x55u, 0LL);
  }
  else
  {
    CProjectedShadowCaster::SetCastingVisual(this, Resource);
  }
  return v4;
}
