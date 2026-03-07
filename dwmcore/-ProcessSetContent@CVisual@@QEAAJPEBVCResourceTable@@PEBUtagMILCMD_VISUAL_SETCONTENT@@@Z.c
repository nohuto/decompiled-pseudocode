__int64 __fastcall CVisual::ProcessSetContent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTENT *a3)
{
  unsigned int v3; // eax
  const struct CResourceTable *v4; // r9
  __int64 Resource; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v3 = *((_DWORD *)a3 + 2);
  v4 = a2;
  Resource = 0LL;
  if ( v3 && (Resource = CResourceTable::GetResource((__int64)v4, v3, 0x2Fu)) == 0 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0xB61u, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(CVisual *, __int64, const struct tagMILCMD_VISUAL_SETCONTENT *, const struct CResourceTable *))(*(_QWORD *)this + 312LL))(
           this,
           Resource,
           a3,
           v4);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xB65u, 0LL);
  }
  return v10;
}
