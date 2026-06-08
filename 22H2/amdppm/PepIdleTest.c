/*
 * XREFs of PepIdleTest @ 0x1C000CB90
 * Callers:
 *     PepIdleVmTest @ 0x1C000CC40 (PepIdleVmTest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 */

__int64 __fastcall PepIdleTest(__int64 *BugCheckParameter4, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-20h]

  v3 = 0;
  if ( !qword_1C00139A0 && (a3 != -1 || !BYTE1(BugCheckParameter4[11 * a2 + 18])) )
  {
    v5 = *BugCheckParameter4;
    LODWORD(BugCheckParameter3) = a2;
    HIDWORD(BugCheckParameter3) = a3;
    v8 = 0;
    if ( (int)PoFxProcessorNotification(v5, 20LL, &BugCheckParameter3) < 0 )
      KeBugCheckEx(0x143u, 1uLL, 0x14uLL, (ULONG_PTR)&BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return v8;
  }
  return v3;
}
