char __fastcall PnpDoPolicyCheck(int a1, char a2)
{
  bool v2; // bl
  __int64 v5; // rcx
  bool v7; // zf

  v2 = 0;
  if ( !PnpBootDriverCallbackObject )
    return 1;
  if ( a1 )
  {
    v5 = (unsigned int)(a1 - 1);
    if ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 != 1 )
          goto LABEL_5;
        v7 = (PnpDriverImageLoadPolicy & 2) == 0;
      }
      else
      {
        v7 = (PnpDriverImageLoadPolicy & 4) == 0;
      }
      if ( v7 || !a2 )
        goto LABEL_5;
    }
    v2 = 1;
  }
  else
  {
    v5 = 1LL;
    v2 = (PnpDriverImageLoadPolicy & 1) != 0;
  }
LABEL_5:
  PnpDiagnosticTraceElamDecision(v5, a1, PnpDriverImageLoadPolicy, v2);
  return v2;
}
