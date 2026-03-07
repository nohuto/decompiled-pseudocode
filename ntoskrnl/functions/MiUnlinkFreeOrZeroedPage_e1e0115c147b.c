__int64 __fastcall MiUnlinkFreeOrZeroedPage(ULONG_PTR BugCheckParameter2, __int64 a2, __int16 a3)
{
  ULONG_PTR v4; // r10
  ULONG_PTR v5; // r14
  int v6; // edx
  unsigned int v7; // r9d
  int v8; // esi
  ULONG_PTR v9; // r8
  char *v10; // rax
  int v11; // ebx
  int v12; // r12d
  unsigned int v13; // r12d
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  char *v20; // rax
  int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // rax
  volatile signed __int64 *v24; // r9
  volatile signed __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  int v28; // ebx
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 updated; // rcx
  unsigned int v32; // esi
  __int64 v33; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // r11d
  int v38; // ecx
  int v39; // r11d
  int v40; // ecx
  __int64 v41; // rcx
  int v42; // eax
  ULONG_PTR v43; // r9
  unsigned __int64 v44; // rdx
  volatile signed __int32 *v45; // r8
  unsigned int v46; // eax
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // ecx
  unsigned int v50; // [rsp+30h] [rbp-58h]
  int v51; // [rsp+34h] [rbp-54h] BYREF
  unsigned int v52; // [rsp+38h] [rbp-50h]
  __int64 v53; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v57; // [rsp+A8h] [rbp+20h]

  v4 = BugCheckParameter2;
  v5 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v6 = dword_140C65708;
  v7 = *(_BYTE *)(v5 + 34) & 7;
  v8 = 0;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * BugCheckParameter2) >> 4);
  v52 = v7;
  if ( dword_140C65704 <= (unsigned int)dword_140C65708 )
  {
    v10 = (char *)qword_140C65748 + 16 * dword_140C65704;
    if ( v9 >= *(_QWORD *)v10 && (dword_140C65704 == dword_140C65708 || v9 < *((_QWORD *)v10 + 2)) )
      goto LABEL_5;
  }
  v37 = 0;
  if ( dword_140C65708 < 0 )
LABEL_120:
    KeBugCheckEx(0x1Au, 0x6201uLL, v9, 0LL, 0LL);
  while ( 1 )
  {
    v38 = (v37 + v6) >> 1;
    v10 = (char *)qword_140C65748 + 16 * v38;
    if ( v9 < *(_QWORD *)v10 )
    {
      if ( !v38 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v9, (ULONG_PTR)qword_140C65748, 0LL);
      v6 = v38 - 1;
      goto LABEL_70;
    }
    if ( v38 == dword_140C65708 || v9 < *((_QWORD *)v10 + 2) )
      break;
    v37 = v38 + 1;
LABEL_70:
    if ( v6 < v37 )
      goto LABEL_120;
  }
  dword_140C65704 = (v37 + v6) >> 1;
LABEL_5:
  v11 = *((_DWORD *)v10 + 2);
  if ( qword_140C65750 )
  {
    v42 = MiPageToChannel(v9);
    v4 = BugCheckParameter2;
    v12 = v42;
    v7 = v52;
  }
  else
  {
    v12 = 0;
  }
  v13 = dword_140C65778 & v4 | (v11 << byte_140C6570D) | (v12 << byte_140C6570E);
  v14 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
  v15 = *(unsigned __int8 *)(v5 + 34) >> 6;
  v50 = v15;
  if ( v15 == 3 )
  {
    v15 = 1;
    v50 = 1;
  }
  v16 = v7;
  v53 = v7;
  if ( a2 )
  {
    v21 = -1;
  }
  else
  {
    v17 = (unsigned int)dword_140C65708;
    v18 = *(_QWORD *)(v14 + 8LL * v7 + 2496);
    v19 = (unsigned int)(dword_140C6577C * v15);
    if ( dword_140C65704 > (unsigned int)dword_140C65708
      || (v20 = (char *)qword_140C65748 + 16 * dword_140C65704, v4 < *(_QWORD *)v20)
      || dword_140C65704 != dword_140C65708 && v4 >= *((_QWORD *)v20 + 2) )
    {
      v39 = 0;
      if ( dword_140C65708 < 0 )
LABEL_81:
        KeBugCheckEx(0x1Au, 0x6201uLL, v4, 0LL, 0LL);
      while ( 1 )
      {
        v40 = (v39 + (int)v17) >> 1;
        v20 = (char *)qword_140C65748 + 16 * v40;
        if ( v4 < *(_QWORD *)v20 )
        {
          if ( !v40 )
            KeBugCheckEx(0x1Au, 0x6200uLL, v4, (ULONG_PTR)qword_140C65748, 0LL);
          v17 = (unsigned int)(v40 - 1);
        }
        else
        {
          if ( v40 == dword_140C65708 || v4 < *((_QWORD *)v20 + 2) )
          {
            dword_140C65704 = (v39 + (int)v17) >> 1;
            break;
          }
          v39 = v40 + 1;
        }
        if ( (int)v17 < v39 )
          goto LABEL_81;
      }
    }
    v21 = *((_DWORD *)v20 + 2);
    a2 = v18 + 88 * (v19 + v13);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v17) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2 + 32, v17);
    }
    else
    {
      v51 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 32), 0x1Fu) )
        v51 = ExpWaitForSpinLockExclusiveAndAcquire(a2 + 32);
      while ( (*(_DWORD *)(a2 + 32) & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (*(_DWORD *)(a2 + 32) & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x40000000u);
        KeYieldProcessorEx(&v51);
      }
    }
    v16 = v53;
    v4 = BugCheckParameter2;
  }
  _InterlockedDecrement64(*(volatile signed __int64 **)(v14 + 8 * v16 + 6824));
  if ( dword_140C67ACC == 1 )
  {
    v43 = v4 & 0x1F;
    LOBYTE(v44) = 1;
    v45 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v4 >> 5));
    if ( v43 + 1 > 0x20 )
    {
      if ( (v4 & 0x1F) != 0 )
      {
        _InterlockedOr(v45++, ((1 << (32 - (v4 & 0x1F))) - 1) << v43);
        v44 = 1LL - (32 - (unsigned int)(v4 & 0x1F));
        if ( v44 >= 0x20 )
        {
          v47 = v44 >> 5;
          v44 += -32LL * (v44 >> 5);
          do
          {
            *v45++ = -1;
            --v47;
          }
          while ( v47 );
        }
        if ( !v44 )
          goto LABEL_20;
      }
      v46 = (1 << v44) - 1;
    }
    else
    {
      v46 = 1 << v43;
    }
    _InterlockedOr(v45, v46);
  }
LABEL_20:
  v22 = 0xFFFFFFFFFFLL;
  --*(_QWORD *)a2;
  if ( *(_QWORD *)(a2 + 16) == v4 )
  {
    v23 = *(_QWORD *)v5 & 0xFFFFFFFFFFLL;
    *(_QWORD *)(a2 + 16) = v23;
    if ( v23 == 0x3FFFFFFFFFLL )
    {
      v22 = ~(1LL << (v13 & dword_140C65778 & 0x3F));
      _InterlockedAnd64(
        (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v14 + 16)
                                              + 16 * (v16 + 2 * (v50 + 794 * ((unsigned __int64)v13 >> byte_140C6570D)))
                                              + 22472)
                                  + 8 * ((unsigned __int64)(v13 & dword_140C65778) >> 6)),
        v22);
      *(_QWORD *)(a2 + 24) = 0x3FFFFFFFFFLL;
    }
    else
    {
      v24 = (volatile signed __int64 *)(48 * v23 - 0x21FFFFFFFFE8LL);
      v25 = *v24;
      v22 = _InterlockedCompareExchange64(v24, *v24 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL, *v24);
      if ( v25 != v22 )
      {
        do
        {
          v41 = v22;
          v22 = _InterlockedCompareExchange64(v24, v22 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL, v22);
        }
        while ( v41 != v22 );
      }
    }
  }
  else
  {
    *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFLL) - 0x220000000000LL) ^= (*(_QWORD *)v5 ^ *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFLL) - 0x220000000000LL)) & 0xFFFFFFFFFFLL;
    v35 = *(_QWORD *)v5 & 0xFFFFFFFFFFLL;
    v36 = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFLL;
    if ( v35 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(a2 + 24) = v36;
    }
    else
    {
      MiSetPfnBlink(48 * v35 - 0x220000000000LL, v36, 0LL);
      v16 = v53;
    }
  }
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v57 = *(_BYTE *)(v14 + 15781);
  if ( v21 != -1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2 + 32, retaddr);
      v16 = v53;
    }
    else
    {
      *(_DWORD *)(a2 + 32) = 0;
    }
  }
  v26 = *(_QWORD *)(v14 + 16) + 25408 * ((unsigned __int64)v13 >> byte_140C6570D);
  _InterlockedDecrement64((volatile signed __int64 *)(v26 + 8 * v16 + 22752));
  _InterlockedDecrement64((volatile signed __int64 *)(v26 + 8LL * v50 + 22768));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v26
                                                      + 8
                                                      * (v16
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v13 >> byte_140C6570E)))
                                                      + 22936));
  v27 = _InterlockedDecrement64((volatile signed __int64 *)(v14 + 17216));
  if ( v27 == *(_QWORD *)(v14 + 16152) || v27 == *(_QWORD *)(v14 + 16160) )
    MiUpdateAvailableEvents(v14, v26, v22);
  if ( v27 <= 0x420 )
  {
    v48 = *(_QWORD *)(v14 + 16920);
    if ( !v48 || !*(_BYTE *)(v48 + 52) )
      MiObtainFreePages(v14, v26, v22);
    if ( v27 < 0xA0 && v27 + 1 >= 0xA0 && *(_DWORD *)(v14 + 1192) )
      KeSetEvent((PRKEVENT)(v14 + 1048), 0, 0);
  }
  if ( v27 < 0x9F )
  {
    if ( (a3 & 0x2000) != 0 )
    {
      v28 = 1;
    }
    else
    {
      v49 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v49 & 0xC) == 8 )
      {
        v28 = 1;
      }
      else if ( v27 < 0x20 && (_UNKNOWN *)v14 == &MiSystemPartition )
      {
        v28 = 0;
      }
      else if ( (a3 & 4) != 0 )
      {
        v28 = 1;
      }
      else if ( (v49 & 2) != 0 && v27 >= 0x21 )
      {
        v28 = 1;
      }
      else
      {
        v28 = (*(unsigned __int8 *)(v14 + 4) >> 4) & 1;
      }
    }
  }
  else
  {
    v28 = 1;
  }
  if ( (*(_BYTE *)(v5 + 34) & 8) != 0 )
    MiPageListCollision(v5, 1LL);
  v29 = qword_140C657C0;
  *(_QWORD *)(v5 + 24) &= 0xFFFFFF0000000000uLL;
  v30 = *(_QWORD *)(v5 + 16);
  *(_QWORD *)v5 = 0LL;
  if ( v29 && (v30 & 0x10) == 0 )
    v30 &= ~v29;
  if ( HIDWORD(v30) == 4294967293 )
    v8 = 2;
  updated = ZeroPte;
  v32 = v28 | v8;
  *(_QWORD *)(v5 + 16) = ZeroPte;
  if ( v32 >= 2 )
  {
    updated = MiUpdatePageFileHighInPte(ZeroPte, 4294967293LL);
    *(_QWORD *)(v5 + 16) = updated;
  }
  if ( v52 == 1 || v57 )
  {
    if ( updated )
    {
      *(_QWORD *)(v5 + 16) = updated & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else
    {
      v33 = 128LL;
      if ( v29 )
      {
        v33 = 144LL;
        if ( (v29 & 0x80u) == 0LL )
          v33 = v29 | 0x80;
      }
      *(_QWORD *)(v5 + 16) = v33;
    }
  }
  else if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(BugCheckParameter2);
  }
  return v32 & 1;
}
