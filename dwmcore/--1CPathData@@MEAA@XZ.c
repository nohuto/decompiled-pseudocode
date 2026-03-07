void __fastcall CPathData::~CPathData(CPathData *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  *(_QWORD *)this = &CPathData::`vftable';
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::Attach(&v2, *((_QWORD *)this + 8));
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  std::vector<unsigned char>::_Tidy((char *)this + 16);
}
