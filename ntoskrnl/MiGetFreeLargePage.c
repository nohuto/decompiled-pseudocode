/*
 * XREFs of MiGetFreeLargePage @ 0x14034FBD0
 * Callers:
 *     MiGetFreeLargePagesSearchTypes @ 0x14034F8C0 (MiGetFreeLargePagesSearchTypes.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 *     MiGetPfnPageSizeIndex @ 0x14034D770 (MiGetPfnPageSizeIndex.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14034FE70 (MiUnlinkNodeLargePageHelper.c)
 *     MiBeginPageAccessor @ 0x140350290 (MiBeginPageAccessor.c)
 */

__int64 __fastcall MiGetFreeLargePage(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  volatile signed __int64 *v5; // rsi
  signed __int8 v6; // dl
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi

  v2 = *(_QWORD **)(a1 + 168);
  v3 = *(_QWORD *)(a1 + 128);
  if ( !v3 )
    v3 = v2[1];
  v4 = *(_QWORD *)(a1 + 136);
  v5 = (volatile signed __int64 *)(v3 + 24);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL);
  if ( !v4 )
  {
    if ( !v6 )
      goto LABEL_5;
LABEL_35:
    *(_QWORD *)(a1 + 144) = v3;
    *(_BYTE *)(a1 + 58) = 1;
    return 0LL;
  }
  if ( v6 )
    goto LABEL_35;
LABEL_5:
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    v3 = v2[1];
    if ( *(_QWORD **)v3 != v2
      || (v11 = *(_QWORD **)(v3 + 8), *v11 != v3)
      || (v2[1] = v11, *v11 = v2, v12 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v3 = v12;
    *(_QWORD *)(v3 + 8) = v2;
    *(_QWORD *)(v12 + 8) = v3;
    *v2 = v3;
    if ( !(unsigned int)MiBeginPageAccessor(v7, v3, 0LL) )
      v3 = 0LL;
  }
  else
  {
    if ( !(unsigned int)MiUnlinkNodeLargePageHelper(
                          *(_QWORD *)(a1 + 160),
                          v3,
                          *(_DWORD *)(a1 + 16),
                          *(_DWORD *)(a1 + 104),
                          *(_DWORD *)(a1 + 44)) )
    {
      *(_BYTE *)(a1 + 56) = 1;
      goto LABEL_37;
    }
    if ( (*(_DWORD *)(a1 + 44) & 0x100) != 0 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)a1 + 16LL) + 25408LL * *(unsigned int *)(a1 + 32);
      ++*(_DWORD *)(v8 + 23004);
    }
    *(_QWORD *)v3 = 0LL;
  }
  if ( !v3 )
  {
LABEL_37:
    _InterlockedAnd64(v5, 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  if ( !*(_QWORD *)(a1 + 136) )
    *(_QWORD *)(a1 + 136) = v3;
  if ( *(_QWORD *)(a1 + 112) )
    **(_QWORD **)(a1 + 120) = v3;
  else
    *(_QWORD *)(a1 + 112) = v3;
  *(_QWORD *)(a1 + 120) = v3;
  if ( (*(_QWORD *)(a1 + 24))-- == 1LL )
  {
    *(_BYTE *)(a1 + 56) = 1;
    return 1LL;
  }
  v13 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 128) = 0LL;
  v14 = v3 + 48 * v13;
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((v14 + 0x220000000000LL) >> 4);
  if ( v15 > qword_140C65820
    || !_bittest64((const signed __int64 *)(16 * ((v14 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL), 0x36u)
    || (unsigned int)MiGetPfnPageSizeIndex(v14) != *(_DWORD *)(a1 + 16)
    || (*(_BYTE *)(v14 + 34) & 7) != *(_DWORD *)(a1 + 100)
    || *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v14 + 0x220000000000LL) >> 4)) + 2) != *(_DWORD *)(a1 + 32)
    || *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL)) != *(_QWORD *)a1
    || (unsigned int)MiGetPfnChannel(v14) != *(_DWORD *)(a1 + 104)
    || *(unsigned __int8 *)(v14 + 34) >> 6 != *(_DWORD *)(a1 + 108)
    || v15 >= 0x100000 && *(_DWORD *)(a1 + 96) )
  {
    return 1LL;
  }
  *(_QWORD *)(a1 + 128) = v14;
  return 1LL;
}
