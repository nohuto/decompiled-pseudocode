__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
