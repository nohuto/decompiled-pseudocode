void __fastcall MOCKDRIVERSTATE::ValidateMockDriverState(
        MOCKDRIVERSTATE *a1,
        int a2,
        struct _MOCKDRIVERSTATE_VALIDATE_FBR *a3)
{
  if ( *((_BYTE *)a1 + 32) )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
        MOCKDRIVERSTATE::ValidateFbrHelper(a1, a3);
    }
    else
    {
      MOCKDRIVERSTATE::ValidatePlaneHelper(a1, a3);
    }
  }
}
