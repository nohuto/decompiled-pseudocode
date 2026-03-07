__int64 __fastcall CRenderDataBuilder::DrawBitmap(CRenderDataBuilder *this, int a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = DynArrayImpl<0>::Grow((unsigned __int64)this + 16, 1u, 16, 0, 0LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x64u, 0LL);
  }
  else
  {
    v7 = *((unsigned int *)this + 10);
    v8 = *((_QWORD *)this + 2);
    *(_DWORD *)(v7 + v8) = 16;
    *(_QWORD *)(v7 + v8 + 8) = 0LL;
    *(_DWORD *)(v7 + v8 + 4) = 443;
    *(_DWORD *)(v7 + v8 + 8) = a2;
    *((_DWORD *)this + 10) += 16;
  }
  return v6;
}
