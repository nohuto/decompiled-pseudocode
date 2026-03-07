void __fastcall EtwpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 3 )
  {
    if ( (_DWORD)Argument2 )
    {
      if ( (_DWORD)Argument2 == 1 )
        EtwpPagingDisabled = 0;
    }
    else
    {
      EtwpPagingDisabled = 1;
    }
  }
}
