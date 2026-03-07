void __fastcall HalpKsrCallbackRoutine(PVOID CallbackContext, PVOID Argument1, _DWORD *Argument2)
{
  int v4; // edx
  int v5; // edx

  if ( (_DWORD)Argument1 )
  {
    v4 = (_DWORD)Argument1 - 1;
    if ( !v4 )
    {
LABEL_5:
      HalpSetShutdownResetHandler(0LL);
      return;
    }
    v5 = v4 - 2;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      goto LABEL_5;
    }
  }
  HalpSetShutdownResetHandler((__int64)HalpShutdownReset);
  *Argument2 = 0;
}
