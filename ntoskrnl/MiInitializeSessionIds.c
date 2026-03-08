/*
 * XREFs of MiInitializeSessionIds @ 0x140B70248
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 */

__int64 MiInitializeSessionIds()
{
  RTL_BITMAP *Pool; // rax
  __int64 result; // rax
  UNICODE_STRING v2; // [rsp+30h] [rbp-49h] BYREF
  ULONG_PTR BugCheckParameter3[16]; // [rsp+40h] [rbp-39h] BYREF

  qword_140C65650 = 0LL;
  v2.Buffer = L"Session";
  *(_QWORD *)&v2.Length = 1048590LL;
  Pool = (RTL_BITMAP *)MiAllocatePool(256, 0x20uLL, 0x20206D4Du);
  qword_140C69590 = Pool;
  if ( !Pool || (Pool->SizeOfBitMap = 128, Pool->Buffer = &Pool[1].SizeOfBitMap, !qword_140C69590) )
    KeBugCheckEx(0x7Du, qword_140C6F350, qword_140C6F340, qword_140C6F348, 0x200uLL);
  memset(
    qword_140C69590->Buffer,
    0,
    4 * ((qword_140C69590->SizeOfBitMap >> 5) + ((qword_140C69590->SizeOfBitMap & 0x1F) != 0)));
  qword_140C65670 = 0LL;
  memset(BugCheckParameter3, 0, 0x78uLL);
  LODWORD(BugCheckParameter3[1]) = 0;
  BYTE2(BugCheckParameter3[0]) |= 0xCu;
  LOWORD(BugCheckParameter3[0]) = 120;
  HIDWORD(BugCheckParameter3[4]) = 512;
  HIDWORD(BugCheckParameter3[5]) = 40;
  *(_OWORD *)((char *)&BugCheckParameter3[1] + 4) = MiSessionMapping;
  HIDWORD(BugCheckParameter3[3]) = 983043;
  BugCheckParameter3[9] = (ULONG_PTR)MiSessionObjectDelete;
  result = ObCreateObjectType(&v2, (__int64)BugCheckParameter3, 0LL, (__int64)&MmSessionObjectType);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1Au, 0x1237uLL, (int)result, (ULONG_PTR)BugCheckParameter3, 0LL);
  return result;
}
