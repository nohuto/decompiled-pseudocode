CPolygonShape *__fastcall CPolygonShape::CPolygonShape(CPolygonShape *this, const struct CPolygonShape *a2)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CPolygonShape::`vftable';
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef();
  return this;
}
