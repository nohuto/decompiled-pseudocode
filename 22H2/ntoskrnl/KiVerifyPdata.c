/*
 * XREFs of KiVerifyPdata @ 0x140A66914
 * Callers:
 *     KiVerifyScopesExecute @ 0x140A66230 (KiVerifyScopesExecute.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14021EB70 (RtlpxLookupFunctionTable.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall KiVerifyPdata(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // r9
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int *v8; // rdx
  unsigned int *BugCheckParameter4; // rcx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-18h]

  BugCheckParameter3 = 0LL;
  v10 = 0LL;
  if ( BugCheckParameter2 < *(&xmmword_140E00020 + 1)
    || BugCheckParameter2 >= *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
  {
    v5 = (unsigned int *)RtlpxLookupFunctionTable(BugCheckParameter2, (unsigned __int64)&v10, a3, a4);
  }
  else
  {
    v5 = (unsigned int *)xmmword_140E00020;
    BugCheckParameter3 = qword_140E00030;
  }
  result = 0LL;
  if ( v5 )
  {
    v7 = HIDWORD(BugCheckParameter3) / 0xC;
    if ( HIDWORD(BugCheckParameter3) % 0xCuLL )
      KeBugCheckEx(0x14Du, 0xFFFFFFFDuLL, BugCheckParameter2, HIDWORD(BugCheckParameter3), 0LL);
    result = v7;
    v8 = &v5[3 * v7];
    BugCheckParameter4 = 0LL;
    while ( v5 != v8 )
    {
      if ( BugCheckParameter4 )
      {
        result = *v5;
        if ( *BugCheckParameter4 >= (unsigned int)result )
          KeBugCheckEx(0x14Du, 0xFFFFFFFEuLL, BugCheckParameter2, (ULONG_PTR)v5, (ULONG_PTR)BugCheckParameter4);
      }
      BugCheckParameter4 = v5;
      v5 += 3;
    }
  }
  return result;
}
