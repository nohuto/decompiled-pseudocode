/*
 * XREFs of ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00C1440
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C0046060 (EtwTraceMessageCheckDelay.c)
 *     EtwTraceInputProcessDelay @ 0x1C0049830 (EtwTraceInputProcessDelay.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetClassName(struct tagWND *const a1, struct _UNICODE_STRING *a2)
{
  unsigned int v4; // ebx
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(a2, 0LL);
  if ( a1 )
  {
    RtlInitAnsiString(&DestinationString, *(PCSZ *)(*((_QWORD *)a1 + 17) + 104LL));
    return (unsigned int)RtlAnsiStringToUnicodeString(a2, &DestinationString, 1u);
  }
  return v4;
}
