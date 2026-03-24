/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C02B7624
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C012B594 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C02AFD20 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ebx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rdx
  signed __int32 v18; // ecx
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 i; // r8
  DYNAMICMODECHANGESHARELOCK *v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-89h] BYREF
  __int64 v28; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-79h] BYREF
  __int128 v30; // [rsp+50h] [rbp-69h] BYREF
  __int64 v31; // [rsp+60h] [rbp-59h]
  int v32; // [rsp+68h] [rbp-51h]
  _QWORD v33[2]; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v34[40]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-11h]
  __int64 v36; // [rsp+B0h] [rbp-9h]
  _QWORD v37[2]; // [rsp+C0h] [rbp+7h] BYREF
  _BYTE v38[64]; // [rsp+D0h] [rbp+17h] BYREF
  int v39; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v40; // [rsp+130h] [rbp+77h] BYREF
  __int64 v41; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  if ( v37[0] )
  {
    v41 = *(_QWORD *)(v37[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v39);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v29, (struct PDEVOBJ *)&v41);
    v28 = *(_QWORD *)(v41 + 64);
    GreAcquireSemaphore(v28);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v33);
    v36 = 0LL;
    v35 = 0LL;
    v33[0] = 0LL;
    v5 = v41;
    v30 = 0LL;
    v32 = 1;
    if ( (*(_DWORD *)(v41 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v30 = *(_QWORD *)(v41 + 48);
      v31 = v41;
      GreAcquireSemaphore(v30);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v30, 11LL);
      v5 = v41;
    }
    v40 = *(_QWORD *)(v5 + 1808);
    if ( (*(_DWORD *)(v5 + 2172) & 0x100) == 0 )
      goto LABEL_39;
    v27 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v6 = v40;
    v7 = *(_DWORD *)(v40 + 24);
    v8 = v7;
    v9 = v7 & 0x1000;
    if ( (v7 & 0x1000) != 0 )
      v3 = 2;
    else
      v3 = (v7 & 0x10000 | 0x8000u) >> 15;
    v10 = v8 & 0x10000;
    if ( v2 == 1 )
    {
      if ( v9 || v10 )
      {
        v11 = *(_DWORD *)(v40 + 60) >> 1;
        if ( (unsigned int)v11 > 0xA )
          v11 = 10LL;
        if ( (_DWORD)v11 )
        {
          v12 = 0LL;
          v13 = (unsigned int)v11;
          do
          {
            v14 = *(_QWORD *)(v6 + 112);
            v39 = *(_DWORD *)(v12 + *((_QWORD *)ppalDefault + 14));
            HIBYTE(v39) = 48;
            *(_DWORD *)(v12 + v14) = v39;
            v12 += 4LL;
            v6 = v40;
            --v13;
          }
          while ( v13 );
        }
        LODWORD(v15) = *(_DWORD *)(v6 + 28);
        LODWORD(v16) = 20;
        if ( (_DWORD)v11 )
        {
          while ( 1 )
          {
            v16 = (unsigned int)(v16 - 1);
            v15 = (unsigned int)(v15 - 1);
            v17 = *(_QWORD *)(v6 + 112);
            v39 = *(_DWORD *)(*((_QWORD *)ppalDefault + 14) + 4 * v16);
            HIBYTE(v39) = 48;
            *(_DWORD *)(v17 + 4 * v15) = v39;
            if ( !--v11 )
              break;
            v6 = v40;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v37[0] + 976LL) + 152LL) |= 0xFu;
        *(_DWORD *)(v40 + 24) &= 0xFFFEEFFF;
        v18 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
        *(_DWORD *)(v40 + 32) = v18;
        v19 = *(_QWORD *)(v40 + 120);
        if ( v19 != v40 )
          *(_DWORD *)(v19 + 32) = v18;
        v4 = 1;
      }
      goto LABEL_34;
    }
    if ( v2 == 2 )
    {
      v20 = *(_DWORD *)(v40 + 28);
      if ( !v20 )
      {
        v3 = 0;
LABEL_34:
        SEMOBJ::vUnlock((SEMOBJ *)&v27);
        if ( v4 && (*(_DWORD *)(v41 + 40) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v41 + 1768) )
            (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v41 + 1768))(
              *(_QWORD *)(*(_QWORD *)(v41 + 24) + 1800LL),
              &v40,
              0LL,
              0LL,
              *(_DWORD *)(v40 + 28));
          else
            v3 = 0;
        }
LABEL_39:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v30);
        if ( v33[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v33);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v34);
        SEMOBJ::vUnlock((SEMOBJ *)&v28);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v29);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v25);
        goto LABEL_42;
      }
      v21 = 1;
      if ( (unsigned int)(v20 - 1) > 1 )
      {
        do
        {
          v22 = v21++;
          *(_BYTE *)(*(_QWORD *)(v6 + 112) + 4 * v22 + 3) = 0;
          v6 = v40;
        }
        while ( v21 < *(_DWORD *)(v40 + 28) - 1 );
      }
      v23 = *(_DWORD *)(v6 + 24) & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v40 + 28); v6 = v40 )
      {
        *(_BYTE *)(*(_QWORD *)(v6 + 112) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v23 = *(_DWORD *)(v6 + 24) & 0xFFFEEFFF | 0x10000;
    }
    *(_DWORD *)(v6 + 24) = v23;
    goto LABEL_34;
  }
LABEL_42:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v37);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v38);
  return v3;
}
