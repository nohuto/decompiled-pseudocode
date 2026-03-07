bool __fastcall ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(ADAPTER_DISPLAY *this)
{
  __int64 v1; // rcx
  bool result; // al

  v1 = *(_QWORD *)(*((_QWORD *)this + 2) + 1440LL);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 32) )
      return *(_QWORD *)(v1 + 40) != 0LL;
  }
  return result;
}
