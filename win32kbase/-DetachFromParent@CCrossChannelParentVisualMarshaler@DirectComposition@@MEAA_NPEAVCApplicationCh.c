bool __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::DetachFromParent(
        DirectComposition::CCrossChannelParentVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  _QWORD *v3; // rcx
  int v4; // eax
  unsigned int v5; // ecx
  bool result; // al

  v3 = (_QWORD *)*((_QWORD *)this + 47);
  if ( v3 )
  {
    *v3 = *((_QWORD *)a2 + 50);
    *((_QWORD *)a2 + 50) = v3;
    *((_QWORD *)this + 47) = 0LL;
  }
  v4 = *((_DWORD *)this + 4);
  *((_QWORD *)this + 24) = 0LL;
  v5 = v4 & 0xFFFFFFEF;
  result = (v4 & 0x10) != 0;
  *((_DWORD *)this + 4) = v5;
  return result;
}
