/*
 * XREFs of IoIsValidNameGraftingBuffer @ 0x140945610
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1404149D0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x140415030 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoIsValidNameGraftingBuffer(PIRP Irp, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Length; // edx
  USHORT *p_SubstituteNameLength; // r14
  USHORT v6; // ax
  WCHAR v7; // cx
  wchar_t *Pool2; // rax
  wchar_t *v10; // r15
  NTSTATUS v11; // ebx
  USHORT v12; // cx
  WCHAR v13; // dx
  __int16 v14; // ax
  HANDLE LinkHandle; // [rsp+28h] [rbp-39h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+30h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  WCHAR SourceString[16]; // [rsp+80h] [rbp+1Fh] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DestinationString = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  p_SubstituteNameLength = &ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
  if ( Length
    && Length < *p_SubstituteNameLength + (unsigned int)ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength + 20 )
  {
    return 0;
  }
  v6 = *p_SubstituteNameLength;
  if ( *p_SubstituteNameLength > 6u
    && ReparseBuffer->MountPointReparseBuffer.PathBuffer[0] == 92
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) == 92 )
  {
    v7 = ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0];
    if ( v7 != 46 && v7 != 63 )
      return 0;
  }
  if ( v6 <= 0x10u )
  {
    if ( v6 <= 0xCu
      || ReparseBuffer->MountPointReparseBuffer.PathBuffer[0] != 92
      || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) != 63
      || ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] != 63
      || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) != 92 )
    {
      goto LABEL_47;
    }
  }
  else
  {
    if ( ReparseBuffer->MountPointReparseBuffer.PathBuffer[0] != 92
      || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) != 63
      || ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] != 63
      || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) != 92 )
    {
      goto LABEL_47;
    }
    if ( LOWORD(ReparseBuffer[1].ReparseTag) == 85 && HIWORD(ReparseBuffer[1].ReparseTag) == 78 )
    {
      if ( ReparseBuffer[1].ReparseDataLength == 67 && ReparseBuffer[1].Reserved == 92 )
        return 0;
      goto LABEL_47;
    }
  }
  if ( HIWORD(ReparseBuffer[1].ReparseTag) == 58 )
  {
    *(_DWORD *)(&LinkTarget.MaximumLength + 1) = 0;
    *(&ObjectAttributes.Length + 1) = 0;
    *(_OWORD *)SourceString = *(_OWORD *)L"\\??\\C:";
    *(&ObjectAttributes.Attributes + 1) = 0;
    LinkHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    DestinationString.Buffer[4] = ReparseBuffer[1].ReparseTag;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) >= 0 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(64LL, 520LL, 538996553LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        LinkTarget.Buffer = Pool2;
        *(_DWORD *)&LinkTarget.Length = 34078720;
        v11 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
        ZwClose(LinkHandle);
        if ( v11 < 0
          || *LinkTarget.Buffer != 92
          || LinkTarget.Buffer[1] != 68
          || LinkTarget.Buffer[2] != 101
          || LinkTarget.Buffer[3] != 118
          || LinkTarget.Buffer[4] != 105
          || LinkTarget.Buffer[5] != 99
          || LinkTarget.Buffer[6] != 101
          || LinkTarget.Buffer[7] != 92
          || LinkTarget.Buffer[8] != 76
          || LinkTarget.Buffer[9] != 97
          || LinkTarget.Buffer[10] != 110
          || LinkTarget.Buffer[14] != 82
          || LinkTarget.Buffer[15] != 101
          || LinkTarget.Buffer[16] != 100
          || LinkTarget.Buffer[17] != 105
          || LinkTarget.Buffer[18] != 114
          || LinkTarget.Buffer[23] != 114
          || LinkTarget.Buffer[24] != 92 )
        {
          ExFreePoolWithTag(v10, 0);
          goto LABEL_47;
        }
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        ZwClose(LinkHandle);
      }
      return 0;
    }
  }
LABEL_47:
  v12 = *p_SubstituteNameLength;
  if ( *p_SubstituteNameLength < 0xCu )
    return 0;
  v13 = ReparseBuffer->MountPointReparseBuffer.PathBuffer[0];
  if ( v13 == 92
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) == 63
    && ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] == 63
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) == 92
    && HIWORD(ReparseBuffer[1].ReparseTag) == 58 )
  {
    return 1;
  }
  if ( v12 != 96 && (v12 != 98 || ReparseBuffer[4].MountPointReparseBuffer.PathBuffer[0] != 92) )
    return 0;
  if ( v13 != 92 )
    return 0;
  v14 = *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5);
  if ( v14 != 63 && v14 != 92 )
    return 0;
  if ( ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] != 63
    || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) != 92
    || LOWORD(ReparseBuffer[1].ReparseTag) != 86
    || HIWORD(ReparseBuffer[1].ReparseTag) != 111
    || ReparseBuffer[1].ReparseDataLength != 108
    || ReparseBuffer[1].Reserved != 117
    || ReparseBuffer[1].SymbolicLinkReparseBuffer.SubstituteNameOffset != 109
    || ReparseBuffer[1].SymbolicLinkReparseBuffer.SubstituteNameLength != 101
    || ReparseBuffer[1].SymbolicLinkReparseBuffer.PrintNameOffset != 123
    || ReparseBuffer[2].Reserved != 45
    || ReparseBuffer[2].MountPointReparseBuffer.PathBuffer[0] != 45
    || HIWORD(ReparseBuffer[3].ReparseTag) != 45
    || ReparseBuffer[3].SymbolicLinkReparseBuffer.PrintNameOffset != 45 )
  {
    return 0;
  }
  return ReparseBuffer[4].SymbolicLinkReparseBuffer.PrintNameLength == 125;
}
