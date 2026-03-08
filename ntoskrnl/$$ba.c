/*
 * XREFs of $$ba @ 0x140B0E898
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403DEA50 (KiSwInterruptDispatch.c)
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     sub_1403EC0EC @ 0x1403EC0EC (sub_1403EC0EC.c)
 *     sub_1403ED020 @ 0x1403ED020 (sub_1403ED020.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AF7010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B0A7A8 @ 0x140B0A7A8 (sub_140B0A7A8.c)
 *     sub_140B0C838 @ 0x140B0C838 (sub_140B0C838.c)
 *     sub_140B0F1A0 @ 0x140B0F1A0 (sub_140B0F1A0.c)
 *     sub_140B0FCB0 @ 0x140B0FCB0 (sub_140B0FCB0.c)
 *     sub_140B10360 @ 0x140B10360 (sub_140B10360.c)
 *     sub_140B15070 @ 0x140B15070 (sub_140B15070.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall __ba(__int64 a1, __int64 a2)
{
  unsigned __int128 v2; // rax
  int i; // r10d
  unsigned int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 *v8; // r10
  unsigned __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // r8

  *((_QWORD *)&v2 + 1) = a2;
  for ( i = *(_DWORD *)(a1 + 2448); (i & 0x40000000) == 0; i = *(_DWORD *)(a1 + 2448) )
  {
    v5 = *(_DWORD *)(a1 + 2452);
    *(_QWORD *)&v2 = DWORD2(v2) != 0;
    if ( (_DWORD)v2 == ((v5 >> 21) & 1) || (i & 2) == 0 )
      break;
    v6 = *(unsigned int *)(a1 + 2604);
    v7 = *(_QWORD *)(a1 + 2072);
    *(_QWORD *)&v2 = (unsigned int)(*(_DWORD *)(a1 + 2020) - v6);
    v8 = (__int64 *)(a1 + v6);
    v9 = a1 + v6 + 8 * ((unsigned __int64)v2 >> 3);
    if ( DWORD2(v2) )
    {
      v13 = __rdtsc();
      v2 = (__ROR8__(v13, 3) ^ v13) * (unsigned __int128)0x7010008004002001uLL;
      *((_QWORD *)&v2 + 1) ^= v2;
      *(_QWORD *)(a1 + 2608) = *((_QWORD *)&v2 + 1);
      if ( v8 != (__int64 *)v9 )
      {
        do
        {
          *(_QWORD *)&v2 = *((_QWORD *)&v2 + 1) ^ *v8;
          v14 = v7 ^ *v8;
          *v8 = v2;
          *((_QWORD *)&v2 + 1) = (v14 + __ROR8__(*((_QWORD *)&v2 + 1), BYTE8(v2) & 0x3F)) ^ 0xF29;
          ++v8;
        }
        while ( v8 != (__int64 *)v9 );
        v5 = *(_DWORD *)(a1 + 2452);
      }
      *(_QWORD *)(a1 + 2616) = *((_QWORD *)&v2 + 1);
      *(_DWORD *)(a1 + 2452) = v5 | 0x200000;
      return v2;
    }
    v10 = *(_QWORD *)(a1 + 2608);
    if ( v8 != (__int64 *)v9 )
    {
      do
      {
        *v8 ^= v10;
        v11 = *v8++;
        v10 = ((v7 ^ v11) + __ROR8__(v10, v10 & 0x3F)) ^ 0xF29;
      }
      while ( v8 != (__int64 *)v9 );
      v5 = *(_DWORD *)(a1 + 2452);
    }
    *(_DWORD *)(a1 + 2452) = v5 & 0xFFDFFFFF;
    if ( v10 == *(_QWORD *)(a1 + 2616) )
      return v2;
    v12 = *(_DWORD *)(a1 + 2020);
    *(_QWORD *)&v2 = *(_QWORD *)(a1 + 1416);
    *(_QWORD *)v2 = a1;
    *(_DWORD *)(v2 + 16) = v12;
    if ( *(_DWORD *)(a1 + 2296) )
      return v2;
    *(_QWORD *)&v2 = *(_QWORD *)(a1 + 1416);
    *(_QWORD *)(v2 + 24) = v10 ^ *(_QWORD *)(a1 + 2616);
    if ( *(_DWORD *)(a1 + 2296) )
      return v2;
    *(_QWORD *)(a1 + 2312) = 0LL;
    *(_QWORD *)&v2 = a1 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a1 + 2320) = 256LL;
    *(_QWORD *)(a1 + 2304) = a1 - 0x5C5FC0A76E374B18LL;
    DWORD2(v2) = 0;
    *(_QWORD *)(a1 + 2328) = v10;
    *(_DWORD *)(a1 + 2296) = 1;
  }
  return v2;
}
