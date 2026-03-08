/*
 * XREFs of KiCancelTimer @ 0x140251440
 * Callers:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KeSetTimerEx @ 0x140250F30 (KeSetTimerEx.c)
 *     KeCancelTimerInternal @ 0x1402FDCC4 (KeCancelTimerInternal.c)
 *     KiSuspendThread @ 0x140354348 (KiSuspendThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, char a2)
{
  unsigned __int8 v4; // di
  __int64 v6; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rbp
  __int64 v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  volatile signed __int32 *v12; // r14
  unsigned __int16 v13; // r8
  _QWORD *v14; // rcx
  unsigned __int64 v15; // r15
  _QWORD *v16; // rax
  __int64 v17; // r12
  unsigned int v18; // eax
  volatile signed __int32 *v19; // rdi
  __int64 v20; // rcx
  unsigned int v21; // r9d
  volatile signed __int32 *v22; // rcx
  int v23; // [rsp+30h] [rbp-78h] BYREF
  int v24; // [rsp+34h] [rbp-74h] BYREF
  int v25; // [rsp+38h] [rbp-70h] BYREF
  int v26; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v27; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v28[3]; // [rsp+44h] [rbp-64h] BYREF
  __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h]
  _QWORD v31[2]; // [rsp+60h] [rbp-48h] BYREF

  v4 = 0;
  v29 = 0LL;
  while ( 1 )
  {
    v23 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v6 = *(unsigned __int16 *)(a1 + 56);
    v7 = *(unsigned __int8 *)(a1 + 2);
    v8 = v7;
    v24 = 0;
    v9 = KiProcessorBlock[v6];
    v10 = (unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8;
    v30 = v9;
    v11 = v9 + 15360;
    v12 = (volatile signed __int32 *)(v9 + 15360 + 32 * (v10 + v7 + 16));
    while ( _interlockedbittestandset64(v12, 0LL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *(_QWORD *)v12 );
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v13 = *(_WORD *)(a1 + 58);
      v14 = *(_QWORD **)(a1 + 32);
      v15 = 32 * (((unsigned __int64)v13 << 8) + v8 + 16);
      v16 = *(_QWORD **)(a1 + 40);
      v17 = 32 * (((v13 ^ 1LL) << 8) + v8 + 16);
      if ( v14[1] != a1 + 32 || *v16 != a1 + 32 )
        __fastfail(3u);
      *v16 = v14;
      v14[1] = v16;
      if ( v16 != v14 )
      {
LABEL_14:
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
        v18 = -1073741953;
        if ( !a2 )
          v18 = -1073741825;
LABEL_16:
        v4 = 1;
        _InterlockedAnd((volatile signed __int32 *)a1, v18);
        goto LABEL_6;
      }
      *(_DWORD *)(v15 + v11 + 28) = -1;
      if ( !v13 )
      {
        v26 = 0;
        v19 = (volatile signed __int32 *)(v11 + 32 * (v8 + 272));
        while ( _interlockedbittestandset64(v19, 0LL) )
        {
          do
            KeYieldProcessorEx(&v26);
          while ( *(_QWORD *)v19 );
        }
        goto LABEL_20;
      }
      v19 = (volatile signed __int32 *)(v11 + 32 * (v8 + 16));
      if ( _interlockedbittestandset64(v19, 0LL) )
      {
        _mm_pause();
      }
      else if ( v19 )
      {
LABEL_20:
        if ( *(_DWORD *)(v15 + v11 + 28) == -1 && *(_DWORD *)(v17 + v11 + 28) == -1 )
        {
          v20 = qword_140D20278[2 * *(unsigned __int8 *)(v30 + 208)];
          if ( KiSerializeTimerExpiration )
          {
            v21 = v8 & 0x3F;
            v22 = (volatile signed __int32 *)(v20 + 8 * (v8 >> 6));
          }
          else
          {
            v21 = *(unsigned __int8 *)(v30 + 209);
            v22 = (volatile signed __int32 *)((v8 << 6) + v20);
          }
          _interlockedbittestandreset64(v22, v21);
        }
        _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
        goto LABEL_14;
      }
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      v27 = 0;
      while ( _interlockedbittestandset64(v19, 0LL) )
      {
        do
          KeYieldProcessorEx(&v27);
        while ( *(_QWORD *)v19 );
      }
      v28[0] = 0;
      v12 = (volatile signed __int32 *)(v11 + 32 * (v8 + 272));
      while ( _interlockedbittestandset64(v12, 0LL) )
      {
        do
          KeYieldProcessorEx(v28);
        while ( *(_QWORD *)v12 );
      }
      goto LABEL_20;
    }
    _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v11 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v18 = 16777087;
      if ( !a2 )
        v18 = 0xFFFFFF;
      goto LABEL_16;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v25 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v25);
  }
  if ( a2 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_6:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v4 )
  {
    v29 = a1;
    v31[0] = &v29;
    v31[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v31, 1, 1073872896, 3925, 1538);
  }
  return v4;
}
