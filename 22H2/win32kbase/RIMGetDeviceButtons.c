/*
 * XREFs of RIMGetDeviceButtons @ 0x1C015D900
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015BF5C (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C0161CFC (RIMPopulatePointerDevice.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMPbuttonToCursor @ 0x1C015F300 (RIMPbuttonToCursor.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C01634F4 (rimHidP_GetSpecificButtonCaps.c)
 *     RIMValidatePTPButtons @ 0x1C0181C0C (RIMValidatePTPButtons.c)
 */

__int64 __fastcall RIMGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v10; // r15d
  unsigned __int16 v11; // si
  __int64 v12; // r14
  int SpecificButtonCaps; // edi
  unsigned int v14; // edx
  void *v15; // rax
  unsigned int j; // edx
  __int16 v17; // ax
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // r10d
  void *v21; // rax
  bool v22; // zf
  unsigned int i; // r8d
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  _DWORD v30[4]; // [rsp+40h] [rbp-10h]
  int v31; // [rsp+A8h] [rbp+58h]

  v5 = (unsigned __int16)a4[23];
  a5 = (unsigned __int16)a4[23];
  v10 = 0;
  v11 = 0;
  v31 = 0;
  if ( *(_DWORD *)(a2 + 984) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2824);
    v5 = a5;
  }
  if ( *a4 != 5 )
    v11 = *(_WORD *)(a2 + 728);
  if ( (_DWORD)v5 )
    v12 = Win32AllocPool(72 * v5, 0x65687352u);
  else
    v12 = 0LL;
  if ( v12 )
  {
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0, 0, v11, 0, v12, (__int64)&a5, a3);
    if ( SpecificButtonCaps < 0 )
    {
LABEL_40:
      Win32FreePool(v12);
      goto LABEL_42;
    }
    v14 = a5;
    if ( !a5 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2848);
      v14 = a5;
    }
    if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
    {
      v21 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a2 + 720), 2019849042LL);
      *(_QWORD *)(a2 + 968) = v21;
      if ( v21 )
      {
        v22 = *(_DWORD *)(a2 + 24) == 7;
        *(_DWORD *)(a2 + 980) = *(_DWORD *)(a2 + 720);
        if ( v22 )
          SpecificButtonCaps = RIMValidatePTPButtons(v12, a5);
        if ( SpecificButtonCaps >= 0 )
        {
          for ( i = 0; i < *(_DWORD *)(a2 + 980); *(_DWORD *)(*(_QWORD *)(a2 + 968) + 4 * v25) = 1 )
          {
            ++*(_DWORD *)(a1 + 528);
            v24 = i++;
            v25 = 3 * v24;
            *(_DWORD *)(*(_QWORD *)(a2 + 968) + 4 * v25 + 4) = *(_DWORD *)(a1 + 528);
          }
        }
        goto LABEL_39;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 980) = 0;
      v15 = Win32AllocPoolZInit(12LL * v14, 2019849042LL);
      *(_QWORD *)(a2 + 968) = v15;
      if ( v15 )
      {
        for ( j = 0; j < a5; ++j )
        {
          if ( v10 >= 2 )
            break;
          if ( *(_WORD *)(v12 + 72LL * j) == 13 )
          {
            v17 = *(_WORD *)(v12 + 72LL * j + 56);
            if ( v17 == 66 )
            {
              v31 = 1;
            }
            else if ( v17 != 69 && v17 != 60 || v10 && *(_WORD *)(v12 + 72LL * (v10 - 1) + 56) != 66 )
            {
              continue;
            }
            v18 = ++*(_DWORD *)(a1 + 528);
            v19 = v10++;
            ++*(_DWORD *)(a2 + 980);
            v30[v19] = v18;
          }
        }
        if ( *(_DWORD *)(a2 + 980) > a5 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2888);
        if ( v31 )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 968) + 4LL) = v30[0];
          **(_DWORD **)(a2 + 968) = RIMPbuttonToCursor(66LL);
          if ( v10 > 1 )
          {
            *(_DWORD *)(*(_QWORD *)(a2 + 968) + 16LL) = v30[1];
            *(_DWORD *)(*(_QWORD *)(a2 + 968) + 12LL) = RIMPbuttonToCursor(v20);
          }
          goto LABEL_39;
        }
      }
    }
    SpecificButtonCaps = -1073741668;
LABEL_39:
    v26 = a5;
    *(_DWORD *)(a2 + 336) += a5;
    *(_DWORD *)(a2 + 984) = v26;
    goto LABEL_40;
  }
  SpecificButtonCaps = -1073741668;
LABEL_42:
  v27 = *(_DWORD *)(a2 + 984);
  if ( !v27 )
    SpecificButtonCaps = -1073741668;
  if ( SpecificButtonCaps != -1073741668 )
  {
    v28 = Win32AllocPool(2LL * v27, 0x65687352u);
    *(_QWORD *)(a2 + 768) = v28;
    if ( !v28 )
      return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}
