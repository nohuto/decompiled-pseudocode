/*
 * XREFs of PspSiloInitializeIsMultiSessionSku @ 0x140906AD8
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409065D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14026D070 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     ExIsMultiSessionSku @ 0x1407D1D18 (ExIsMultiSessionSku.c)
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
