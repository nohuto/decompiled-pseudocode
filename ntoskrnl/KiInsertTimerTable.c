/*
 * XREFs of KiInsertTimerTable @ 0x1402511D0
 * Callers:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x140250F30 (KeSetTimerEx.c)
 *     KiTimerWaitTest @ 0x140251B00 (KiTimerWaitTest.c)
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x1403538F8 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x1403966F4 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveEntryTimer @ 0x1403BCED8 (KiRemoveEntryTimer.c)
 */

_BOOL8 __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // r13
  int v9; // edx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  volatile signed __int64 *v12; // rsi
  _QWORD *v13; // r15
  _QWORD *v14; // r14
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  volatile signed __int32 *v19; // rcx
  char *v20; // rdx
  unsigned __int64 v22; // r8
  int v23; // eax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  char v27; // cl
  int v28; // edx
  char v29; // r9
  signed __int32 v30[8]; // [rsp+0h] [rbp-78h] BYREF
  volatile signed __int64 *v31; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+30h] [rbp-48h]
  int v34; // [rsp+88h] [rbp+10h] BYREF
  int v35; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = a4;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v23 = *(unsigned __int16 *)(a3 + 2), (unsigned __int16)v23 >= 0x800u) )
    {
      v9 = v23 - 2048;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 192);
        if ( (*(_QWORD *)(v26 + 80) & *(_QWORD *)(v26 + 128)) != 0LL )
        {
          v27 = *(_BYTE *)(a1 + 209);
          _BitScanForward64((unsigned __int64 *)&v26, __ROR8__(*(_QWORD *)(v26 + 80) & *(_QWORD *)(v26 + 128), v27));
          v28 = *(unsigned __int8 *)(a1 + 208) << 6;
          v35 = v26;
          v9 = KiProcessorNumberToIndexMappingTable[(((_BYTE)v26 + v27) & 0x3F) + v28];
        }
      }
    }
  }
  v10 = *(_QWORD *)(a2 + 24);
  *(_WORD *)(a2 + 56) = v9;
  v34 = 0;
  v11 = (unsigned __int64)*(unsigned __int16 *)(a2 + 58) << 8;
  v32 = KiProcessorBlock[v9];
  v12 = (volatile signed __int64 *)(v32 + 15360 + 32 * (v11 + a4 + 16LL));
  v33 = v32 + 15360;
  v13 = v12 + 1;
  v14 = v12 + 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
  {
    do
      KeYieldProcessorEx(&v34);
    while ( *v12 );
  }
  v15 = (_QWORD *)*v13;
  v31 = v12;
  if ( v15 == v13 )
  {
    v5 = 6;
  }
  else
  {
    v22 = *(v15 - 1);
    if ( v10 > v22 )
    {
      if ( v10 - v22 <= (unsigned __int64)(unsigned int)KeMaximumIncrement >> 2 )
      {
        v24 = (_QWORD *)*((_QWORD *)v12 + 2);
        v14 = v15;
        if ( v15 != v24 )
        {
          while ( 1 )
          {
            v25 = (_QWORD *)*v14;
            if ( v10 <= *(_QWORD *)(*v14 - 8LL) )
              break;
            v14 = (_QWORD *)*v14;
            if ( v25 == v24 )
            {
              v15 = (_QWORD *)*v25;
              goto LABEL_10;
            }
          }
        }
      }
      else
      {
        v14 = (_QWORD *)*((_QWORD *)v12 + 2);
        do
        {
          if ( v10 >= *(v14 - 1) )
            break;
          v14 = (_QWORD *)v14[1];
        }
        while ( v14 != v13 );
      }
    }
    else
    {
      v5 = v10 < v22 ? 2 : 0;
    }
    v15 = (_QWORD *)*v14;
  }
LABEL_10:
  v16 = (_QWORD *)(a2 + 32);
  if ( (_QWORD *)v15[1] != v14 )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(a2 + 40) = v14;
  v15[1] = v16;
  *v14 = v16;
  if ( (v5 & 2) != 0 )
  {
    *((_QWORD *)v12 + 3) = v10;
    _InterlockedOr(v30, 0);
    if ( v5 >= 4 )
    {
      v17 = qword_140D20278[2 * *(unsigned __int8 *)(v32 + 208)];
      if ( KiSerializeTimerExpiration )
      {
        v18 = v6 & 0x3F;
        v19 = (volatile signed __int32 *)(v17 + 8 * (v6 >> 6));
      }
      else
      {
        v18 = *(unsigned __int8 *)(v32 + 209);
        v19 = (volatile signed __int32 *)((v6 << 6) + v17);
      }
      _interlockedbittestandset64(v19, v18);
    }
    if ( v10 <= MEMORY[0xFFFFF78000000008] )
    {
      v20 = a5;
      if ( !a5 )
      {
        LOBYTE(v5) = 1;
        KiRemoveEntryTimer(v33, a2, (unsigned int)v6, &v31);
        _InterlockedAnd64(v31, 0LL);
        return (v5 & 1) == 0;
      }
      v29 = 1;
      _InterlockedAnd64(v31, 0LL);
LABEL_44:
      *v20 = v29;
      return (v5 & 1) == 0;
    }
    v12 = v31;
  }
  _InterlockedAnd64(v12, 0LL);
  v20 = a5;
  if ( a5 )
  {
    v29 = 0;
    goto LABEL_44;
  }
  return (v5 & 1) == 0;
}
