/*
 * XREFs of PspAttachSession @ 0x140776AB8
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmAttachSession @ 0x1402EA500 (MmAttachSession.c)
 */

__int64 __fastcall PspAttachSession(__int64 a1, struct _KAPC_STATE *a2, struct _KPROCESS **a3)
{
  struct _KPROCESS *SessionById; // rax
  struct _KPROCESS *v6; // rbx
  int v7; // edi

  SessionById = (struct _KPROCESS *)MmGetSessionById(a1, (__int64)a2);
  v6 = SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v7 = MmAttachSession(SessionById, a2);
  if ( v7 < 0 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
