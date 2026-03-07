__int64 __fastcall PopAdaptiveGetConsoleSessionState(
        unsigned int a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        _DWORD *a5)
{
  char v5; // r15
  unsigned int v8; // edi
  char IsEnabled; // al
  int v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // ebx
  int *v13; // r14
  unsigned int v14; // ebp
  unsigned int i; // r15d
  int v16; // esi
  unsigned int v17; // eax
  int v18; // eax
  char *v20; // rsi
  unsigned int j; // r14d
  bool v22; // cc
  unsigned __int64 v23; // r10
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // eax
  int v28; // [rsp+20h] [rbp-48h] BYREF
  int v29; // [rsp+24h] [rbp-44h]
  char v31; // [rsp+78h] [rbp+10h]

  v5 = 0;
  v31 = 0;
  v29 = PopInputTimeout;
  v8 = 3;
  IsEnabled = TtmIsEnabled();
  v10 = *((_DWORD *)a2 + 6);
  v11 = 0;
  if ( IsEnabled )
  {
    v12 = PopDisplayTimeout;
    v14 = 0;
    *a4 = 256;
    v29 = 0;
    v28 = v12;
    v8 = v10 == 0 ? 2 : 0;
    *a5 = 258;
    goto LABEL_18;
  }
  if ( v10 )
  {
    if ( !byte_140C398C1
      || byte_140C398C2
      || (v12 = PopAdaptiveLockConsoleTimeout,
          v22 = PopAdaptiveLockConsoleTimeout <= (unsigned int)PopDisplayTimeout,
          v28 = PopAdaptiveLockConsoleTimeout,
          *a4 = 257,
          !v22)
      && !PopEnforceConsoleLockScreenTimeout )
    {
      v12 = PopDisplayTimeout;
      v28 = PopDisplayTimeout;
      *a4 = 256;
    }
    v13 = &dword_140C398F4;
    v14 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( *((_BYTE *)v13 - 20) != (_BYTE)v11 )
      {
        v23 = *(_QWORD *)(v13 - 3);
        if ( v23 >= a2[1] )
        {
          v24 = (unsigned int)*v13;
          v31 = 1;
          if ( (_DWORD)v24 )
          {
            v25 = PopAdaptiveCalculateInputRelativeTimeout(v23, v24, *a2);
            if ( !v14 || v25 < v14 )
            {
              v14 = v25;
              *a5 = i;
            }
          }
          v26 = (unsigned int)*(v13 - 1);
          if ( (_DWORD)v26 )
          {
            v27 = PopAdaptiveCalculateInputRelativeTimeout(v23, v26, *a2);
            if ( !v12 || v27 < v12 )
            {
              v12 = v27;
              *a4 = i;
            }
            v8 = 2;
          }
        }
        else
        {
          PopAdaptiveConsoleSessionOverrideClear(i, 1LL);
          v11 = 0;
        }
      }
      v13 += 6;
    }
    v28 = v12;
    v16 = 256;
    if ( v8 != 3 )
      goto LABEL_12;
    if ( *a2 > (unsigned __int64)qword_140C398D0 )
    {
      if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                            - *a2)
         / 0x3E8 < (unsigned int)PopInputTimeout
        || !PopInputTimeout )
      {
        v12 = v28;
        v8 = v11;
        goto LABEL_12;
      }
      v12 = v28;
    }
    v8 = 2;
    v31 = 1;
LABEL_12:
    v17 = PopAdaptiveDimTimeout;
    if ( PopAdaptiveDimTimeout )
    {
      if ( PopAdaptiveManualDimTimeout == v11 )
        v17 = v12 > 0x3C ? v12 - 15 : v11;
      else
        v16 = 258;
      if ( v17 && (!v14 || v17 < v14) )
      {
        v14 = v17;
        *a5 = v16;
      }
    }
    v5 = v31;
    goto LABEL_18;
  }
  v14 = 0;
  v12 = dword_140C398C4;
  v8 = 2;
  *a4 = 256;
  v28 = v12;
  *a5 = 258;
  if ( qword_140C398D0 != a2[2] )
  {
    qword_140C398D0 = a2[2];
    v20 = &byte_140C398E0;
    for ( j = 0; j < 2; ++j )
    {
      if ( *v20 && *((_QWORD *)v20 + 1) <= a2[2] )
      {
        PopAdaptiveConsoleSessionOverrideClear(j, 0LL);
        v11 = 0;
      }
      v20 += 24;
    }
  }
LABEL_18:
  dword_140C398C4 = v12;
  qword_140C398C8 = *a2;
  v18 = v29;
  *(_DWORD *)a3 = v12;
  if ( v8 )
    v18 = v11;
  *(_DWORD *)(a3 + 4) = v14;
  *(_BYTE *)(a3 + 12) = v5;
  *(_DWORD *)(a3 + 8) = v18;
  PopSetSessionUserStatus(a1, v8);
  return PopSetPowerSettingValueAcDc(&GUID_CONSOLE_VIDEO_TIMEOUT, 4u, &v28);
}
