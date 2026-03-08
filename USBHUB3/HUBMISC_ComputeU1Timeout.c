/*
 * XREFs of HUBMISC_ComputeU1Timeout @ 0x1C003081C
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C0025070 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage @ 0x1C000CE04 (Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall HUBMISC_ComputeU1Timeout(__int64 *a1)
{
  int IsEnabledDeviceUsage; // eax
  unsigned __int8 v3; // dl
  __int64 v4; // rcx
  int v5; // r9d
  __int64 result; // rax
  char v7; // r8
  __int64 v8; // rcx
  char v9; // cl
  unsigned __int16 v10; // bp
  _QWORD *v11; // r14
  char v12; // r15
  __int64 v13; // rsi
  __int64 v14; // r8
  unsigned int v15; // edi
  unsigned int v16; // r10d
  __int64 v17; // r9
  _QWORD *v18; // rax
  bool v19; // zf
  unsigned int v20; // edi
  unsigned int v21; // r11d
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned __int16 v24; // r8
  unsigned __int16 v25; // r8
  _QWORD *v26; // rax

  IsEnabledDeviceUsage = Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage();
  v3 = 1;
  if ( IsEnabledDeviceUsage )
  {
    v7 = (*(_DWORD *)(a1[1] + 204) & 0x400) != 0;
    if ( (*(_DWORD *)(a1[1] + 204) & 0x800) != 0 )
      v7 = (*((_DWORD *)a1 + 409) & 0x200000) != 0 ? v7 : 0;
    if ( (*((_DWORD *)a1 + 411) & 0x80u) != 0 )
      goto LABEL_8;
    v8 = *a1;
    if ( (*(_DWORD *)(*a1 + 40) & 0x8000) != 0 )
      goto LABEL_8;
    v5 = *((_DWORD *)a1 + 554);
    if ( (v5 & 0x140) != 0 || (*(_DWORD *)(v8 + 44) & 8) != 0 || (*(_DWORD *)(v8 + 2496) & 8) != 0 || v7 == 1 )
      goto LABEL_8;
  }
  else if ( (*((_DWORD *)a1 + 411) & 0x80u) != 0
         || (v4 = *a1, (*(_DWORD *)(*a1 + 40) & 0x8000) != 0)
         || (v5 = *((_DWORD *)a1 + 554), (v5 & 0x140) != 0)
         || (*(_DWORD *)(v4 + 44) & 8) != 0
         || (*(_DWORD *)(v4 + 2496) & 8) != 0
         || (*(_DWORD *)(a1[1] + 204) & 0x400) != 0 )
  {
LABEL_8:
    _InterlockedAnd((volatile signed __int32 *)a1 + 554, 0xFFFFFFEF);
LABEL_9:
    v3 = 0;
    goto LABEL_10;
  }
  v9 = *((_BYTE *)a1 + 2220);
  *((_DWORD *)a1 + 554) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(16 * v9)) & 0x10;
  if ( (v9 & 4) == 0 )
    goto LABEL_9;
  if ( (v9 & 0x10) == 0 )
  {
    v3 = -1;
    goto LABEL_10;
  }
  if ( v9 < 0 )
    goto LABEL_10;
  if ( (v9 & 0x40) != 0 )
  {
    v3 = 127;
    goto LABEL_10;
  }
  v10 = 0;
  v11 = (_QWORD *)(a1[6] + 16);
  v12 = 0;
  v13 = *v11 - 8LL;
  v14 = v13;
  if ( v11 != (_QWORD *)*v11 )
  {
    do
    {
      v15 = *(_DWORD *)(v14 + 24);
      v16 = 0;
      if ( v15 )
      {
        v17 = v14 + 72;
        do
        {
          if ( (*(_BYTE *)(*(_QWORD *)v17 + 3LL) & 3) != 0 )
          {
            v12 = 1;
            goto LABEL_38;
          }
          ++v16;
          v17 += 72LL;
        }
        while ( v16 < v15 );
      }
      v18 = *(_QWORD **)(v14 + 8);
      v14 = (__int64)(v18 - 1);
    }
    while ( v11 != v18 );
    v19 = v11 == (_QWORD *)*v11;
    while ( 1 )
    {
      if ( v19 )
        goto LABEL_57;
LABEL_38:
      v20 = *(_DWORD *)(v13 + 24);
      v21 = 0;
      if ( v20 )
        break;
LABEL_56:
      v26 = *(_QWORD **)(v13 + 8);
      v19 = v11 == v26;
      v13 = (__int64)(v26 - 1);
    }
    v22 = v13 + 72;
    while ( 1 )
    {
      v23 = *(_QWORD *)v22;
      if ( *(char *)(*(_QWORD *)v22 + 2LL) >= 0 )
        v24 = *((_WORD *)a1 + 1101);
      else
        v24 = *((unsigned __int8 *)a1 + 2196);
      if ( (*(_BYTE *)(v23 + 3) & 3) != 0 )
      {
        if ( (*(_BYTE *)(v23 + 3) & 3) == 1 )
        {
          if ( v24 > 125 * (unsigned int)*(unsigned __int8 *)(v23 + 6) )
            goto LABEL_8;
          v25 = 1;
          goto LABEL_53;
        }
        if ( (*(_BYTE *)(v23 + 3) & 3u) - 2 < 2 )
        {
LABEL_52:
          v25 = 5 * v24;
          goto LABEL_53;
        }
        v25 = 0;
      }
      else
      {
        if ( !v12 )
          goto LABEL_52;
        v25 = 5;
      }
LABEL_53:
      if ( v10 > v25 )
        v25 = v10;
      ++v21;
      v22 += 72LL;
      v10 = v25;
      if ( v21 >= v20 )
        goto LABEL_56;
    }
  }
LABEL_57:
  v3 = 127;
  if ( (unsigned __int8)v10 < 0x7Fu )
    v3 = v10;
LABEL_10:
  result = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x10000000) != 0 )
  {
    result = *((unsigned int *)a1 + 408);
    if ( (result & 2) != 0 )
    {
      result = v3;
      if ( v3 )
        result = 255LL;
      v3 = result;
    }
  }
  *((_BYTE *)a1 + 2214) = v3;
  return result;
}
