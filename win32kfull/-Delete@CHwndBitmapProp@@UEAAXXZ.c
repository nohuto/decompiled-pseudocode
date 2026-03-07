void __fastcall CHwndBitmapProp::Delete(CHwndBitmapProp *this)
{
  CompositionObject *v2; // rcx

  v2 = (CompositionObject *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CompositionObject::Release(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  Win32FreePool(this);
}
