/*
 * XREFs of AnFwpFadeAnimationTimer @ 0x140AEA110
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     BgpGxDrawRectangle @ 0x1403817FC (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140381AB0 (BgpGetBitsPerPixel.c)
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x140AEA85C (LogFwStat.c)
 */

void __fastcall AnFwpFadeAnimationTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // edi
  char v5; // r13
  char v6; // r12
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // esi
  __int64 v10; // r9
  _BYTE *v11; // r10
  __int64 v12; // r11
  int v13; // ebx
  __int64 v14; // r10
  unsigned int v15; // eax
  __int64 v16; // r11
  __int64 k; // r9
  int v18; // ecx
  int v19; // ebp
  unsigned int v20; // r8d
  __int64 v21; // r9
  __int64 m; // r10
  int v23; // eax
  int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // r14d
  char v29; // di
  int v30; // r8d
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // ecx
  __int64 v42; // r10
  __int64 i; // r9
  int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // r8
  unsigned int v47; // ecx
  __int64 j; // r9
  int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  int v53; // eax
  unsigned int v54; // eax
  char v55; // [rsp+20h] [rbp-58h]
  int v56; // [rsp+24h] [rbp-54h]
  __int64 v57; // [rsp+28h] [rbp-50h]
  _BYTE *v58; // [rsp+30h] [rbp-48h]
  __int64 v59; // [rsp+38h] [rbp-40h] BYREF
  _BYTE *v60; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  v59 = 0LL;
  BgpFwAcquireLock();
  if ( byte_140CF7769 )
  {
    LogFwStat(1LL, 6LL, 0LL);
    LogFwStat(1LL, 4LL, 0LL);
    v5 = byte_140C0B501;
    v6 = byte_140C0B502;
    v7 = qword_140C0B508;
    v8 = qword_140C0B578;
    v59 = qword_140C0B4F8;
    v55 = byte_140C0B500;
    v56 = dword_140C0B4F4;
    v58 = (_BYTE *)qword_140C0B538;
    v60 = (_BYTE *)qword_140C0B548;
    v57 = qword_140C0B580;
    v9 = 10 * (dword_140C0B4F0 - dword_140C0B4F0 / (unsigned int)(dword_140C0E3B4 - dword_140C0B4F4));
    v13 = 0;
    if ( (unsigned int)BgpGetBitsPerPixel() == 24 )
    {
      if ( !v6 )
      {
        v40 = qword_140C0B540;
        v41 = 0;
        v42 = *(_QWORD *)(v12 + 24);
        for ( i = *(_QWORD *)(qword_140C0B540 + 24); v41 < *(_DWORD *)(v40 + 12); ++v41 )
        {
          v44 = *(unsigned __int8 *)(v41 + i);
          if ( (_BYTE)v44 )
          {
            v45 = (v9 * v44) >> 10;
            *(_BYTE *)(v41 + v42) = v45;
            if ( v45 )
              ++v13;
          }
        }
        v10 = v57;
        v11 = v58;
      }
      v19 = 0;
      if ( !v55 )
      {
        v46 = *(_QWORD *)(v7 + 24);
        v47 = 0;
        for ( j = *((_QWORD *)v11 + 3); v47 < *(_DWORD *)(v7 + 12); ++v47 )
        {
          v49 = *(unsigned __int8 *)(v47 + v46);
          if ( (_BYTE)v49 )
          {
            v50 = (v9 * v49) >> 10;
            *(_BYTE *)(v47 + j) = v50;
            if ( v50 )
              ++v19;
          }
        }
        v10 = v57;
      }
      v28 = 0;
      if ( !v5 )
      {
        v51 = *(_QWORD *)(v8 + 24);
        v52 = *(_QWORD *)(v10 + 24);
        if ( *(_DWORD *)(v8 + 12) )
        {
          do
          {
            v53 = *(unsigned __int8 *)(v4 + v51);
            if ( (_BYTE)v53 )
            {
              v54 = (v9 * v53) >> 10;
              *(_BYTE *)(v4 + v52) = v54;
              if ( v54 )
                ++v28;
            }
            ++v4;
          }
          while ( v4 < *(_DWORD *)(v8 + 12) );
        }
      }
    }
    else
    {
      if ( !v6 )
      {
        v14 = qword_140C0B540;
        v15 = 0;
        v16 = *(_QWORD *)(v12 + 24);
        for ( k = *(_QWORD *)(qword_140C0B540 + 24); v15 < *(_DWORD *)(v14 + 12); v15 += 4 )
        {
          v18 = *(_DWORD *)(v15 + k);
          if ( v18 )
          {
            v30 = v13 + 1;
            v31 = (v9 * (unsigned __int8)v18) >> 10;
            *(_BYTE *)(v15 + v16) = v31;
            if ( !v31 )
              v30 = v13;
            v13 = v30 + 1;
            v32 = (v9 * *(unsigned __int8 *)(v15 + 1 + k)) >> 10;
            *(_BYTE *)(v15 + 1 + v16) = v32;
            if ( !v32 )
              v13 = v30;
            v33 = (v9 * *(unsigned __int8 *)(v15 + 2 + k)) >> 10;
            *(_BYTE *)(v15 + 2 + v16) = v33;
            if ( v33 )
              ++v13;
          }
        }
        v11 = v58;
      }
      v19 = 0;
      if ( !v55 )
      {
        v20 = 0;
        v21 = *(_QWORD *)(v7 + 24);
        for ( m = *((_QWORD *)v11 + 3); v20 < *(_DWORD *)(v7 + 12); v20 += 4 )
        {
          v23 = *(_DWORD *)(v20 + v21);
          if ( v23 )
          {
            v24 = v19 + 1;
            v25 = (v9 * (unsigned __int8)v23) >> 10;
            *(_BYTE *)(v20 + m) = v25;
            if ( !v25 )
              v24 = v19;
            v19 = v24 + 1;
            v26 = (v9 * *(unsigned __int8 *)(v20 + 1 + v21)) >> 10;
            *(_BYTE *)(v20 + 1 + m) = v26;
            if ( !v26 )
              v19 = v24;
            v27 = (v9 * *(unsigned __int8 *)(v20 + 2 + v21)) >> 10;
            *(_BYTE *)(v20 + 2 + m) = v27;
            if ( v27 )
              ++v19;
          }
        }
      }
      v28 = 0;
      if ( !v5 )
      {
        v34 = *(_QWORD *)(v8 + 24);
        v35 = *(_QWORD *)(v57 + 24);
        if ( *(_DWORD *)(v8 + 12) )
        {
          do
          {
            v36 = *(_DWORD *)(v4 + v34);
            if ( v36 )
            {
              v37 = (v9 * (unsigned __int8)v36) >> 10;
              *(_BYTE *)(v4 + v35) = v37;
              if ( v37 )
                ++v28;
              v38 = (v9 * *(unsigned __int8 *)(v4 + 1 + v34)) >> 10;
              *(_BYTE *)(v4 + 1 + v35) = v38;
              if ( v38 )
                ++v28;
              v39 = (v9 * *(unsigned __int8 *)(v4 + 2 + v34)) >> 10;
              *(_BYTE *)(v4 + 2 + v35) = v39;
              if ( v39 )
                ++v28;
            }
            v4 += 4;
          }
          while ( v4 < *(_DWORD *)(v8 + 12) );
        }
      }
    }
    LogFwStat(0LL, 4LL, 0LL);
    LogFwStat(1LL, 3LL, 0LL);
    if ( !v6 )
    {
      BgpGxDrawRectangle(v60, (__int64)&v59);
      v6 = v13 == 0;
    }
    v29 = v55;
    if ( !v55 )
    {
      if ( !v56 && !v19 || (BgpGxDrawRectangle(v58, (__int64)&xmmword_140C0B510), !v19) )
        v29 = 1;
    }
    if ( !v5 )
    {
      if ( !v56 && !v28 || (BgpGxDrawRectangle((_BYTE *)v57, (__int64)&xmmword_140C0B550), !v28) )
        v5 = 1;
    }
    LogFwStat(0LL, 3LL, 0LL);
    LogFwStat(0LL, 6LL, &v60);
    if ( v13 || v28 || v19 )
    {
      byte_140C0B500 = v29;
      byte_140C0B501 = v5;
      dword_140C0B4F0 = v9 / 0xA;
      dword_140C0B4F4 = v56 + 1;
      byte_140C0B502 = v6;
    }
    else
    {
      byte_140CF7769 = 0;
      KeCancelTimer(&stru_140D166C0);
      KeSetEvent(&stru_140D16700, 0, 0);
    }
  }
  BgpFwReleaseLock();
}
