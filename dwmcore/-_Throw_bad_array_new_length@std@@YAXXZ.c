void __noreturn std::_Throw_bad_array_new_length(void)
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "bad array new length";
  v0[0] = &stdext::bad_array_new_length::`vftable';
  stdext::exception::_Raise((stdext::exception *)v0);
}
