bool __fastcall DirectComposition::CVisualMarshaler::DetachFromParent(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  int v2; // eax
  unsigned int v3; // edx
  bool result; // al

  v2 = *((_DWORD *)this + 4);
  *((_QWORD *)this + 24) = 0LL;
  v3 = v2 & 0xFFFFFFEF;
  result = (v2 & 0x10) != 0;
  *((_DWORD *)this + 4) = v3;
  return result;
}
