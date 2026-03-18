/*
 * XREFs of PspAttachSession @ 0x1406A8EEC
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 */

__int64 __fastcall PspAttachSession(unsigned int a1, __int64 a2, ULONG_PTR *a3)
{
  ULONG_PTR SessionById; // rax
  void *v5; // rbx
  int v6; // edi

  SessionById = MmGetSessionById(a1);
  v5 = (void *)SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v6 = MmAttachSession(SessionById);
  if ( v6 < 0 )
    ObfDereferenceObject(v5);
  return (unsigned int)v6;
}
