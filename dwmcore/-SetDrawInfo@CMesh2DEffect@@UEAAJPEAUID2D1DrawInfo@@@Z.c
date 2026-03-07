__int64 __fastcall CMesh2DEffect::SetDrawInfo(CMesh2DEffect *this, struct ID2D1DrawInfo *a2)
{
  *((_QWORD *)this + 15) = a2;
  (*(void (__fastcall **)(struct ID2D1DrawInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}
