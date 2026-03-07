bool HalpAcpiAoacCapable()
{
  return (HalpPlatformFlags & 8) != 0;
}
