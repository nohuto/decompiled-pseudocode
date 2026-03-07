char __fastcall CFlipContentToken::NotifyDwm(CFlipContentToken *this)
{
  char v2; // bl
  CompositionSurfaceObject *v3; // rcx
  __int64 v4; // rdx
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CFlipContentToken *))(*(_QWORD *)this + 144LL))(this)
    || *((_BYTE *)this + 291) )
  {
    return 1;
  }
  v3 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
  v4 = *((_QWORD *)this + 5);
  v6 = 0;
  if ( (int)CompositionSurfaceObject::GetIndependentFlipNotifyDwm(v3, v4, &v6) >= 0 )
    return v6;
  return v2;
}
