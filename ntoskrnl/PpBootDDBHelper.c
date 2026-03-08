/*
 * XREFs of PpBootDDBHelper @ 0x14081D504
 * Callers:
 *     PpInitializeBootDDB @ 0x140B5A6EC (PpInitializeBootDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SdbInitDatabaseInMemory @ 0x14079CFC8 (SdbInitDatabaseInMemory.c)
 *     PnpLogEvent @ 0x140955B40 (PnpLogEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpBootDDBHelper(void *Src, size_t Size, _QWORD *a3, __int64 *a4)
{
  unsigned int v6; // edi
  void *Pool2; // rax
  void *v9; // rbx
  __int64 inited; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v6 = Size;
  if ( !(_DWORD)Size || !Src )
  {
    if ( (PiLoggedErrorEventsMask & 1) == 0 )
      PiLoggedErrorEventsMask |= 1u;
    return 3221225473LL;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)Size, 538996816LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Src, v6);
    inited = SdbInitDatabaseInMemory((__int64)v9, v6);
    if ( inited )
    {
      *a3 = v9;
      *a4 = inited;
      return 0LL;
    }
    ExFreePoolWithTag(v9, 0);
    if ( (PiLoggedErrorEventsMask & 4) == 0 )
    {
      PiLoggedErrorEventsMask |= 4u;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"INIT DATABASE FAILED");
      PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
    }
    return 3221225473LL;
  }
  if ( (PiLoggedErrorEventsMask & 2) == 0 )
  {
    PiLoggedErrorEventsMask |= 2u;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"OUT OF MEMORY");
    PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
  }
  return 3221225626LL;
}
