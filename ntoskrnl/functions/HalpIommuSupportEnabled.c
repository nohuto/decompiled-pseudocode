bool HalpIommuSupportEnabled()
{
  return (unsigned int)HalpIommuPolicy <= 1 || HalpIommuPolicy == 3;
}
