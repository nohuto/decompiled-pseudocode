__int64 __fastcall CD2DResourceManager::Create(struct CD2DContext *a1, struct CD2DResourceManager **a2)
{
  unsigned int v3; // ebx
  _DWORD *v5; // rax
  __int64 v6; // rcx

  v3 = 0;
  v5 = operator new(0x20uLL);
  if ( v5 )
  {
    v5[4] = 0;
    *((_QWORD *)v5 + 3) = a1;
    *((_QWORD *)v5 + 1) = v5;
    *(_QWORD *)v5 = v5;
    *a2 = (struct CD2DResourceManager *)v5;
  }
  else
  {
    *a2 = 0LL;
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0xFu, 0LL);
  }
  return v3;
}
