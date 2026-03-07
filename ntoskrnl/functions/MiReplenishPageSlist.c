__int64 __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 Alignment_low; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rbx
  struct _SLIST_ENTRY *v19; // rsi
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r14
  __int64 result; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r10
  __int64 v30; // r11
  volatile signed __int32 *v31; // r8
  unsigned int v32; // eax
  int v33; // r10d
  unsigned __int64 v34; // rdx
  int v35; // [rsp+30h] [rbp-78h]
  unsigned int v36; // [rsp+34h] [rbp-74h]
  unsigned __int64 v37; // [rsp+38h] [rbp-70h]
  unsigned __int64 *v38; // [rsp+40h] [rbp-68h]
  struct _SLIST_ENTRY *List; // [rsp+48h] [rbp-60h]
  union _SLIST_HEADER *ListHead; // [rsp+50h] [rbp-58h]
  volatile signed __int64 *v41; // [rsp+58h] [rbp-50h]
  unsigned __int64 v42; // [rsp+60h] [rbp-48h]

  v4 = a1;
  v5 = a2;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    goto LABEL_40;
  v6 = *(_QWORD *)(a1 + 8LL * a2 + 6808);
  v7 = *(unsigned int *)(a1 + 16512);
  ListHead = (union _SLIST_HEADER *)(16LL * a3 + v6);
  v8 = a3;
  Alignment_low = LOWORD(ListHead->Alignment);
  if ( Alignment_low >= v7 )
    goto LABEL_40;
  v10 = (int)v7 - Alignment_low;
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    v35 = 1;
    v27 = (unsigned int)(*(_DWORD *)(a4 + 8) - *(_DWORD *)(a4 + 4));
    if ( v10 < v27 )
      v27 = v10;
    v10 = v27;
  }
  else
  {
    v35 = 0;
  }
  v11 = v10 + 64;
  v42 = *(_QWORD *)(v4 + 16) + 25408 * ((unsigned __int64)a3 >> byte_140C6570D);
  v36 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C6570E));
  if ( a2 )
  {
    if ( MiNodeFreeZeroPages(v42, v36, 4096LL) < v11 )
      goto LABEL_40;
    v12 = *(_QWORD *)(v4 + 2504);
    v13 = 2688LL;
  }
  else
  {
    if ( MiNodeFreeZeroPages(v42, v36, 4098LL) < v11 || *(_BYTE *)(v4 + 15781) )
      goto LABEL_40;
    v12 = *(_QWORD *)(v4 + 2496);
    v13 = 2560LL;
  }
  v41 = (volatile signed __int64 *)(v4 + v13);
  v14 = (unsigned __int64 *)(v12 + 88 * ((unsigned int)dword_140C6577C + v8));
  v38 = v14;
  if ( v10 > *v14 )
    v10 = *(_QWORD *)(88 * ((unsigned int)dword_140C6577C + v8) + v12);
  if ( *(_QWORD *)(v4 + 17216) - v10 >= 0x420 )
  {
    v37 = v10;
    v15 = 0LL;
    if ( !(unsigned int)MiDecreaseAvailablePages(v4, v10, 1056LL) )
      goto LABEL_38;
    v17 = v14[2];
    v18 = 48 * v17 - 0x220000000000LL;
    v19 = 0LL;
    List = (struct _SLIST_ENTRY *)v18;
    v20 = 0xAAAAAAAAAAAAAAABuLL;
    v16 = 0xFFFFFFFFFFLL;
    v21 = 0x3FFFFFFFFFLL;
    while ( 1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
LABEL_31:
        v37 -= v15;
        if ( v15 )
        {
          if ( *(_DWORD *)(a4 + 4) )
          {
            MiNotifyPageHeat(a4);
            v21 = 0x3FFFFFFFFFLL;
          }
          v38[2] = v17;
          if ( v17 == v21 )
          {
            MiUpdateZeroFreeBitmap(a1, v5, 1, a3, 0);
            v38[3] = 0x3FFFFFFFFFLL;
          }
          else
          {
            MiSetPfnBlink(v18, v21, 0);
          }
          InterlockedPushListSList(ListHead, List, v19, v15);
          v24 = *v38 - v15;
          v25 = -v15;
          *v38 = v24;
          _InterlockedExchangeAdd64(v41, v25);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 8 * v5 + 22752), v25);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 22776), v25);
          v4 = a1;
          if ( (unsigned int)MmNumberOfChannels > 1 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 8 * (v5 + 2LL * v36) + 22936), v25);
        }
        else
        {
          v4 = a1;
        }
LABEL_38:
        if ( v37 )
          MiIncreaseAvailablePages(v4, v37, v16);
        goto LABEL_40;
      }
      v19 = (struct _SLIST_ENTRY *)v18;
      if ( !(_DWORD)v5 && (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
      {
        MiArePageContentsZero(v20 * ((v18 + 0x220000000000LL) >> 4));
        v21 = 0x3FFFFFFFFFLL;
        v16 = 0xFFFFFFFFFFLL;
        v20 = 0xAAAAAAAAAAAAAAABuLL;
      }
      if ( dword_140C67ACC == 1 )
        break;
LABEL_18:
      *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0xF8 | 5;
      if ( (*(_BYTE *)(v18 + 34) & 8) != 0 )
      {
        MiPageListCollision(v18, 1, 0);
        v21 = 0x3FFFFFFFFFLL;
        v16 = 0xFFFFFFFFFFLL;
        v20 = 0xAAAAAAAAAAAAAAABuLL;
      }
      *(_QWORD *)(v18 + 24) &= 0xFFFFFF0000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v35 && (unsigned int)MiIsFreeZeroPfnCold(v18) )
        *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 4))++ + 16) = v17 << 12;
      v17 = v16 & *(_QWORD *)v18;
      if ( v17 == v21 )
        v18 = 0LL;
      else
        v18 = 48 * v17 - 0x220000000000LL;
      v22 = (__int64)v19[1].Next ^ (LODWORD(v19[1].Next) ^ ((_DWORD)v5 << 12)) & 0xF000;
      if ( v22 )
      {
        if ( qword_140C657C0 )
        {
          if ( (v22 & 0x10) != 0 )
            LODWORD(v22) = v22 & 0xFFFFFFEF;
          else
            LODWORD(v22) = ~(_DWORD)qword_140C657C0 & v22;
        }
      }
      else
      {
        LODWORD(v22) = 0;
      }
      v23 = (unsigned int)v22 | 0xFFFFFFFE00000000uLL;
      if ( qword_140C657C0 )
      {
        if ( (qword_140C657C0 & v23) != 0 )
          v23 = (unsigned int)v22 | 0xFFFFFFFE00000010uLL;
        else
          v23 |= qword_140C657C0;
      }
      ++v15;
      v19[1].Next = (_SLIST_ENTRY *)v23;
      v19->Next = (_SLIST_ENTRY *)v18;
      if ( !--v10 )
        goto LABEL_31;
    }
    LOBYTE(v28) = 1;
    v29 = v20 * ((v18 + 0x220000000000LL) >> 4);
    v30 = ((_BYTE)v20 * (unsigned __int8)((v18 + 0x220000000000LL) >> 4)) & 0x1F;
    v31 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v29 >> 5));
    if ( (unsigned __int64)(v30 + 1) > 0x20 )
    {
      if ( v30 )
      {
        v33 = v29 & 0x1F;
        _InterlockedOr(v31++, ((1 << (32 - v33)) - 1) << v30);
        v28 = 1LL - (unsigned int)(32 - v33);
        if ( v28 >= 0x20 )
        {
          v34 = v28 >> 5;
          v28 += -32LL * (v28 >> 5);
          do
          {
            *v31++ = -1;
            --v34;
          }
          while ( v34 );
        }
        if ( !v28 )
          goto LABEL_61;
      }
      v32 = (1 << v28) - 1;
    }
    else
    {
      v32 = 1 << v30;
    }
    _InterlockedOr(v31, v32);
LABEL_61:
    v21 = 0x3FFFFFFFFFLL;
    v16 = 0xFFFFFFFFFFLL;
    v20 = 0xAAAAAAAAAAAAAAABuLL;
    goto LABEL_18;
  }
LABEL_40:
  result = a4;
  if ( *(_DWORD *)(a4 + 4) )
    return MiNotifyPageHeat(a4);
  return result;
}
