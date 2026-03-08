/*
 * XREFs of IoFreeErrorLogEntry @ 0x1405544A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  void *v2; // rcx
  void *v3; // rcx

  v1 = (char *)ElEntry - 48;
  v2 = (void *)*((_QWORD *)ElEntry - 3);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  v3 = (void *)*((_QWORD *)v1 + 4);
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  _InterlockedExchangeAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
  ExFreePoolWithTag(v1, 0);
}
