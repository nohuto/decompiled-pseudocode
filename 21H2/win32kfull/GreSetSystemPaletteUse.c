/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C02B6390
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C0116400 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C02AEB40 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rdx
  signed __int32 v17; // ecx
  __int64 v18; // rdx
  int v19; // ecx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 i; // r8
  __int64 v25; // [rsp+30h] [rbp-89h] BYREF
  __int64 v26; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v27[16]; // [rsp+40h] [rbp-79h] BYREF
  __int128 v28; // [rsp+50h] [rbp-69h] BYREF
  __int64 v29; // [rsp+60h] [rbp-59h]
  int v30; // [rsp+68h] [rbp-51h]
  _QWORD v31[2]; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v32[40]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-11h]
  __int64 v34; // [rsp+B0h] [rbp-9h]
  _QWORD v35[2]; // [rsp+C0h] [rbp+7h] BYREF
  _BYTE v36[64]; // [rsp+D0h] [rbp+17h] BYREF
  int v37; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v38; // [rsp+130h] [rbp+77h] BYREF
  __int64 v39; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v35, a1);
  if ( v35[0] )
  {
    v39 = *(_QWORD *)(v35[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v37);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v27, (struct PDEVOBJ *)&v39);
    v26 = *(_QWORD *)(v39 + 56);
    GreAcquireSemaphore(v26);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v31);
    v34 = 0LL;
    v33 = 0LL;
    v31[0] = 0LL;
    v5 = v39;
    v28 = 0LL;
    v30 = 1;
    if ( (*(_DWORD *)(v39 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v28 = *(_QWORD *)(v39 + 48);
      v29 = v39;
      GreAcquireSemaphore(v28);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v28, 11LL);
      v5 = v39;
    }
    v38 = *(_QWORD *)(v5 + 1776);
    if ( (*(_DWORD *)(v5 + 2140) & 0x100) == 0 )
      goto LABEL_39;
    v25 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v6 = v38;
    v7 = *(_DWORD *)(v38 + 24);
    if ( (v7 & 0x1000) != 0 )
    {
      v3 = 2;
    }
    else
    {
      v3 = 3;
      if ( (v7 & 0x10000) == 0 )
        v3 = 1;
    }
    v8 = v7 & 0x10000;
    if ( v2 == 1 )
    {
      if ( (*(_DWORD *)(v38 + 24) & 0x1000) != 0 || v8 )
      {
        v9 = *(_DWORD *)(v38 + 60) >> 1;
        v10 = 10LL;
        if ( v9 > 0xA || (v10 = v9) != 0 )
        {
          v11 = 0LL;
          v12 = (unsigned int)v10;
          do
          {
            v13 = *(_QWORD *)(v6 + 112);
            v37 = *(_DWORD *)(v11 + *((_QWORD *)ppalDefault + 14));
            HIBYTE(v37) = 48;
            *(_DWORD *)(v11 + v13) = v37;
            v11 += 4LL;
            v6 = v38;
            --v12;
          }
          while ( v12 );
        }
        LODWORD(v14) = *(_DWORD *)(v6 + 28);
        LODWORD(v15) = 20;
        if ( (_DWORD)v10 )
        {
          while ( 1 )
          {
            v15 = (unsigned int)(v15 - 1);
            v14 = (unsigned int)(v14 - 1);
            v16 = *(_QWORD *)(v6 + 112);
            v37 = *(_DWORD *)(*((_QWORD *)ppalDefault + 14) + 4 * v15);
            HIBYTE(v37) = 48;
            *(_DWORD *)(v16 + 4 * v14) = v37;
            if ( !--v10 )
              break;
            v6 = v38;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v35[0] + 976LL) + 152LL) |= 0xFu;
        *(_DWORD *)(v38 + 24) &= 0xFFFEEFFF;
        v17 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
        *(_DWORD *)(v38 + 32) = v17;
        v18 = *(_QWORD *)(v38 + 120);
        if ( v18 != v38 )
          *(_DWORD *)(v18 + 32) = v17;
        v4 = 1;
      }
      goto LABEL_34;
    }
    if ( v2 == 2 )
    {
      v19 = *(_DWORD *)(v38 + 28);
      if ( !v19 )
      {
        v3 = 0;
LABEL_34:
        SEMOBJ::vUnlock((SEMOBJ *)&v25);
        if ( v4 && (*(_DWORD *)(v39 + 40) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v39 + 1736) )
            (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v39 + 1736))(
              *(_QWORD *)(*(_QWORD *)(v39 + 24) + 1768LL),
              &v38,
              0LL,
              0LL,
              *(_DWORD *)(v38 + 28));
          else
            v3 = 0;
        }
LABEL_39:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28);
        if ( v31[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v31);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v32);
        SEMOBJ::vUnlock((SEMOBJ *)&v26);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v27);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v37);
        goto LABEL_42;
      }
      v20 = 1;
      if ( (unsigned int)(v19 - 1) > 1 )
      {
        do
        {
          v21 = v20++;
          *(_BYTE *)(*(_QWORD *)(v6 + 112) + 4 * v21 + 3) = 0;
          v6 = v38;
        }
        while ( v20 < *(_DWORD *)(v38 + 28) - 1 );
      }
      v22 = *(_DWORD *)(v6 + 24) & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v38 + 28); v6 = v38 )
      {
        *(_BYTE *)(*(_QWORD *)(v6 + 112) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v22 = *(_DWORD *)(v6 + 24) & 0xFFFEEFFF | 0x10000;
    }
    *(_DWORD *)(v6 + 24) = v22;
    goto LABEL_34;
  }
LABEL_42:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v35);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v36);
  return v3;
}
