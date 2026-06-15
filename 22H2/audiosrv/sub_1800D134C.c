/*
 * XREFs of sub_1800D134C @ 0x1800D134C
 * Callers:
 *     sub_1800D0FCC @ 0x1800D0FCC (sub_1800D0FCC.c)
 * Callees:
 *     sub_1800027F4 @ 0x1800027F4 (sub_1800027F4.c)
 *     sub_180008D38 @ 0x180008D38 (sub_180008D38.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180071940 @ 0x180071940 (sub_180071940.c)
 *     sub_1800CFF9C @ 0x1800CFF9C (sub_1800CFF9C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D134C(__int64 a1, const WCHAR *a2, const WCHAR *a3)
{
  const WCHAR *v3; // r15
  const WCHAR *v4; // r12
  __int64 *v6; // rsi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // r9
  __int64 *v9; // r14
  __int64 *v10; // r13
  __int64 *v11; // rdi
  __int64 v12; // rcx
  char *v13; // rbx
  __int64 *i; // r14
  int v15; // eax
  char v17; // [rsp+20h] [rbp-68h]
  __int128 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v18 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v9 = *(__int64 **)(a1 + 56);
  v10 = *(__int64 **)(a1 + 64);
  v11 = 0LL;
  try
  {
    while ( v9 != v10 )
    {
      v12 = *v9;
      if ( *(_DWORD *)(*v9 + 312) == 1 )
      {
        if ( v6 == v11 )
        {
          sub_180008D38((__int64 *)&v18, v11, v9);
          v6 = v19;
          v11 = (__int64 *)*((_QWORD *)&v18 + 1);
        }
        else
        {
          *v11 = v12;
          if ( v12 )
            sub_180071940(v12);
          *((_QWORD *)&v18 + 1) = ++v11;
        }
      }
      ++v9;
    }
    if ( v7 )
      LeaveCriticalSection(v7);
  }
  catch ( ... )
  {
    sub_1800C8F54(
      (int)retaddr,
      388,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      v8);
    v3 = a3;
    v4 = a2;
    v6 = v19;
    v11 = (__int64 *)*((_QWORD *)&v18 + 1);
  }
  v13 = (char *)v18;
  for ( i = (__int64 *)v18; i != v11; ++i )
  {
    v15 = sub_1800CFF9C(*i, v4, v3, v8, v17);
    if ( v15 < 0 )
      sub_18006D26C(
        (int)retaddr,
        392,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        v15);
  }
  if ( v13 )
  {
    sub_1800027F4(v13, v11);
    sub_1800472E0((__int64)v13, ((char *)v6 - v13) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return 0LL;
}
