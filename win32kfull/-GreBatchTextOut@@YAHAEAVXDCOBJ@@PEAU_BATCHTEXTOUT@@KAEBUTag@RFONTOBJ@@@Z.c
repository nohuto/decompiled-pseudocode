/*
 * XREFs of ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1C00A824C
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0055DA0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C00AB7D0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall GreBatchTextOut(
        struct XDCOBJ *a1,
        struct _BATCHTEXTOUT *a2,
        unsigned int a3,
        const struct RFONTOBJ::Tag *a4)
{
  __int64 v4; // r14
  __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // r15d
  int v10; // r11d
  unsigned int v11; // r10d
  __int64 v12; // r8
  __int64 v13; // rdx
  int *v14; // r8
  __int64 v15; // rcx
  int v16; // r13d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rbx
  struct tagRECT *v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v35; // [rsp+60h] [rbp-38h]
  int v36; // [rsp+B0h] [rbp+18h]

  v4 = a3;
  if ( a3 < 0x54 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v7 = AllocFreeTmpBuffer(a3);
  if ( !v7 )
    return 0LL;
  if ( (struct _BATCHTEXTOUT *)((char *)a2 + v4) < a2 || (unsigned __int64)a2 + v4 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove((void *)v7, a2, (unsigned int)v4);
  v8 = 0LL;
  v9 = -1;
  v10 = *(_DWORD *)(v7 + 32);
  v11 = *(_DWORD *)(v7 + 56);
  v12 = *(unsigned int *)(v7 + 60);
  v13 = (unsigned int)(v4 - 84);
  if ( v11 > (unsigned int)(v4 - 84) >> 1 )
    goto LABEL_39;
  if ( !(_DWORD)v12 )
  {
    v14 = 0LL;
    goto LABEL_13;
  }
  if ( (unsigned int)v12 > (unsigned int)v13
    || (v13 = (unsigned int)(v13 - v12) >> (((*(_DWORD *)(v7 + 32) & 0x2000) != 0) + 2), v11 > (unsigned int)v13)
    || (_DWORD)v12 != (((_DWORD)v12 + 3) & 0xFFFFFFFC) )
  {
LABEL_39:
    FreeTmpBuffer(v7, v13, v12);
    return 0LL;
  }
  v14 = (int *)((unsigned int)v12 + v7 + 84);
LABEL_13:
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v16 = *(_DWORD *)(v15 + 184);
  v36 = *(_DWORD *)(v15 + 188);
  v17 = *(_DWORD *)(v7 + 4);
  if ( v16 != v17 )
  {
    *(_DWORD *)(v15 + 184) = v17;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 188LL) = *(_DWORD *)(v7 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 7u;
  }
  v18 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v19 = *(_DWORD *)(v18 + 176);
  v35 = *(_DWORD *)(v18 + 180);
  v20 = *(_DWORD *)(v7 + 8);
  if ( v19 != v20 )
  {
    *(_DWORD *)(v18 + 176) = v20;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = *(_DWORD *)(v7 + 20);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
  }
  v21 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v22 = *(_QWORD *)(v7 + 64);
  if ( *(_QWORD *)(v21 + 296) != v22 )
  {
    v8 = *(_QWORD *)(v21 + 296);
    *(_QWORD *)(v21 + 296) = v22;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x20u;
  }
  v23 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v24 = *(_DWORD *)(v7 + 72);
  if ( *(_DWORD *)(v23 + 272) != v24 )
  {
    v9 = *(_DWORD *)(v23 + 272);
    *(_DWORD *)(v23 + 272) = v24;
  }
  v25 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v26 = *(_QWORD *)(v25 + 324);
  if ( v26 != *(_QWORD *)(v7 + 76) )
  {
    *(_DWORD *)(v25 + 324) = *(_DWORD *)(v7 + 76);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = *(_DWORD *)(v7 + 80);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  v27 = 0LL;
  if ( v10 >= 0 )
    v27 = (struct tagRECT *)(v7 + 36);
  v28 = v10 & 0x7FFFFFFF;
  if ( v10 >= 0 )
    v28 = v10;
  GreExtTextOutWLocked(
    a1,
    *(_DWORD *)(v7 + 24),
    *(_DWORD *)(v7 + 28),
    v28,
    v27,
    (unsigned __int16 *)(v7 + 84),
    v11,
    v14,
    *(_DWORD *)(v7 + 12),
    0LL,
    *(_DWORD *)(v7 + 52),
    a4);
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( *(_DWORD *)(v31 + 184) != v16 )
  {
    *(_DWORD *)(v31 + 184) = v16;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 188LL) = v36;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 7u;
  }
  v32 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( *(_DWORD *)(v32 + 176) != v19 )
  {
    *(_DWORD *)(v32 + 176) = v19;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = v35;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
  }
  if ( v8 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL) = v8;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x20u;
  }
  if ( v9 != -1 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 272LL) = v9;
  v33 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( v26 != *(_QWORD *)(v33 + 324) )
  {
    *(_DWORD *)(v33 + 324) = v26;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = HIDWORD(v26);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  FreeTmpBuffer(v7, v29, v30);
  return 1LL;
}
