PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
