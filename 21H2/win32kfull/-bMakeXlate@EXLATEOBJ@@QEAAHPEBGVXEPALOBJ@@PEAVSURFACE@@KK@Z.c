/*
 * XREFs of ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BE5D8
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C0009E08 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02797A8 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C02BEA2C (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 */

__int64 __fastcall EXLATEOBJ::bMakeXlate(
        XLATE **a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r15d
  __int64 v10; // rax
  signed __int32 v11; // ecx
  __int64 v12; // r14
  unsigned int *v13; // rsi
  __int64 v14; // rbp
  unsigned int v15; // r15d
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // r8
  unsigned int v28; // ecx
  struct PALETTE *v30; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v31[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v32; // [rsp+78h] [rbp+20h] BYREF

  v6 = a6;
  v32 = *(_QWORD *)(a4 + 128);
  if ( a6 <= 0x3FFFFFFF && 4 * (unsigned __int64)a6 + 88 > 4 * (unsigned __int64)a6 )
  {
    v10 = AllocThreadBufferWithTag(4 * a6 + 88, 1953265735LL, 0LL);
    *a1 = (XLATE *)v10;
    if ( v10 )
    {
      v11 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
      v12 = a5;
      v13 = (unsigned int *)(v10 + 84);
      *(_DWORD *)(v10 + 36) = -1;
      *(_DWORD *)v10 = v11 + 1;
      *(_DWORD *)(v10 + 12) = v6;
      v14 = (unsigned int)v12;
      *(_QWORD *)(v10 + 4) = 2LL;
      *(_QWORD *)(v10 + 16) = v10 + 84;
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_DWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 40) = 0LL;
      *(_QWORD *)(v10 + 48) = v32;
      *(_QWORD *)(v10 + 56) = a3;
      memset((void *)(v10 + 4 * (v12 + 21)), 0, 4LL * (v6 - (unsigned int)v12));
      v15 = *(_DWORD *)(a3 + 28);
      v31[0] = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      v16 = v32;
      if ( !v32 || (*(_DWORD *)(v32 + 24) & 0x800) != 0 )
      {
        if ( (struct PALETTE *)a3 != ppalDefault )
        {
          if ( v32 )
          {
            v22 = *(_QWORD *)(a3 + 80);
            if ( v22 )
            {
              if ( (_DWORD)v12 )
              {
                do
                {
                  v23 = *a2;
                  if ( (unsigned int)v23 >= v15 )
                    v23 = (unsigned int)v23 % v15;
                  ++a2;
                  *v13++ = *(unsigned __int8 *)(v23 + v22 + 4);
                  --v14;
                }
                while ( v14 );
              }
              goto LABEL_48;
            }
          }
          else
          {
            v24 = *(_QWORD *)(a3 + 72);
            if ( v24 )
            {
              if ( (_DWORD)v12 )
              {
                do
                {
                  v25 = *a2;
                  if ( (unsigned int)v25 >= v15 )
                    v25 = (unsigned int)v25 % v15;
                  ++a2;
                  *v13++ = *(unsigned __int8 *)(v25 + v24 + 4);
                  --v14;
                }
                while ( v14 );
              }
              goto LABEL_48;
            }
          }
          if ( (_DWORD)v12 )
          {
            do
            {
              v26 = *a2;
              if ( v26 >= v15 )
                v26 %= v15;
              v27 = *(unsigned int *)(*(_QWORD *)(a3 + 112) + 4LL * v26);
              if ( HIBYTE(*(_DWORD *)(*(_QWORD *)(a3 + 112) + 4LL * v26)) == 2 )
              {
                v28 = (unsigned __int8)v27;
                if ( (unsigned __int16)v27 < 0x100u )
                  v28 = (unsigned __int16)v27;
              }
              else
              {
                v30 = ppalDefault;
                v28 = XEPALOBJ::ulDispatchGFPEFunction(&v30, *((unsigned int *)ppalDefault + 24), v27);
                if ( v28 >= 0xA )
                  v28 += 236;
              }
              *v13 = v28;
              ++a2;
              ++v13;
              --v14;
            }
            while ( v14 );
          }
          goto LABEL_48;
        }
        if ( (_DWORD)v12 )
        {
          do
          {
            v21 = *a2;
            if ( v21 >= 0x14 )
              v21 %= 0x14u;
            if ( v21 >= 0xA )
              v21 += 236;
            ++a2;
            *v13++ = v21;
            --v14;
          }
          while ( v14 );
        }
      }
      else if ( (_DWORD)v12 )
      {
        while ( 1 )
        {
          v17 = *a2;
          if ( v17 >= v15 )
            v17 %= v15;
          v18 = *(unsigned int *)(*(_QWORD *)(a3 + 112) + 4LL * v17);
          if ( HIBYTE(*(_DWORD *)(*(_QWORD *)(a3 + 112) + 4LL * v17)) == 2 )
          {
            v19 = *(_DWORD *)(v16 + 28);
            if ( v19 )
            {
              v20 = (unsigned __int16)v18;
              if ( (unsigned __int16)v18 >= v19 )
                v20 = (unsigned __int16)v18 % v19;
            }
            else
            {
              v20 = 0;
            }
          }
          else
          {
            v20 = XEPALOBJ::ulDispatchGFPEFunction(&v32, *(unsigned int *)(v16 + 96), v18);
          }
          *v13 = v20;
          ++a2;
          ++v13;
          if ( !--v14 )
            break;
          v16 = v32;
        }
      }
LABEL_48:
      XLATE::vCheckForTrivial(*a1);
      SEMOBJ::vUnlock((SEMOBJ *)v31);
      return 1LL;
    }
  }
  return 0LL;
}
