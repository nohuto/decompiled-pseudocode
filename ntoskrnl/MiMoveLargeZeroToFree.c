/*
 * XREFs of MiMoveLargeZeroToFree @ 0x14064D424
 * Callers:
 *     MiPurgeLargeZeroNodePages @ 0x14064D6A8 (MiPurgeLargeZeroNodePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMoveLargeZeroToFree(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  __int64 v7; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // r11
  volatile signed __int32 **v12; // rbx
  __int64 v13; // r9
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 **v15; // rdi
  volatile signed __int32 **v16; // r8
  volatile signed __int32 **v17; // rax
  volatile signed __int32 **v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx

  v7 = a3;
  v10 = MiLargePageSizes[a3];
  v11 = a7 + 134LL * a3 + 4 * (a6 + 8LL * a4);
  v12 = (volatile signed __int32 **)(*(_QWORD *)(a2 + 8 * v11 + 560) + 24LL * a5);
  v13 = *(_QWORD *)(a2 + 8 * v11 + 688) + 24LL * a5;
  v14 = *v12;
  if ( *v12 == (volatile signed __int32 *)v12 )
    return 1LL;
  while ( 1 )
  {
    v15 = *(volatile signed __int32 ***)v14;
    if ( _interlockedbittestandset64(v14 + 6, 0x3FuLL) )
      break;
    *((_BYTE *)v14 + 34) = *((_BYTE *)v14 + 34) & 0xF8 | 1;
    _InterlockedAnd64((volatile signed __int64 *)v14 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    v16 = *(volatile signed __int32 ***)v14;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v14 + 8LL) != v14
      || (v17 = (volatile signed __int32 **)*((_QWORD *)v14 + 1), *v17 != v14)
      || (*v17 = (volatile signed __int32 *)v16,
          v16[1] = (volatile signed __int32 *)v17,
          v18 = *(volatile signed __int32 ***)(v13 + 8),
          *v18 != (volatile signed __int32 *)v13) )
    {
      __fastfail(3u);
    }
    *((_QWORD *)v14 + 1) = v18;
    *(_QWORD *)v14 = v13;
    *v18 = v14;
    *(_QWORD *)(v13 + 8) = v14;
    v19 = 1072 * v7;
    ++*(_QWORD *)(v19 + a2 + 8);
    v20 = 1072 * v7;
    v21 = a2 + (0xAAAAAAAAAAAAAAABuLL * ((__int64)(v14 + 0x88000000000LL) >> 4) < 0x100000 ? 0x10 : 0);
    ++*(_QWORD *)(v20 + v21 + 24);
    --*(_QWORD *)(v19 + a2);
    --*(_QWORD *)(v20 + v21 + 16);
    ++*(_QWORD *)(v13 + 16);
    v12[2] = (volatile signed __int32 *)((char *)v12[2] - 1);
    ++*(_QWORD *)(a2 + 8 * v11 + 176);
    --*(_QWORD *)(a2 + 8 * v11 + 48);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2560), -(__int64)v10);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2688), v10);
    v14 = (volatile signed __int32 *)v15;
    if ( v15 == v12 )
      return 1LL;
  }
  return 0LL;
}
