/*
 * XREFs of BgpFwLibraryEnable @ 0x1403843F4
 * Callers:
 *     BgLibraryEnable @ 0x14066F498 (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x140AEAC78 (BgpFwLibraryInitialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     ResFwBackgroundTransition @ 0x140AEBAF8 (ResFwBackgroundTransition.c)
 */

__int64 __fastcall BgpFwLibraryEnable(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // eax
  int v11; // eax

  v2 = dword_140C0E3B0 & 0xC00;
  if ( (dword_140C0E3B0 & 2) != 0 && v2 != 3072 )
    return 0LL;
  v3 = 0LL;
  if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
  {
    if ( v2 == 3072 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( v2 == 3072 )
  {
    if ( (_BYTE)xmmword_140C0E368
      && BYTE1(xmmword_140C0E368)
      && *(_DWORD *)(a1 + 16) == (_DWORD)xmmword_140C0E378
      && *(_QWORD *)(a1 + 4) == *(_QWORD *)((char *)&xmmword_140C0E368 + 4)
      && *(_DWORD *)(a1 + 12) == HIDWORD(xmmword_140C0E368)
      && *(_QWORD *)(a1 + 32) == MmGetPhysicalAddress(BaseAddress) )
    {
      *(_BYTE *)(a1 + 1) = 1;
      *(_QWORD *)(a1 + 32) = BaseAddress;
      goto LABEL_13;
    }
    return 3221225659LL;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 12);
    if ( ((*(_BYTE *)(a1 + 2) - 1) & 0xFD) != 0 )
      v5 = (unsigned int)(*(_DWORD *)(a1 + 4) * v4);
    else
      v5 = (unsigned int)(*(_DWORD *)(a1 + 8) * v4);
    v6 = *(_QWORD *)(a1 + 32);
    v7 = v5 * ((*(_DWORD *)(a1 + 16) != 4) + 3LL);
    v8 = MmMapIoSpaceEx(v6, v7, 0x404u);
    *(_QWORD *)(a1 + 32) = v8;
    if ( !v8 )
      *(_QWORD *)(a1 + 32) = MmMapIoSpaceEx(v6, v7, 0x204u);
    if ( *(_QWORD *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 1) = 1;
      if ( (_BYTE)xmmword_140C0E368 && BYTE1(xmmword_140C0E368) )
      {
        v11 = DWORD1(xmmword_140C0E368);
        if ( ((BYTE2(xmmword_140C0E368) - 1) & 0xFD) == 0 )
          v11 = DWORD2(xmmword_140C0E368);
        LOBYTE(v3) = (_DWORD)xmmword_140C0E378 != 4;
        MmUnmapIoSpace(BaseAddress, (unsigned int)(HIDWORD(xmmword_140C0E368) * v11) * (v3 + 3));
      }
      xmmword_140C0E368 = *(_OWORD *)a1;
      xmmword_140C0E378 = *(_OWORD *)(a1 + 16);
      BaseAddress = *(PVOID *)(a1 + 32);
LABEL_12:
      ResFwBackgroundTransition(0LL);
LABEL_13:
      BgInternal = *(_OWORD *)a1;
      v9 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
      xmmword_140C0E350 = *(_OWORD *)(a1 + 16);
      qword_140C0E360 = *(PVOID *)(a1 + 32);
      if ( v9 == 1 )
      {
        dword_140C0E3B0 |= 8u;
        LODWORD(xmmword_140C0E350) = 5;
      }
      dword_140C0E3B0 |= 2u;
      return 0LL;
    }
    return 3221225626LL;
  }
}
