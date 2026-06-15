/*
 * XREFs of sub_18013350C @ 0x18013350C
 * Callers:
 *     sub_1801333EC @ 0x1801333EC (sub_1801333EC.c)
 * Callees:
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_1800B6B10 @ 0x1800B6B10 (sub_1800B6B10.c)
 */

__int64 *__fastcall sub_18013350C(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&stru_18019EE00, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = &qword_18019EE08;
    sub_1800B6B10(&qword_18019EE08);
    qword_18019EE08 = (__int64)off_1801562B8;
    qword_18019EE20 = (__int64)&unk_18019D148;
    atexit(a2);
    sub_180053914(&qword_18019EE08, qword_18019EE20, 0LL);
    InitOnceComplete(&stru_18019EE00, 0, &qword_18019EE08);
  }
  return v5;
}
