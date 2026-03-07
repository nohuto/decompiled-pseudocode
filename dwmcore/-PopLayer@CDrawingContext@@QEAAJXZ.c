__int64 __fastcall CDrawingContext::PopLayer(CDrawingContext *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ecx
  __int128 v7; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 92);
  v2 = 0;
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    *((_DWORD *)this + 92) = v3;
    v7 = *(_OWORD *)(*((_QWORD *)this + 48) + 16 * v3);
  }
  if ( (_DWORD)v7 == 6 )
  {
    v4 = CDrawingContext::PopLayerInternal(this);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1028u, 0LL);
  }
  else if ( (_DWORD)v7 != 7 )
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v7 - 6, 0LL, 0, -2003292412, 0x1030u, 0LL);
  }
  return v2;
}
