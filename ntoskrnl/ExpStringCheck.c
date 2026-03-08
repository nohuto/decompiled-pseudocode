/*
 * XREFs of ExpStringCheck @ 0x140B4A084
 * Callers:
 *     ExInitSystem @ 0x140B49A20 (ExInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExpSingleStringCheck @ 0x140B4A368 (ExpSingleStringCheck.c)
 */

__int64 __fastcall ExpStringCheck(
        const WCHAR *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        const WCHAR *a4,
        const WCHAR *SourceString,
        const WCHAR *a6,
        const WCHAR *a7,
        const WCHAR *a8,
        const WCHAR *a9,
        const WCHAR *a10,
        const WCHAR *a11,
        const WCHAR *a12,
        const WCHAR *a13,
        const WCHAR *a14,
        const WCHAR *a15,
        const WCHAR *a16,
        const WCHAR *a17,
        const WCHAR *a18,
        const WCHAR *a19,
        const WCHAR *a20,
        const WCHAR *a21,
        const WCHAR *a22,
        const WCHAR *a23,
        const WCHAR *a24,
        const WCHAR *a25,
        const WCHAR *a26,
        const WCHAR *a27,
        const WCHAR *a28,
        const WCHAR *a29)
{
  __int64 i; // rcx
  __int64 result; // rax
  _DWORD v34[32]; // [rsp+D0h] [rbp-30h]

  v34[0] = ExpSingleStringCheck(a1);
  v34[1] = ExpSingleStringCheck(a2);
  v34[2] = ExpSingleStringCheck(a3);
  v34[3] = ExpSingleStringCheck(a4);
  v34[4] = ExpSingleStringCheck(SourceString);
  v34[5] = ExpSingleStringCheck(a6);
  v34[6] = ExpSingleStringCheck(a7);
  v34[7] = ExpSingleStringCheck(a8);
  v34[8] = ExpSingleStringCheck(a9);
  v34[9] = ExpSingleStringCheck(a10);
  v34[10] = ExpSingleStringCheck(a11);
  v34[11] = ExpSingleStringCheck(a12);
  v34[12] = ExpSingleStringCheck(a13);
  v34[13] = ExpSingleStringCheck(a14);
  v34[14] = ExpSingleStringCheck(a15);
  v34[15] = ExpSingleStringCheck(a16);
  v34[16] = ExpSingleStringCheck(a17);
  v34[17] = ExpSingleStringCheck(a18);
  v34[18] = ExpSingleStringCheck(a19);
  v34[19] = ExpSingleStringCheck(a20);
  v34[20] = ExpSingleStringCheck(a21);
  v34[21] = ExpSingleStringCheck(a22);
  v34[22] = ExpSingleStringCheck(a23);
  v34[23] = ExpSingleStringCheck(a24);
  v34[24] = ExpSingleStringCheck(a25);
  v34[25] = ExpSingleStringCheck(a26);
  v34[26] = ExpSingleStringCheck(a27);
  v34[27] = ExpSingleStringCheck(a28);
  v34[28] = ExpSingleStringCheck(a29);
  for ( i = 0LL; i < 29; ++i )
  {
    result = *(unsigned int *)((char *)qword_1400206E0 + i * 4);
    if ( v34[i] != (_DWORD)result )
      LODWORD(KdDumpEnableOffset) = 8;
  }
  return result;
}
