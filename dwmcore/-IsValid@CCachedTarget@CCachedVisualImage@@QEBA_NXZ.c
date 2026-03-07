bool __fastcall CCachedVisualImage::CCachedTarget::IsValid(CCachedVisualImage::CCachedTarget *this)
{
  int (__fastcall ***v1)(_QWORD); // rcx

  v1 = (int (__fastcall ***)(_QWORD))(*((_QWORD *)this + 1)
                                    + 8LL
                                    + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL));
  return (**v1)(v1) >= 0;
}
