__int64 __fastcall CarLiveDumpCallBack(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int128 *, __int64, __int64),
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  wchar_t *Pool2; // rdi
  unsigned int v13; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF

  v15 = CAR_LIVEDUMP_REPORT_TYPE;
  DestinationString = 0LL;
  if ( !a8 )
    return 3221225473LL;
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, 110LL, 1316118851LL);
  if ( Pool2 )
  {
    RtlStringCchPrintfW(
      Pool2,
      0x37uLL,
      L"%lS %lu %lu",
      a8 + 4,
      *(_DWORD *)(a8 + 68),
      a4,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      v15);
    RtlInitUnicodeString(&DestinationString, Pool2);
    RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)(a8 + 84));
    v13 = a2(a1, &v15, a8 + 84, 4LL);
    ExFreePoolWithTag(Pool2, 0x4E726143u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v13;
}
