__int64 __fastcall CProjectedShadowCaster::ProcessSetAncestorClipVisual(
        CProjectedShadowCaster *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 Resource; // rax
  unsigned int v8; // ecx

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = CResourceTable::GetResource(a2, v5, 196LL)) == 0 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x6Cu, 0LL);
  }
  else if ( *((_QWORD *)this + 9) != Resource )
  {
    *((_QWORD *)this + 9) = Resource;
    CProjectedShadowCaster::RequestRedraw(this);
  }
  return v4;
}
