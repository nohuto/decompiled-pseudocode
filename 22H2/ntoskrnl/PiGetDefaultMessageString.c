/*
 * XREFs of PiGetDefaultMessageString @ 0x14076A644
 * Callers:
 *     PiNormalizeDeviceText @ 0x14076A260 (PiNormalizeDeviceText.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14024FB10 (RtlInitAnsiString.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     RtlInitUTF8String @ 0x1405853D0 (RtlInitUTF8String.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     RtlFindMessage @ 0x1406724A0 (RtlFindMessage.c)
 *     RtlCreateUnicodeString @ 0x1406ED6B0 (RtlCreateUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406F6920 (RtlAnsiStringToUnicodeString.c)
 *     IopReferenceDriverObjectByName @ 0x14073ECD8 (IopReferenceDriverObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073EDA0 (IopGetDriverNameFromKeyNode.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409197D0 (RtlUTF8StringToUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiGetDefaultMessageString(HANDLE KeyHandle, ULONG MessageId, _QWORD *a3)
{
  struct _DMA_ADAPTER *v6; // rdi
  NTSTATUS DriverNameFromKeyNode; // ebx
  struct _DMA_ADAPTER *v8; // rax
  WORD Flags; // ax
  BYTE *Text; // rdx
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rsi
  unsigned __int64 v13; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v15; // r14
  NTSTATUS v17; // eax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  STRING SourceString; // [rsp+50h] [rbp-10h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+A8h] [rbp+48h] BYREF

  MessageEntry = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v6 = 0LL;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &DestinationString);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v8 = (struct _DMA_ADAPTER *)IopReferenceDriverObjectByName(&DestinationString);
    v6 = v8;
    if ( v8 )
    {
      DriverNameFromKeyNode = RtlFindMessage(v8[1].DmaOperations, 0xBu, 0, MessageId, &MessageEntry);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_11;
      Flags = MessageEntry->Flags;
      Text = MessageEntry->Text;
      if ( (Flags & 1) != 0 )
      {
        if ( !RtlCreateUnicodeString(&UnicodeString, (PCWSTR)Text) )
        {
LABEL_14:
          DriverNameFromKeyNode = -1073741670;
          goto LABEL_11;
        }
      }
      else
      {
        if ( (Flags & 2) != 0 )
        {
          SourceString = 0LL;
          RtlInitUTF8String(&SourceString, (PCSZ)Text);
          v17 = RtlUTF8StringToUnicodeString(&UnicodeString, &SourceString, 1u);
        }
        else
        {
          RtlInitAnsiString(&SourceString, (PCSZ)Text);
          v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
        }
        DriverNameFromKeyNode = v17;
        if ( v17 < 0 )
          goto LABEL_11;
      }
      Length = UnicodeString.Length;
      Buffer = UnicodeString.Buffer;
      if ( UnicodeString.Length >= 4u && *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) == 13 )
      {
        *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) = 0;
        Length -= 4;
        UnicodeString.Length = Length;
      }
      v13 = Length;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length + 2LL, 0x20207050u);
      v15 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Buffer, (unsigned int)v13);
        *a3 = v15;
        v15[v13 >> 1] = 0;
        DriverNameFromKeyNode = 0;
        goto LABEL_11;
      }
      goto LABEL_14;
    }
    DriverNameFromKeyNode = -1073741823;
  }
LABEL_11:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v6 )
    HalPutDmaAdapter(v6);
  return (unsigned int)DriverNameFromKeyNode;
}
