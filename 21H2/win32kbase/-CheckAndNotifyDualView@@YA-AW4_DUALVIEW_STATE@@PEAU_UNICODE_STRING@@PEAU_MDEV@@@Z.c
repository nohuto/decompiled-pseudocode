/*
 * XREFs of ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0074C78
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C00719F0 (DrvGetDeviceFromName.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0073504 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00C2588 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CheckAndNotifyDualView(const UNICODE_STRING *a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r14d
  wchar_t *v5; // r9
  int v7; // r15d
  bool v8; // zf
  int v9; // eax
  unsigned int v10; // r8d
  PVOID v11; // rbx
  __int64 v12; // rdx
  __int64 Pool2; // rdi
  wchar_t *v14; // rsi
  unsigned int v15; // ebp
  unsigned int *v16; // rbx
  __int16 v17; // ax
  int v18; // edx
  unsigned int v19; // eax
  __int64 *v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // edi
  __int64 v29; // rax
  char v30; // si
  wchar_t *i; // rax
  int v32; // ecx
  wchar_t *DeviceFromName; // rax
  struct tagGRAPHICS_DEVICE *v34; // r15
  __int64 v35; // rcx
  wchar_t **v36; // rdx
  unsigned int *v37; // rsi
  __int64 v38; // r12
  unsigned int v39[4]; // [rsp+20h] [rbp-E8h] BYREF
  PVOID BackTrace[27]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v41; // [rsp+120h] [rbp+18h] BYREF
  int v42; // [rsp+128h] [rbp+20h]

  v39[0] = 0;
  v2 = 0;
  v41 = 0;
  v3 = 0;
  v42 = 0;
  v5 = gpGraphicsDeviceList;
  v7 = 1;
  if ( !gpGraphicsDeviceList )
    return 0LL;
  do
  {
    v8 = (*((_DWORD *)v5 + 40) & 0x20800000) == 0;
    v9 = v2 + 1;
    v5 = (wchar_t *)*((_QWORD *)v5 + 16);
    if ( v8 )
      v9 = v2;
    v2 = v9;
  }
  while ( v5 );
  if ( !v9 )
    return 0LL;
  v10 = 16 * v9;
  if ( !(16 * v9) )
    return 3LL;
  v11 = gpLeakTrackingAllocator;
  v12 = v10;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) != 0x73726447
    || (v29 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_8:
    Pool2 = ExAllocatePool2(260LL, v10);
    goto LABEL_9;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v29) != 1936876615 )
  {
    if ( ++v29 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_8;
  }
  v30 = 0;
  if ( v10 < 0x1000uLL || (v10 & 0xFFF) != 0 )
  {
    v30 = 1;
    v12 = v10 + 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v12);
  if ( !Pool2 )
    goto LABEL_60;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v30 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v11,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_9;
    }
    goto LABEL_59;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v11,
                           Pool2,
                           BackTrace) )
  {
LABEL_59:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_60:
    Pool2 = 0LL;
  }
LABEL_9:
  if ( !Pool2 )
    return 3LL;
  v14 = gpGraphicsDeviceList;
  v15 = 0;
  v16 = (unsigned int *)Pool2;
  if ( gpGraphicsDeviceList )
  {
    do
    {
      v17 = -1;
      if ( !gForceDisconnect )
        v17 = gProtocolType;
      if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)v14, v17, v39, &v41) )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (void *)Pool2);
        return 3LL;
      }
      v18 = 0;
      if ( v41 )
        v7 = 0;
      if ( a2 )
      {
        v19 = *(_DWORD *)(a2 + 20);
        if ( v19 )
        {
          v20 = (__int64 *)(a2 + 40);
          v21 = v19;
          do
          {
            v22 = *v20;
            v20 += 7;
            if ( *(wchar_t **)(v22 + 2552) == v14 )
              v18 = 1;
            --v21;
          }
          while ( v21 );
        }
        if ( !v41 || (v23 = 1, v18) )
          v23 = 0;
        v42 |= v23;
      }
      if ( (*((_DWORD *)v14 + 40) & 0x2800008) == 0x800000 )
      {
        v24 = 2LL * v15;
        *(_QWORD *)(Pool2 + 8 * v24) = v14;
        *(_DWORD *)(Pool2 + 8 * v24 + 12) = v41 != 0;
        ++v15;
        *(_DWORD *)(Pool2 + 8 * v24 + 8) = v18 != 0;
      }
      v14 = (wchar_t *)*((_QWORD *)v14 + 16);
    }
    while ( v14 );
    if ( v7 )
      goto LABEL_65;
  }
  else
  {
LABEL_65:
    for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
    {
      v32 = *((_DWORD *)i + 40);
      if ( (v32 & 0x2000008) == 0 )
      {
        if ( (v32 & 0x800000) != 0 )
          *(_DWORD *)(Pool2 + 12) = 1;
        break;
      }
    }
  }
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
    v34 = (struct tagGRAPHICS_DEVICE *)DeviceFromName;
    if ( DeviceFromName )
    {
      v35 = 0LL;
      if ( v15 )
      {
        v36 = (wchar_t **)Pool2;
        while ( DeviceFromName != *v36 )
        {
          v35 = (unsigned int)(v35 + 1);
          v36 += 2;
          if ( (unsigned int)v35 >= v15 )
            goto LABEL_36;
        }
        if ( *(_DWORD *)(Pool2 + 16 * v35 + 8) != *(_DWORD *)(Pool2 + 16 * v35 + 12) || !a2 )
        {
          v3 = 1;
          v27 = 3;
          if ( a2 )
          {
            v37 = v16 + 2;
            v38 = v15;
            do
            {
              DrvUpdateAttachFlag(v34, *v37);
              v37 += 4;
              --v38;
            }
            while ( v38 );
          }
          goto LABEL_37;
        }
      }
    }
    goto LABEL_36;
  }
  if ( !v15 )
    goto LABEL_36;
  v25 = (_DWORD *)(Pool2 + 8);
  v26 = v15;
  do
  {
    if ( *v25 != v25[1] || !a2 )
      v3 = 1;
    v25 += 4;
    --v26;
  }
  while ( v26 );
  if ( !v3 )
  {
LABEL_36:
    v27 = 0;
    goto LABEL_37;
  }
  v27 = 1;
LABEL_37:
  if ( v15 )
  {
    if ( v3 || (v27 = 2, v42) )
      v27 = 1;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    v16);
  return v27;
}
