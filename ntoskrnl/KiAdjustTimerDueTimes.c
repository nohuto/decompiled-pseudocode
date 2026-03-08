/*
 * XREFs of KiAdjustTimerDueTimes @ 0x1403966F4
 * Callers:
 *     KiSetSystemTimeDpc @ 0x140396560 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14056D68C (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KiInsertTimerTable @ 0x1402511D0 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140251B00 (KiTimerWaitTest.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAdjustTimer2DueTimes @ 0x14039680C (KiAdjustTimer2DueTimes.c)
 *     KiRemoveEntryTimer @ 0x1403BCED8 (KiRemoveEntryTimer.c)
 *     KiTraceSetTimer @ 0x14045A480 (KiTraceSetTimer.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int i; // esi
  unsigned int v6; // r15d
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rdi
  volatile signed __int64 *v9; // rax
  _QWORD *result; // rax
  _QWORD *v11; // rdx
  char v12; // r8
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  char *v23; // [rsp+20h] [rbp-50h]
  int v24; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int64 *v25; // [rsp+38h] [rbp-38h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-30h] BYREF
  _QWORD **v27; // [rsp+48h] [rbp-28h]
  __int128 v28; // [rsp+50h] [rbp-20h]
  __int64 v29; // [rsp+60h] [rbp-10h]
  char v32; // [rsp+C8h] [rbp+58h] BYREF

  v27 = &v26;
  v3 = a2;
  v32 = 0;
  v26 = &v26;
  for ( i = 0; i < 2; ++i )
  {
    v6 = 0;
    v7 = ((unsigned __int64)i << 13) + v3 + 512;
    do
    {
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( *(_QWORD *)v7 );
      }
      v25 = (volatile signed __int64 *)v7;
      v8 = *(_QWORD **)(v7 + 8);
      v9 = (volatile signed __int64 *)v7;
      if ( v8 != (_QWORD *)(v7 + 8) )
      {
        do
        {
          v11 = v8 - 4;
          v12 = *((_BYTE *)v8 - 31);
          v13 = v8;
          v8 = (_QWORD *)*v8;
          if ( (v12 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v12 & 2) == 0) )
          {
            KiRemoveEntryTimer(a2, v11, v6, &v25);
            v14 = v27;
            if ( *v27 != &v26 )
              goto LABEL_40;
            v13[1] = v27;
            *v13 = &v26;
            *v14 = v13;
            v27 = (_QWORD **)v13;
          }
        }
        while ( v8 != (_QWORD *)(v7 + 8) );
        v9 = v25;
      }
      _InterlockedAnd64(v9, 0LL);
      ++v6;
      v7 += 32LL;
    }
    while ( v6 < 0x100 );
    v3 = a2;
  }
  result = v26;
  if ( v26 != &v26 )
  {
    while ( 1 )
    {
      v15 = (__int64)(result - 4);
      v16 = *result;
      if ( *(_QWORD **)(*result + 8LL) != result )
        break;
      v17 = (_QWORD *)result[1];
      if ( (_QWORD *)*v17 != result )
        break;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      v18 = *(_QWORD *)(a3 + 24);
      v19 = *(_QWORD *)(v15 + 24);
      v20 = v19 - v18;
      if ( v18 >= 0 )
      {
        if ( v20 > v19 )
          v20 = 0LL;
      }
      else if ( v20 < v19 )
      {
        v20 = -1LL;
      }
      v21 = __ROL8__(KiWaitNever ^ *(_QWORD *)(v15 + 48), KiWaitNever);
      v28 = 0LL;
      v22 = KiWaitAlways ^ _byteswap_uint64(v15 ^ v21);
      *(_DWORD *)v15 |= 0x80u;
      *(_QWORD *)(v15 + 24) = v20;
      v29 = 0LL;
      LODWORD(v28) = *(_DWORD *)v15;
      BYTE2(v28) = v20 >> 18;
      *(_DWORD *)v15 = v28;
      if ( *(_BYTE *)(a3 + 32) )
        v23 = &v32;
      else
        v23 = 0LL;
      if ( KiInsertTimerTable(a1, v15, v22, (unsigned __int8)(v20 >> 18), v23) )
      {
        if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x11u) )
          KiTraceSetTimer(v15, v22, 0LL);
        else
          _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
      }
      else
      {
        KiTimerWaitTest(a1, v15, 0LL);
      }
      result = v26;
      if ( v26 == &v26 )
        goto LABEL_9;
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_9:
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)KiAdjustTimer2DueTimes(a3);
  return result;
}
