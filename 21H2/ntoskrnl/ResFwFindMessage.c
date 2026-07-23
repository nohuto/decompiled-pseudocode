/*
 * XREFs of ResFwFindMessage @ 0x1409F57C0
 * Callers:
 *     BcpFindMessage @ 0x140A97E2C (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x1405ED770 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+48h] [rbp+10h] BYREF

  MessageEntry = 0LL;
  if ( qword_140C135A8
    && *(_QWORD *)qword_140C135A8
    && RtlFindMessage(*(PVOID *)qword_140C135A8, 0xBu, 0, MessageId, &MessageEntry) >= 0
    && (MessageEntry->Flags & 1) != 0 )
  {
    return MessageEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
