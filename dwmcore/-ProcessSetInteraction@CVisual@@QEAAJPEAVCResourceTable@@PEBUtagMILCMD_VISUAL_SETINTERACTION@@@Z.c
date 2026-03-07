__int64 __fastcall CVisual::ProcessSetInteraction(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETINTERACTION *a3)
{
  struct CInteraction *Resource; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  Resource = 0LL;
  if ( *((_DWORD *)a3 + 2) )
    Resource = (struct CInteraction *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x59u);
  v7 = CVisual::SetInteraction(this, Resource);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xD33u, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
  {
    McTemplateU0qqqxxpp_EventWriteTransfer(
      *((_DWORD *)a3 + 2),
      0,
      *((_DWORD *)a2 + 12),
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      (char)Resource,
      (char)Resource);
  }
  return v9;
}
