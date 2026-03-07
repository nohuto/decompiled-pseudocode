void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
