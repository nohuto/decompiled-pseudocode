CPolygonShape *__fastcall CPolygonShape::CPolygonShape(CPolygonShape *this, struct ID2D1Geometry *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CPolygonShape::`vftable';
  v4 = operator new(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    v4[2] = a2;
    *v4 = &CPolygonShape::SharedData::`vftable';
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v4 + 2);
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 2) = v5;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((char *)this + 16);
  return this;
}
