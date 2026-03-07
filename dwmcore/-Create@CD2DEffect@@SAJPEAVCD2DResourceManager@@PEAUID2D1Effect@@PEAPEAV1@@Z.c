__int64 __fastcall CD2DEffect::Create(struct CD2DResourceManager *a1, struct ID2D1Effect *a2, struct CD2DEffect **a3)
{
  CD2DEffect *v6; // rax
  unsigned int v7; // ecx
  CD2DEffect *v8; // rax
  CD2DEffect *v9; // rbx
  unsigned int v10; // edi

  *a3 = 0LL;
  v6 = (CD2DEffect *)operator new(0x80uLL);
  if ( v6 && (v8 = CD2DEffect::CD2DEffect(v6, a1), (v9 = v8) != 0LL) )
  {
    (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)v9 + 10) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)a2 + 8LL))(a2);
    CD2DResourceManager::AddResource(*((CD2DResourceManager **)v9 + 3), v9);
    v10 = 0;
    *a3 = v9;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v10;
}
