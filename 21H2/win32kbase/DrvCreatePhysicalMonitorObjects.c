/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x1C00BFAC0
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00BFA30 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C001CE40 (UpdateMonitorDevices.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C00B01DC (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B0224 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00BFD68 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C013FFC8 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        enum _MODE a2,
        int a3,
        _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a4,
        unsigned int a5,
        unsigned int *a6,
        _QWORD *Address)
{
  __int64 v7; // rsi
  __int64 v8; // r13
  _QWORD *v11; // rax
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  _QWORD *v14; // rsi
  __int64 i; // rdx
  size_t v16; // rcx
  signed int DeviceFromNameAndValidateDevice; // ebx
  struct tagGRAPHICS_DEVICE *v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // r12
  unsigned __int64 v23; // rax
  _QWORD *v24; // r15
  unsigned int *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 j; // rdi
  int v31; // eax
  __int64 v32; // rax
  unsigned int v33; // [rsp+30h] [rbp-68h]
  int v34; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-60h]
  int v36; // [rsp+3Ch] [rbp-5Ch]
  int v37; // [rsp+40h] [rbp-58h]
  struct tagGRAPHICS_DEVICE *v38; // [rsp+48h] [rbp-50h] BYREF
  __int64 v39; // [rsp+50h] [rbp-48h]
  _QWORD *v40; // [rsp+58h] [rbp-40h]
  unsigned int v41; // [rsp+A0h] [rbp+8h] BYREF
  int v42; // [rsp+B0h] [rbp+18h]
  _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v43; // [rsp+B8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v7 = a4;
  v8 = a3;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1);
  v11[3] = a1;
  v11[4] = v8;
  v11[5] = v7;
  v12 = a5;
  v39 = a5;
  v11[6] = a5;
  WdLogEvent5_WdEvent(v11);
  v13 = 0;
  v35 = 0;
  v14 = 0LL;
  UpdateMonitorDevices();
  v38 = 0LL;
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, a2, (wchar_t **)&v38);
  if ( DeviceFromNameAndValidateDevice < 0 )
    goto LABEL_26;
  v41 = 0;
  v18 = v38;
  DeviceFromNameAndValidateDevice = DrvGetNumberOfPhysicalMonitors(v38, &v41);
  if ( DeviceFromNameAndValidateDevice < 0 )
    goto LABEL_26;
  if ( v12 < v41 )
  {
    DeviceFromNameAndValidateDevice = -1071774234;
  }
  else
  {
    v19 = 8LL * v41;
    v16 = 0xFFFFFFFFLL;
    if ( v19 <= 0xFFFFFFFF )
      v16 = (unsigned int)v19;
    DeviceFromNameAndValidateDevice = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v19 > 0xFFFFFFFF )
    {
LABEL_26:
      if ( DeviceFromNameAndValidateDevice >= 0 )
      {
        Win32FreePool((__int64)v14);
        v28 = WdLogNewEntry5_WdTrace(v27, v26);
        WdLogEvent5_WdTrace(v28);
        return 0LL;
      }
    }
    else
    {
      v14 = PALLOCMEM2(v16, 1986291527LL, 1);
      v40 = v14;
      if ( v14 )
      {
        i = 0LL;
        v33 = 0;
        v20 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v20 >= *((_DWORD *)v18 + 54) )
          {
            v23 = 8 * v39;
            i = 0xFFFFFFFFLL;
            v16 = 0xFFFFFFFFLL;
            if ( (unsigned __int64)(8 * v39) <= 0xFFFFFFFF )
              v16 = (unsigned int)v23;
            DeviceFromNameAndValidateDevice = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( v23 <= 0xFFFFFFFF )
            {
              v24 = Address;
              ProbeForWrite(Address, (unsigned int)v16, 8u);
              v25 = a6;
              ProbeForWrite(a6, 4uLL, 4u);
              if ( v13 > a5 )
              {
                DeviceFromNameAndValidateDevice = -1071774234;
                v37 = -1071774234;
              }
              else
              {
                for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                {
                  v36 = i;
                  if ( (unsigned int)i >= v13 )
                    break;
                  v24[i] = v14[i];
                }
                *v25 = v13;
              }
            }
            goto LABEL_26;
          }
          v21 = 5 * v20;
          v22 = *((_QWORD *)v18 + 28);
          if ( (*(_DWORD *)(v22 + 20 * v20) & 1) != 0 )
          {
            if ( v13 == v41 )
              goto LABEL_41;
            if ( (_DWORD)v8 )
            {
              if ( (_DWORD)v8 != 1 )
              {
LABEL_41:
                DeviceFromNameAndValidateDevice = -1071774233;
                goto LABEL_42;
              }
              if ( qword_1C0256410 )
              {
                DeviceFromNameAndValidateDevice = qword_1C0256410();
                i = v33;
              }
              else
              {
                DeviceFromNameAndValidateDevice = -1073741637;
              }
              if ( DeviceFromNameAndValidateDevice < 0 )
                goto LABEL_42;
              DeviceFromNameAndValidateDevice = qword_1C0256418
                                              ? qword_1C0256418(
                                                  v22 + 4 * (v21 + 2),
                                                  *(unsigned int *)(v22 + 20 * v20 + 4),
                                                  &v14[(unsigned int)i])
                                              : -1073741637;
              if ( DeviceFromNameAndValidateDevice < 0 )
                goto LABEL_42;
LABEL_15:
              i = ++v33;
              v35 = ++v13;
              goto LABEL_16;
            }
            v34 = 0;
            DeviceFromNameAndValidateDevice = OPMCreateProtectedOutput(
                                                v43,
                                                (struct _LUID *)(v22 + 4 * (v21 + 2)),
                                                *(_DWORD *)(v22 + 20 * v20 + 4),
                                                (void **)&v14[(unsigned int)i],
                                                &v34);
            if ( DeviceFromNameAndValidateDevice < 0 )
              goto LABEL_26;
            if ( !v34 )
              goto LABEL_15;
            i = v33;
          }
LABEL_16:
          v20 = (unsigned int)(v20 + 1);
          v18 = v38;
        }
      }
      DeviceFromNameAndValidateDevice = -1073741801;
    }
  }
LABEL_42:
  if ( v14 )
  {
    if ( v13 )
    {
      for ( j = 0LL; (unsigned int)j < v13; j = (unsigned int)(j + 1) )
      {
        OPMDestroyProtectedOutput((void *)v14[j]);
        if ( (_DWORD)v8 )
        {
          if ( (_DWORD)v8 == 1 )
          {
            if ( qword_1C0256420 )
              v31 = qword_1C0256420();
            else
              v31 = -1073741637;
            if ( v31 >= 0 )
            {
              if ( qword_1C0256428 )
                qword_1C0256428(v14[j]);
            }
          }
        }
        else
        {
          OPMDestroyProtectedOutput((void *)v14[j]);
        }
      }
    }
    Win32FreePool((__int64)v14);
  }
  v32 = WdLogNewEntry5_WdTrace(v16, i);
  *(_QWORD *)(v32 + 24) = DeviceFromNameAndValidateDevice;
  WdLogEvent5_WdTrace(v32);
  return (unsigned int)DeviceFromNameAndValidateDevice;
}
