/*
 * XREFs of KiVerifyPdata @ 0x140B5D77C
 * Callers:
 *     KiVerifyScopesExecute @ 0x140B5D050 (KiVerifyScopesExecute.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402CB3A0 (RtlpxLookupFunctionTable.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall KiVerifyPdata(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 result; // rax
  unsigned int *v3; // r9
  unsigned int *v4; // rdx
  unsigned int *BugCheckParameter4; // rcx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-18h]

  BugCheckParameter3 = 0LL;
  v6 = 0LL;
  if ( BugCheckParameter2 < *((_QWORD *)&xmmword_140E00030 + 1)
    || (result = *((_QWORD *)&xmmword_140E00030 + 1) + (unsigned int)qword_140E00040, BugCheckParameter2 >= result) )
  {
    result = (unsigned __int64)RtlpxLookupFunctionTable(BugCheckParameter2, (__int64)&v6);
    v3 = (unsigned int *)result;
  }
  else
  {
    v3 = (unsigned int *)xmmword_140E00030;
    BugCheckParameter3 = qword_140E00040;
  }
  if ( v3 )
  {
    if ( HIDWORD(BugCheckParameter3) != 12 * (HIDWORD(BugCheckParameter3) / 0xCuLL) )
      KeBugCheckEx(0x14Du, 0xFFFFFFFDuLL, BugCheckParameter2, HIDWORD(BugCheckParameter3), 0LL);
    result = HIDWORD(BugCheckParameter3) / 0xC;
    v4 = &v3[3 * result];
    BugCheckParameter4 = 0LL;
    while ( v3 != v4 )
    {
      if ( BugCheckParameter4 )
      {
        result = *v3;
        if ( *BugCheckParameter4 >= (unsigned int)result )
          KeBugCheckEx(0x14Du, 0xFFFFFFFEuLL, BugCheckParameter2, (ULONG_PTR)v3, (ULONG_PTR)BugCheckParameter4);
      }
      BugCheckParameter4 = v3;
      v3 += 3;
    }
  }
  return result;
}
