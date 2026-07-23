/*
 * XREFs of PsAltSystemCallDispatch @ 0x140582D60
 * Callers:
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 PsAltSystemCallDispatch()
{
  UCHAR Reserved1; // dl
  __int64 (*v1)(void); // rax

  Reserved1 = KeGetCurrentThread()->Header.Reserved1;
  if ( (Reserved1 & 4) != 0 )
  {
    v1 = (__int64 (*)(void))PsAltSystemCallHandlers;
  }
  else
  {
    if ( (Reserved1 & 0x20) == 0 )
      goto LABEL_7;
    v1 = (__int64 (*)(void))qword_140CFC7A0;
  }
  if ( (unsigned __int64)v1 < 2 )
LABEL_7:
    KeBugCheckEx(0x1E0u, 4uLL, 0LL, 0LL, 0LL);
  return v1();
}
