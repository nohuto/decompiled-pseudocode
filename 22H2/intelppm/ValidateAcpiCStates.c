/*
 * XREFs of ValidateAcpiCStates @ 0x1C0022558
 * Callers:
 *     InitAcpi2CStates @ 0x1C00224DC (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0009DB8 (WPP_RECORDER_SF_ddd.c)
 *     IsValidAcpiGenericAddress @ 0x1C00228FC (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateAcpiCStates(_DWORD *a1)
{
  __int64 v1; // r9
  _DWORD *v2; // rdx
  unsigned int v3; // r11d
  __int64 v4; // r8
  char *v5; // r10
  __int64 v6; // rax
  unsigned int v7; // ebx
  _BYTE *v8; // r10
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 v16; // r9
  int v17; // [rsp+20h] [rbp-28h]

  v1 = 0LL;
  v2 = a1;
  if ( !a1 )
    goto LABEL_29;
  v3 = *a1;
  v4 = 1LL;
  if ( *a1 > 1u )
  {
    v5 = (char *)a1 + 38;
    do
    {
      v6 = (unsigned int)(v4 - 1);
      if ( (unsigned __int8)*(v5 - 2) < LOBYTE(a1[5 * v6 + 4])
        || *(_WORD *)v5 < HIWORD(a1[5 * v6 + 4])
        || *(_DWORD *)(v5 + 2) > a1[5 * v6 + 5] )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a1, v4, 0x19u, v17);
        goto LABEL_29;
      }
      v4 = (unsigned int)(v4 + 1);
      v5 += 20;
    }
    while ( (unsigned int)v4 < v3 );
  }
  v7 = 0;
  if ( v3 )
  {
    v8 = a1 + 4;
    do
    {
      if ( *(v8 - 12) != 127 )
      {
        switch ( *v8 )
        {
          case 0:
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_29;
            v16 = 28;
LABEL_28:
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              v16,
              (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids);
LABEL_29:
            LODWORD(v1) = -1073741823;
            return (unsigned int)v1;
          case 1:
            goto LABEL_29;
          case 2:
            if ( !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001CE8C, v2, v4, v1) )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_29;
              v16 = 26;
              goto LABEL_28;
            }
            break;
          default:
            if ( !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001CEA4, v2, v4, v1)
              || !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001CE74, v10, v11, v12)
              || !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001CE8C, v13, v14, v15) )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_29;
              v16 = 27;
              goto LABEL_28;
            }
            break;
        }
      }
      ++v7;
      v8 += 20;
    }
    while ( v7 < v3 );
  }
  return (unsigned int)v1;
}
