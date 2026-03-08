/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x1409F6A70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 ExUpdateOsPfnInRegistry()
{
  __int64 v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned int v4; // r10d
  unsigned int v5; // r11d

  Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
  if ( qword_140D534F8 )
    return (unsigned int)qword_140D534F8(Blink, v5, v0, v2, v3);
  return v4;
}
