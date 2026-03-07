void __noreturn std::_Throw_bad_array_new_length(void)
{
  void **v0; // rdx
  _QWORD v1[3]; // [rsp+30h] [rbp-18h] BYREF

  v1[1] = "bad array new length";
  v0 = &stdext::bad_array_new_length::`vftable';
  v1[0] = &stdext::bad_array_new_length::`vftable';
  if ( std::_Raise_handler )
  {
    std::_Raise_handler((const struct stdext::exception *)v1);
    v0 = (void **)v1[0];
  }
  ((void (__fastcall *)(_QWORD *))v0[2])(v1);
  _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
