/*
 * XREFs of PspSiloInitializeIsStateSeparationEnabled @ 0x1409AC724
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AC180 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     ExIsStateSeparationEnabled @ 0x1409F8CE0 (ExIsStateSeparationEnabled.c)
 */

__int64 __fastcall PspSiloInitializeIsStateSeparationEnabled(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *v2; // rbx
  int IsStateSeparationEnabled; // edi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  Blink = a1[91].Blink;
  v5 = 0;
  v2 = PsAttachSiloToCurrentThread(a1);
  IsStateSeparationEnabled = ExIsStateSeparationEnabled(&v5);
  PsDetachSiloFromCurrentThread(v2);
  if ( IsStateSeparationEnabled >= 0 )
    BYTE5(Blink[82].Blink[1].Blink) = v5;
  return (unsigned int)IsStateSeparationEnabled;
}
