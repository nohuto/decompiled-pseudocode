__int64 __fastcall CoreMessagingK::Runtime::Alloc(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(256LL, a1, a2);
  *a3 = Pool2;
  return Pool2 == 0 ? 0xC0000017 : 0;
}
