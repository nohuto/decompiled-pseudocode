char **__fastcall DwmDbg::DbgString::ConvertHR(__int64 a1, char **a2, int *a3)
{
  int v3; // r8d
  const char *v5; // rdx

  v3 = *a3;
  switch ( v3 )
  {
    case -2147467263:
      v5 = "E_NOTIMPL";
      goto LABEL_20;
    case -2147467262:
      v5 = "E_NOINTERFACE";
      goto LABEL_20;
    case -2147467260:
      v5 = "E_ABORT";
      goto LABEL_20;
    case -2147467259:
      v5 = "E_FAIL";
      goto LABEL_20;
    case -2147418113:
      v5 = "E_UNEXPECTED";
      goto LABEL_20;
    case -2147221184:
      v5 = "E_DRAW";
      goto LABEL_20;
    case -2147024882:
      v5 = "E_OUTOFMEMORY";
      goto LABEL_20;
    case -2147024809:
      v5 = "E_INVALIDARG";
LABEL_20:
      DwmDbg::DbgString::DbgString(a2, v5);
      return a2;
  }
  if ( v3 )
    DwmDbg::DbgString::DbgString(a2, "0x%x", v3);
  else
    DwmDbg::DbgString::DbgString(a2, "S_OK");
  return a2;
}
