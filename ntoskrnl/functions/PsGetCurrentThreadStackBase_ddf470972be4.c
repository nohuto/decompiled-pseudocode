void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
