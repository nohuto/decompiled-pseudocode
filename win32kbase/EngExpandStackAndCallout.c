bool __fastcall EngExpandStackAndCallout(EXPAND_STACK_CALLOUT *a1, void *a2, SIZE_T a3)
{
  return KeExpandKernelStackAndCallout(a1, a2, a3) == 0;
}
