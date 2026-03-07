void __fastcall CBspNode::AddPolygon(CBspNode *this, struct CPolygon *a2)
{
  _QWORD *v2; // rax
  struct CPolygon *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v2 == *((_QWORD **)this + 6) )
  {
    std::vector<CPolygon *>::_Emplace_reallocate<CPolygon * const &>(
      (const void **)this + 4,
      *((_BYTE **)this + 5),
      &v3);
    a2 = v3;
  }
  else
  {
    *v2 = a2;
    *((_QWORD *)this + 5) += 8LL;
  }
  (**(void (__fastcall ***)(struct CPolygon *))a2)(a2);
}
