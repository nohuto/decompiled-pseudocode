/*
 * XREFs of sub_180064438 @ 0x180064438
 * Callers:
 *     sub_1800643F0 @ 0x1800643F0 (sub_1800643F0.c)
 * Callees:
 *     sub_1800644EC @ 0x1800644EC (sub_1800644EC.c)
 *     sub_180064E28 @ 0x180064E28 (sub_180064E28.c)
 *     sub_18006901C @ 0x18006901C (sub_18006901C.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180071940 @ 0x180071940 (sub_180071940.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180064438(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = sub_18006A18C(80LL, &unk_18019F848);
  v3 = v2;
  if ( v2 )
  {
    sub_180064E28(v2);
    *(_QWORD *)v3 = &off_180149058;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 16), 0, 0);
    *(_QWORD *)(v3 + 56) = 0LL;
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
    v7 = v3;
    v8 = 0LL;
    v4 = sub_1800644EC();
    if ( v4 >= 0 )
    {
      sub_180071940(v3, v5);
      *a1 = v3;
      v4 = 0;
    }
    sub_18006901C(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
