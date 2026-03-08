/*
 * XREFs of AcpiConvertObjDataToMethodArguments @ 0x1C0036EF4
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C0037EA0 (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002F780 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002F884 (ACPIIoctlCalculateOutputBufferV1.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00380D0 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_PD @ 0x1C0038434 (WPP_RECORDER_SF_PD.c)
 */

__int64 __fastcall AcpiConvertObjDataToMethodArguments(unsigned int a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  unsigned int v4; // r14d
  __int64 v7; // rbx
  int v9; // ebx
  unsigned int i; // r11d
  __int64 v11; // rsi
  int v12; // edx
  int v13; // r11d
  __int64 v14; // rsi
  __int64 Pool2; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  void *v19; // rbp
  __int64 v20; // r15
  int v21; // edx
  __int64 v22; // rax
  int v24; // [rsp+20h] [rbp-78h]
  __int64 v25[9]; // [rsp+50h] [rbp-48h] BYREF
  int v26; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+10h]

  v27 = a2;
  v4 = 0;
  v7 = a2;
  if ( a1 )
  {
    v25[0] = 0LL;
    v26 = 0;
    for ( i = 0; i < a1; i = v13 + 1 )
    {
      v11 = v7 + 40LL * i;
      v9 = ACPIIoctlCalculateOutputBufferSizeV1(v11, v25, &v26, 1, 0);
      if ( v9 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDD(WPP_GLOBAL_Control->DeviceExtension, v12, 21, 21, v24, v13, a1, *(_WORD *)(v11 + 2), v9);
        return (unsigned int)v9;
      }
      v7 = v27;
    }
    v14 = v25[0];
    Pool2 = ExAllocatePool2(64LL, v25[0], 1315988289LL);
    v19 = (void *)Pool2;
    if ( Pool2 )
    {
      v20 = Pool2;
      if ( a1 )
      {
        while ( 1 )
        {
          v25[0] = v7 + 40LL * v4;
          v9 = ACPIIoctlCalculateOutputBufferV1(v25[0], v20, 1);
          if ( v9 < 0 )
            break;
          v22 = *(unsigned __int16 *)(v20 + 2);
          if ( (unsigned __int16)v22 < 4u )
            v22 = 4LL;
          v7 = v27;
          v20 += v22 + 4;
          if ( ++v4 >= a1 )
            goto LABEL_16;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDD(
            WPP_GLOBAL_Control->DeviceExtension,
            v21,
            19,
            23,
            v24,
            v4,
            a1,
            *(_WORD *)(v25[0] + 2),
            v9);
        ExFreePoolWithTag(v19, 0x4E706341u);
      }
      else
      {
LABEL_16:
        *a3 = v19;
        v9 = 0;
        *a4 = v14;
      }
    }
    else
    {
      v9 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_PD(WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18, v24, v14);
    }
  }
  else
  {
    *a3 = 0LL;
    v9 = 0;
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
