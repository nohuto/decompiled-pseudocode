/*
 * XREFs of sub_18002ADD8 @ 0x18002ADD8
 * Callers:
 *     sub_18002A7D0 @ 0x18002A7D0 (sub_18002A7D0.c)
 * Callees:
 *     sub_1800027F4 @ 0x1800027F4 (sub_1800027F4.c)
 *     sub_180008D38 @ 0x180008D38 (sub_180008D38.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180071940 @ 0x180071940 (sub_180071940.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18002ADD8(__int64 a1, char a2)
{
  char v2; // r15
  __int64 *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // r14
  __int64 *v9; // r12
  __int64 *v10; // rdi
  __int64 v11; // rcx
  char *v12; // rbx
  __int64 *i; // r14
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v2 = a2;
  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v8 = *(__int64 **)(a1 + 56);
  v9 = *(__int64 **)(a1 + 64);
  v10 = 0LL;
  try
  {
    while ( v8 != v9 )
    {
      if ( v4 == v10 )
      {
        sub_180008D38((__int64 *)&v14, v10, v8);
        v4 = v15;
        v10 = (__int64 *)*((_QWORD *)&v14 + 1);
      }
      else
      {
        v11 = *v8;
        *v10 = *v8;
        if ( v11 )
          sub_180071940(v11, v6);
        *((_QWORD *)&v14 + 1) = ++v10;
      }
      ++v8;
    }
    if ( v5 )
      LeaveCriticalSection(v5);
  }
  catch ( ... )
  {
    sub_1800C8F54(retaddr, 352LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp");
    v2 = a2;
    v4 = v15;
    v10 = (__int64 *)*((_QWORD *)&v14 + 1);
  }
  v12 = (char *)v14;
  for ( i = (__int64 *)v14; i != v10; ++i )
  {
    LOBYTE(v7) = v2;
    sub_18002C2A0(*i, 6LL, v7);
  }
  if ( v12 )
  {
    sub_1800027F4(v12, v10);
    sub_1800472E0(v12, ((char *)v4 - v12) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
