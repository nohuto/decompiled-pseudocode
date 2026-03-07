_BOOL8 KiIsRfdsMitigationDesired()
{
  return (KiFeatureSettings & 0x8000000) == 0;
}
