__int64 __fastcall SiGetBiosSystemDisk(wchar_t **a1)
{
  wchar_t *Pool2; // rdi
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG ReturnedLength; // [rsp+58h] [rbp+28h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+30h]

  ReturnedLength = 0;
  Pool2 = 0LL;
  DestinationString = 0LL;
  LinkHandle = 0LL;
  if ( !(unsigned __int8)SiIsWinPeHardDiskZeroUfdBoot()
    || (v3 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(1)"), v3 == -1073740718) )
  {
    v3 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(0)");
  }
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v4 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, &ReturnedLength);
    v3 = v4;
    if ( v4 == -1073741789 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, ReturnedLength + 2LL, 1263556947LL);
      if ( Pool2 )
      {
        DestinationString.MaximumLength = ReturnedLength;
        DestinationString.Buffer = Pool2;
        v3 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, 0LL);
        if ( v3 >= 0 )
        {
          Pool2[(unsigned __int64)DestinationString.Length >> 1] = 0;
          *a1 = Pool2;
        }
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else if ( v4 >= 0 )
    {
      v3 = -1073741823;
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( v3 < 0 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v3;
}
