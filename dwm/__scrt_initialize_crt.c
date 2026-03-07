char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_140016800;
  if ( !a1 )
    v1 = 1;
  byte_140016800 = v1;
  _isa_available_init();
  if ( !(unsigned __int8)should_initialize_environment() )
    return 0;
  if ( !(unsigned __int8)should_initialize_environment() )
  {
    _scrt_stub_for_acrt_uninitialize(0LL);
    return 0;
  }
  return 1;
}
