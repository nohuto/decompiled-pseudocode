/*
 * XREFs of sub_180142900 @ 0x180142900
 * Callers:
 *     sub_180141124 @ 0x180141124 (sub_180141124.c)
 * Callees:
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180142900(__int64 a1)
{
  int v2; // r15d
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+54h] [rbp-24h]
  __int128 v17; // [rsp+58h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-10h]
  int v19; // [rsp+6Ch] [rbp-Ch]
  char v20; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+40h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+50h] BYREF

  v2 = 0;
  if ( *(_QWORD *)(a1 + 128) )
  {
    v3 = 0LL;
    v4 = *(_DWORD *)(a1 + 136);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v3);
        if ( v5 )
          break;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= v4 )
          return (unsigned int)v2;
      }
      do
      {
        v6 = 0LL;
        v23 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v7 = v5;
        v8 = *(_QWORD *)(v5 + 16);
        if ( !v8 )
        {
          v9 = *(_DWORD *)(a1 + 136);
          v10 = *(_DWORD *)(v5 + 24) % v9 + 1;
          do
          {
            if ( (unsigned int)v10 >= v9 )
              break;
            v11 = *(_QWORD *)(a1 + 120);
            if ( *(_QWORD *)(v11 + 8 * v10) )
              v8 = *(_QWORD *)(v11 + 8 * v10);
            v10 = (unsigned int)(v10 + 1);
          }
          while ( !v8 );
        }
        v5 = v8;
        v12 = *(_QWORD *)(v7 + 8);
        if ( v12 )
        {
          sub_1800579A4(&v23, v12);
          v6 = v23;
        }
        v14 = xmmword_180178F08;
        v15 = 1;
        v16 = 1;
        v2 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *, int, char *))(*(_QWORD *)v6 + 24LL))(
               v6,
               &v14,
               24LL,
               &v21,
               8,
               &v20);
        if ( v2 >= 0 && HIDWORD(v21) )
        {
          v22 = (unsigned int)v21;
          v17 = xmmword_180178F08;
          v18 = 2;
          v19 = 2;
          v2 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *, int, char *))(*(_QWORD *)v6 + 24LL))(
                 v6,
                 &v17,
                 24LL,
                 &v22,
                 8,
                 &v20);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      while ( v8 );
    }
  }
  return (unsigned int)v2;
}
