void __fastcall CPathGeometry::SetPath(CPathGeometry *this, const struct CPathData *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  char v6; // al

  v3 = (_QWORD *)((char *)this + 144);
  if ( *((_QWORD *)this + 18) && a2 )
    v6 = CPathData::operator==(*v3, a2, a3);
  else
    v6 = *v3 == (_QWORD)a2;
  if ( !v6 )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=(v3, a2);
    *((_DWORD *)this + 8) |= 1u;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
}
