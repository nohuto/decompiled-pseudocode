/*
 * XREFs of IcCheckIrqConflict @ 0x1C009ECDC
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C009B1A8 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     IcIsActiveBothPrimaryInterrupt @ 0x1C009F3F0 (IcIsActiveBothPrimaryInterrupt.c)
 */

__int64 __fastcall IcCheckIrqConflict(unsigned int a1, int a2, unsigned __int8 a3, _BYTE *a4)
{
  __int64 v4; // r10
  __int64 *v6; // rdx
  int v9; // ebx
  char v11; // di
  __int64 v12; // r8
  char v13; // di
  unsigned int v14; // r9d
  _DWORD *v15; // rax
  unsigned int v16; // r8d
  _DWORD *v17; // rax
  __int64 v18; // r8
  unsigned int v19; // r9d
  __int16 v20; // r11
  int v21; // eax
  int v22; // r9d
  char IsActiveBothPrimaryInterrupt; // al
  unsigned int v24; // r8d
  __int64 v25; // r10
  __int16 v26; // r11
  int v27; // r9d
  int v28; // r9d
  int v29; // eax

  v4 = IcListHead;
  v6 = &IcListHead;
  if ( &IcListHead == (__int64 *)IcListHead )
  {
LABEL_6:
    *a4 = 1;
    return 3221226021LL;
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)(v4 + 28);
    if ( v9 >= 0 && a1 >= *(_DWORD *)(v4 + 16) && a1 <= *(_DWORD *)(v4 + 20) )
      break;
    v4 = *(_QWORD *)v4;
    if ( &IcListHead == (__int64 *)v4 )
      goto LABEL_6;
  }
  v11 = (a3 >> 1) & ((v9 & 4) == 0);
  v12 = IcListHead;
  v13 = v11 & 1;
  while ( 1 )
  {
    if ( &IcListHead == (__int64 *)v12 )
      goto LABEL_17;
    if ( *(int *)(v12 + 28) >= 0 && v4 != v12 )
    {
      v14 = 0;
      if ( *(_DWORD *)(v12 + 20) - *(_DWORD *)(v12 + 16) != -1 )
        break;
    }
LABEL_15:
    v12 = *(_QWORD *)v12;
  }
  v15 = (_DWORD *)(v12 + 140);
  while ( !*(v15 - 26) || *v15 != a2 )
  {
    ++v14;
    v15 += 50;
    if ( v14 >= *(_DWORD *)(v12 + 20) - *(_DWORD *)(v12 + 16) + 1 )
      goto LABEL_15;
  }
  if ( v13 || (unsigned __int8)IcIsActiveBothPrimaryInterrupt(v12, v14) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_56;
    v22 = 10;
    goto LABEL_55;
  }
  v21 = *(_DWORD *)(200LL * v19 + v18 + 152);
  if ( !v21 && v20 || v21 == 1 && !v20 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_56;
    v22 = 11;
    goto LABEL_55;
  }
LABEL_17:
  v16 = 0;
  if ( *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) == -1 )
    goto LABEL_22;
  v17 = (_DWORD *)(v4 + 140);
  while ( !*(v17 - 26) || *v17 != a2 )
  {
    ++v16;
    v17 += 50;
    if ( v16 >= *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) + 1 )
      goto LABEL_22;
  }
  IsActiveBothPrimaryInterrupt = IcIsActiveBothPrimaryInterrupt(v4, v16);
  if ( a1 == v27 + v24 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = 12;
LABEL_50:
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        20,
        v28,
        (__int64)&WPP_929e7a6a75053a8d29f65faa15fdd808_Traceguids);
      goto LABEL_22;
    }
    goto LABEL_22;
  }
  if ( !v13 && !IsActiveBothPrimaryInterrupt )
  {
    v29 = *(_DWORD *)(200LL * v24 + v25 + 152);
    if ( !v29 && v26 )
      goto LABEL_42;
    if ( !v26 )
    {
      if ( v29 == 1 )
      {
LABEL_42:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_56;
        v22 = 14;
        goto LABEL_55;
      }
      if ( (v9 & 2) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = 15;
          goto LABEL_50;
        }
LABEL_22:
        *a4 = 0;
        return 0LL;
      }
    }
    if ( (v26 & 1) == 0 || (v9 & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_56;
      v22 = 17;
      goto LABEL_55;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = 16;
      goto LABEL_50;
    }
    goto LABEL_22;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_56;
  v22 = 13;
LABEL_55:
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v6,
    20,
    v22,
    (__int64)&WPP_929e7a6a75053a8d29f65faa15fdd808_Traceguids);
LABEL_56:
  *a4 = 1;
  return 0LL;
}
