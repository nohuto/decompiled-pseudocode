/*
 * XREFs of ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0018890
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002730 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0012530 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(char *P)
{
  `vector destructor iterator'(
    P + 120,
    1384LL,
    64LL,
    (void (__fastcall *)(char *))_VIDSCH_FLIP_QUEUE_ENTRY::~_VIDSCH_FLIP_QUEUE_ENTRY);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
