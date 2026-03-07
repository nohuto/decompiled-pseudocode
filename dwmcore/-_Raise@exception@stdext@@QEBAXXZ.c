void __fastcall __noreturn stdext::exception::_Raise(stdext::exception *this)
{
  if ( std::_Raise_handler )
    std::_Raise_handler(this);
  (*(void (__fastcall **)(stdext::exception *))(*(_QWORD *)this + 16LL))(this);
  _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
