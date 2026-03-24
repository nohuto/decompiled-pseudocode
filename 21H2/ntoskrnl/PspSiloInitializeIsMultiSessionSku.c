/*
 * XREFs of PspSiloInitializeIsMultiSessionSku @ 0x140906978
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140906470 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140264010 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140264030 (PsAttachSiloToCurrentThread.c)
 *     ExIsMultiSessionSku @ 0x1407D1BA8 (ExIsMultiSessionSku.c)
 */

__int64 __fastcall PspSiloInitializeIsMultiSessionSku(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *v2; // rbx
  int IsMultiSessionSku; // edi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  Blink = a1[79].Blink;
  v5 = 0;
  v2 = PsAttachSiloToCurrentThread(a1);
  IsMultiSessionSku = ExIsMultiSessionSku(&v5);
  PsDetachSiloFromCurrentThread(v2);
  if ( IsMultiSessionSku >= 0 )
    BYTE4(Blink[70].Blink[1].Blink) = v5;
  return (unsigned int)IsMultiSessionSku;
}
