__int64 __fastcall CPathData::Open(CPathData *this, struct ID2D1SimplifiedGeometrySink **a2)
{
  volatile __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::Attach(&v6, _InterlockedExchange64((volatile __int64 *)this + 8, 0LL));
  *((_QWORD *)this + 3) = *((_QWORD *)this + 2);
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 72) = 0;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v6);
  v4 = *(_QWORD *)this;
  *((_WORD *)this + 24) = 0;
  (*(void (__fastcall **)(CPathData *))(v4 + 8))(this);
  *((_BYTE *)this + 72) = 1;
  *a2 = this;
  return 0LL;
}
