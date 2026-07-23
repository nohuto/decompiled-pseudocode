/*
 * XREFs of MiReplenishPageSlist @ 0x140298D80
 * Callers:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1402EC698 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiIncreaseAvailablePages @ 0x14027F560 (MiIncreaseAvailablePages.c)
 *     MiIsFreeZeroPfnCold @ 0x1402837A0 (MiIsFreeZeroPfnCold.c)
 *     MiSetPfnBlink @ 0x1402987B0 (MiSetPfnBlink.c)
 *     MiNodeFreeZeroPages @ 0x140299324 (MiNodeFreeZeroPages.c)
 *     MiDecreaseAvailablePages @ 0x140299A00 (MiDecreaseAvailablePages.c)
 *     MiPageListCollision @ 0x1402EDC1C (MiPageListCollision.c)
 *     MiUpdateZeroFreeBitmap @ 0x140316E64 (MiUpdateZeroFreeBitmap.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x140407060 (InterlockedPushListSList.c)
 *     MiArePageContentsZero @ 0x14054EB08 (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x14055FD04 (MiNotifyPageHeat.c)
 */

void __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3)
{
  int v3; // eax
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rbx
  _SLIST_ENTRY *v20; // r14
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  __int64 v23; // r9
  volatile signed __int32 *v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // r8d
  unsigned __int64 v27; // rdx
  int v28; // eax
  int v29; // edx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  int v33; // [rsp+20h] [rbp-128h]
  unsigned int v35; // [rsp+28h] [rbp-120h]
  _QWORD *v36; // [rsp+30h] [rbp-118h]
  unsigned __int64 v37; // [rsp+38h] [rbp-110h]
  volatile signed __int64 *v38; // [rsp+40h] [rbp-108h]
  __int64 v39; // [rsp+48h] [rbp-100h]
  __int64 v40; // [rsp+50h] [rbp-F8h]
  _SLIST_ENTRY *List; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v42; // [rsp+60h] [rbp-E8h]
  __int128 v43; // [rsp+70h] [rbp-D8h] BYREF
  _OWORD v44[8]; // [rsp+80h] [rbp-C8h] BYREF

  v3 = *(_DWORD *)(a1 + 4);
  v5 = a2;
  v43 = 0LL;
  memset(v44, 0, sizeof(v44));
  if ( (v3 & 0x20) == 0 )
  {
    v39 = 16LL * a3;
    v40 = *(_QWORD *)(a1 + 8LL * a2 + 4200);
    v6 = *(unsigned __int16 *)(v39 + v40);
    v7 = *(unsigned int *)(a1 + 6300);
    v8 = a3;
    if ( v6 < v7 )
    {
      v9 = (int)v7 - v6;
      v10 = v9 + 64;
      v42 = *(_QWORD *)(a1 + 16) + 4544 * ((unsigned __int64)a3 >> byte_140C4DE8C);
      v11 = a2 == 0;
      v35 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C4DE8D));
      v12 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C4DE8D));
      if ( v11 )
      {
        v13 = *(_QWORD *)(a1 + 2176);
        v38 = (volatile signed __int64 *)(a1 + 2240);
        if ( MiNodeFreeZeroPages(v42, v12, 4098LL) < v10 || *(_BYTE *)(a1 + 4829) == 1 )
          return;
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 2184);
        v38 = (volatile signed __int64 *)(a1 + 2304);
        if ( MiNodeFreeZeroPages(v42, v12, 4096LL) < v10 )
          return;
      }
      v14 = *(_QWORD *)(v13 + 40 * v8);
      v15 = (_QWORD *)(v13 + 40 * v8);
      v36 = v15;
      if ( v9 <= v14 )
        v14 = v9;
      if ( *(_QWORD *)(a1 + 7104) - v14 >= 0x420 )
      {
        DWORD2(v43) = 16;
        v33 = HvlEnlightenments & 0x200000;
        v16 = 0LL;
        if ( !(unsigned int)MiDecreaseAvailablePages(a1, v14, 1056LL, 0LL) )
          goto LABEL_58;
        v18 = v15[2];
        v19 = 48 * v18 - 0x58000000000LL;
        v37 = v14;
        v20 = 0LL;
        List = (_SLIST_ENTRY *)v19;
        while ( 1 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            v29 = DWORD1(v43);
LABEL_50:
            v14 -= v16;
            if ( v16 )
            {
              if ( v29 )
              {
                LODWORD(v43) = 1;
                MiNotifyPageHeat(&v43);
              }
              v36[2] = v18;
              if ( v18 == 0xFFFFFFFFFLL )
              {
                MiUpdateZeroFreeBitmap(a1, (unsigned int)v5, a3, 0LL);
                v36[3] = 0xFFFFFFFFFLL;
              }
              else
              {
                MiSetPfnBlink(v19, 0xFFFFFFFFFLL, 0);
              }
              InterlockedPushListSList((PSLIST_HEADER)(v39 + v40), List, v20, v16);
              *v36 -= v16;
              v32 = -v16;
              _InterlockedExchangeAdd64(v38, v32);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 8 * v5 + 4128), v32);
              if ( (unsigned int)MmNumberOfChannels > 1 )
              {
                v17 = v5 + 2LL * v35;
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 8 * v17 + 4216), v32);
              }
            }
LABEL_58:
            if ( v14 )
              MiIncreaseAvailablePages(a1, v14, v17);
            return;
          }
          v20 = (_SLIST_ENTRY *)v19;
          if ( !(_DWORD)v5 && (MiFlags & 0x80u) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero((v19 + 0x58000000000LL) / 48);
          if ( dword_140C4E6CC == 1 )
          {
            LOBYTE(v21) = 1;
            v22 = (v19 + 0x58000000000LL) / 48;
            v23 = (((((unsigned __int128)((v19 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                 + (unsigned __int8)((__int64)((unsigned __int128)((v19 + 0x58000000000LL)
                                                                 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)) & 0x1F;
            v24 = (volatile signed __int32 *)(qword_140C4E728 + 4 * (v22 >> 5));
            if ( (unsigned __int64)(v23 + 1) > 0x20 )
            {
              if ( ((((((unsigned __int128)((v19 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                   + (unsigned __int8)((__int64)((unsigned __int128)((v19 + 0x58000000000LL)
                                                                   * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)) & 0x1F) != 0 )
              {
                v26 = 32 - (v22 & 0x1F);
                _InterlockedOr(v24++, ((1 << v26) - 1) << v23);
                v21 = 1LL - v26;
                if ( v21 >= 0x20 )
                {
                  v27 = v21 >> 5;
                  v21 += -32LL * (v21 >> 5);
                  do
                  {
                    *v24++ = -1;
                    --v27;
                  }
                  while ( v27 );
                }
                if ( !v21 )
                  goto LABEL_28;
              }
              v25 = (1 << v21) - 1;
            }
            else
            {
              v25 = 1 << v23;
            }
            _InterlockedOr(v24, v25);
          }
LABEL_28:
          *(_BYTE *)(v19 + 34) = *(_BYTE *)(v19 + 34) & 0xF8 | 5;
          if ( (*(_BYTE *)(v19 + 34) & 8) != 0 )
            MiPageListCollision(v19, 1LL);
          *(_QWORD *)(v19 + 24) &= 0xFFFFFFF000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v33 && (LOBYTE(v28) = MiIsFreeZeroPfnCold(v19), v28) )
          {
            v29 = DWORD1(v43);
            if ( DWORD1(v43) < 0x10 )
            {
              *((_QWORD *)v44 + DWORD1(v43)) = v18 << 12;
              v29 = ++DWORD1(v43);
            }
          }
          else
          {
            v29 = DWORD1(v43);
          }
          v17 = 0xFFFFFFFFFLL;
          v18 = *(_QWORD *)v19 & 0xFFFFFFFFFLL;
          if ( v18 == 0xFFFFFFFFFLL )
            v19 = 0LL;
          else
            v19 = 48 * v18 - 0x58000000000LL;
          v30 = (__int64)v20[1].Next ^ (LODWORD(v20[1].Next) ^ ((_DWORD)v5 << 12)) & 0xF000;
          if ( v30 && qword_140C4DF40 )
          {
            if ( (v30 & 0x10) != 0 )
              LODWORD(v30) = v30 & 0xFFFFFFEF;
            else
              LODWORD(v30) = ~(_DWORD)qword_140C4DF40 & v30;
          }
          v31 = (unsigned int)v30 | 0xFFFFFFFE00000000uLL;
          if ( qword_140C4DF40 )
          {
            if ( (qword_140C4DF40 & v31) != 0 )
              v31 = (unsigned int)v30 | 0xFFFFFFFE00000010uLL;
            else
              v31 |= qword_140C4DF40;
          }
          ++v16;
          v20[1].Next = (_SLIST_ENTRY *)v31;
          v11 = v37-- == 1;
          v20->Next = (_SLIST_ENTRY *)v19;
          if ( v11 )
            goto LABEL_50;
        }
      }
    }
  }
}
