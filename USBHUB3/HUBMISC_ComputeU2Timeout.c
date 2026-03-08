/*
 * XREFs of HUBMISC_ComputeU2Timeout @ 0x1C0030ADC
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C0025070 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage @ 0x1C000CE04 (Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage.c)
 */

char __fastcall HUBMISC_ComputeU2Timeout(__int64 *a1)
{
  volatile signed __int32 *v2; // rdx
  int v3; // r9d
  char v4; // r8
  __int64 v5; // rax
  char v6; // r8
  char v7; // cl
  unsigned __int16 v8; // r8
  _QWORD *v9; // r15
  char v10; // r14
  bool v11; // zf
  __int64 v12; // rbp
  __int64 v13; // r9
  unsigned int v14; // esi
  unsigned int v15; // r11d
  __int64 v16; // r10
  _QWORD *v17; // rax
  char v18; // si
  char v19; // r12
  unsigned int v20; // r13d
  __int64 v21; // rdi
  __int64 v22; // r10
  unsigned __int16 v23; // r9
  unsigned __int16 v24; // ax
  _QWORD *v25; // rax
  unsigned int v27; // [rsp+50h] [rbp+8h]

  if ( (unsigned int)Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage() )
  {
    v6 = (*(_DWORD *)(a1[1] + 204) & 0x400) != 0;
    if ( (*(_DWORD *)(a1[1] + 204) & 0x800) != 0 )
      v6 = (*((_DWORD *)a1 + 409) & 0x200000) != 0 ? v6 : 0;
    if ( (*((_DWORD *)a1 + 411) & 0x80u) != 0
      || (*(_DWORD *)(*a1 + 40) & 0x8000) != 0
      || (v2 = (volatile signed __int32 *)(a1 + 277), v3 = *((_DWORD *)a1 + 554), (v3 & 0x180) != 0)
      || v6 == 1 )
    {
LABEL_6:
      v2 = (volatile signed __int32 *)(a1 + 277);
LABEL_7:
      _InterlockedAnd(v2, 0xFFFFFFDF);
      goto LABEL_8;
    }
  }
  else
  {
    if ( (*((_DWORD *)a1 + 411) & 0x80u) != 0 )
      goto LABEL_6;
    if ( (*(_DWORD *)(*a1 + 40) & 0x8000) != 0 )
      goto LABEL_6;
    v2 = (volatile signed __int32 *)(a1 + 277);
    v3 = *((_DWORD *)a1 + 554);
    if ( (v3 & 0x180) != 0 || (*(_DWORD *)(a1[1] + 204) & 0x400) != 0 )
      goto LABEL_6;
  }
  v7 = *((_BYTE *)a1 + 2220);
  *v2 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(16 * v7)) & 0x20;
  if ( (v7 & 8) != 0 )
  {
    if ( (a1[204] & 2) != 0 || (v7 & 0x20) == 0 )
    {
      v4 = -1;
      goto LABEL_9;
    }
    if ( v7 < 0 )
    {
      v4 = 1;
      goto LABEL_9;
    }
    if ( (v7 & 0x40) != 0 )
    {
      v4 = -2;
      goto LABEL_9;
    }
    v8 = 0;
    v9 = (_QWORD *)(a1[6] + 16);
    v10 = 0;
    v11 = v9 == (_QWORD *)*v9;
    v12 = *v9 - 8LL;
    v13 = v12;
    while ( !v11 )
    {
      v14 = *(_DWORD *)(v13 + 24);
      v15 = 0;
      if ( v14 )
      {
        v16 = v13 + 72;
        do
        {
          if ( (*(_BYTE *)(*(_QWORD *)v16 + 3LL) & 3) != 0 )
          {
            v10 = 1;
            v18 = 0;
            v19 = 0;
            goto LABEL_37;
          }
          ++v15;
          v16 += 72LL;
        }
        while ( v15 < v14 );
      }
      v17 = *(_QWORD **)(v13 + 8);
      v11 = v9 == v17;
      v13 = (__int64)(v17 - 1);
    }
    v18 = 0;
    v19 = 0;
    if ( v9 == (_QWORD *)*v9 )
      goto LABEL_67;
LABEL_37:
    while ( 1 )
    {
      v20 = 0;
      v27 = *(_DWORD *)(v12 + 24);
      if ( v27 )
        break;
LABEL_59:
      v25 = *(_QWORD **)(v12 + 8);
      v12 = (__int64)(v25 - 1);
      if ( v9 == v25 )
      {
        if ( v18 )
        {
          v4 = -1;
          goto LABEL_9;
        }
        if ( v19 && *((_BYTE *)a1 + 2214) )
          *((_BYTE *)a1 + 2214) = -1;
        if ( v8 >= 0xFE00u )
        {
          v4 = -2;
          goto LABEL_9;
        }
LABEL_67:
        v4 = HIBYTE(v8) + 1;
        goto LABEL_9;
      }
    }
    v21 = v12 + 72;
    while ( 1 )
    {
      v22 = *(_QWORD *)v21;
      if ( *(char *)(*(_QWORD *)v21 + 2LL) >= 0 )
        v23 = *((_WORD *)a1 + 1102);
      else
        v23 = *((_WORD *)a1 + 1099);
      if ( (*(_BYTE *)(v22 + 3) & 3) == 0 )
      {
        if ( !v10 )
        {
          v24 = 5 * v23;
          goto LABEL_56;
        }
        goto LABEL_54;
      }
      if ( (*(_BYTE *)(v22 + 3) & 3) == 1 )
      {
        if ( v23 > 125 * (unsigned int)*(unsigned __int8 *)(v22 + 6) )
          goto LABEL_7;
LABEL_54:
        v24 = 1;
        goto LABEL_56;
      }
      if ( (*(_BYTE *)(v22 + 3) & 3) == 2 )
        break;
      if ( (*(_BYTE *)(v22 + 3) & 3) == 3 )
      {
        if ( (*(_BYTE *)(v22 + 3) & 0x30) != 0 )
          break;
        v19 = 1;
        if ( v23 <= 125 * (unsigned int)*(unsigned __int8 *)(v22 + 6) )
          break;
        v18 = 1;
        v24 = 255;
      }
      else
      {
        v24 = 0;
      }
LABEL_56:
      if ( v8 > v24 )
        v24 = v8;
      ++v20;
      v21 += 72LL;
      v8 = v24;
      if ( v20 >= v27 )
        goto LABEL_59;
    }
    v24 = 5 * v23;
    goto LABEL_56;
  }
LABEL_8:
  v4 = 0;
LABEL_9:
  v5 = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x10000000) != 0 )
  {
    LODWORD(v5) = *((_DWORD *)a1 + 408);
    if ( (v5 & 2) == 0 )
    {
      LOBYTE(v5) = *((_BYTE *)a1 + 2214) - 1;
      if ( (unsigned __int8)v5 <= 0xFDu && v4 == -1 )
      {
        v4 = 0;
        _InterlockedAnd(v2, 0xFFFFFFDF);
      }
    }
  }
  *((_BYTE *)a1 + 2215) = v4;
  return v5;
}
