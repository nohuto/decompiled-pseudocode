char __fastcall CComposition::GetCompositorClockBoost(CComposition *this)
{
  __int64 v1; // rax
  char v2; // r9

  v1 = *((_QWORD *)this + 27);
  v2 = 0;
  if ( (!*(_BYTE *)(v1 + 581) || *(_BYTE *)(v1 + 582))
    && (*((_DWORD *)this + 307) || CSuperWetInkManager::HasActiveInk(*((CSuperWetInkManager **)this + 32))) )
  {
    return 1;
  }
  return v2;
}
