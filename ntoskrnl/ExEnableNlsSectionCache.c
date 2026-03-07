struct _LIST_ENTRY *ExEnableNlsSectionCache()
{
  struct _LIST_ENTRY *result; // rax

  result = PsGetCurrentServerSiloGlobals();
  result[66].Flink->Blink = (struct _LIST_ENTRY *)1;
  return result;
}
