/*
 * XREFs of RIMGetDeviceButtons @ 0x1C0192130
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C018C3A8 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C018E844 (rimHidP_GetSpecificButtonCaps.c)
 *     RIMPbuttonToCursor @ 0x1C0194BF4 (RIMPbuttonToCursor.c)
 *     RIMValidatePTPButtons @ 0x1C01B7C24 (RIMValidatePTPButtons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceButtons(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        _WORD *a4,
        unsigned int a5)
{
  __int64 v5; // rax
  char v6; // si
  unsigned __int16 v10; // r15
  PVOID v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 Pool2; // rbx
  __int64 v15; // rdx
  int SpecificButtonCaps; // edi
  __int64 v17; // r8
  char *v18; // r12
  unsigned int v19; // ecx
  PVOID v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  bool v24; // zf
  unsigned int i; // r8d
  __int64 v26; // rax
  __int64 v27; // rdx
  char v28; // r15
  _DWORD *v29; // r15
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int16 v36; // ax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rax
  PVOID v43; // rsi
  unsigned __int64 v44; // rdx
  int v45; // r15d
  __int64 v46; // rax
  __int64 v47; // rbx
  char v49; // di
  PVOID BackTrace[20]; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v51[20]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v52[20]; // [rsp+180h] [rbp+80h] BYREF
  PVOID v53[26]; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v55; // [rsp+308h] [rbp+208h]
  int v56; // [rsp+30Ch] [rbp+20Ch]
  int v57; // [rsp+318h] [rbp+218h]

  v5 = (unsigned __int16)a4[23];
  v6 = 0;
  a5 = (unsigned __int16)a4[23];
  v10 = 0;
  v55 = 0;
  v57 = 0;
  if ( *(_DWORD *)(a2 + 1040) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v5 = a5;
  }
  if ( *a4 != 5 )
    v10 = *(_WORD *)(a2 + 776);
  if ( !(_DWORD)v5 )
    goto LABEL_87;
  v11 = gpLeakTrackingAllocator;
  v12 = 72 * v5;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65687352) != 0x65687352
    || (v13 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_10:
    Pool2 = ExAllocatePool2(260LL, v12);
    goto LABEL_11;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1701344082 )
  {
    if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_10;
  }
  if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
  {
    v6 = 1;
    v12 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v12);
  if ( !Pool2 )
  {
    v6 = 0;
LABEL_32:
    Pool2 = 0LL;
    goto LABEL_11;
  }
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v6 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    v6 = 0;
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v11,
           (const void *)Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_11;
    }
LABEL_38:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_32;
  }
  v6 = 0;
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v11,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_38;
LABEL_11:
  if ( Pool2 )
  {
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(
                           HidP_Input,
                           0,
                           v10,
                           0,
                           (struct _HIDP_BUTTON_CAPS *)Pool2,
                           (unsigned __int16 *)&a5,
                           a3);
    v18 = (char *)Pool2;
    if ( SpecificButtonCaps < 0 )
    {
LABEL_86:
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v18);
      goto LABEL_88;
    }
    v19 = a5;
    if ( !a5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v15, v17);
      v19 = a5;
    }
    if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
    {
      v20 = gpLeakTrackingAllocator;
      v21 = 12LL * *(unsigned int *)(a2 + 768);
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78647352) != 0x78647352
        || (v22 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
LABEL_20:
        v23 = ExAllocatePool2(260LL, v21);
        goto LABEL_21;
      }
      while ( *((_DWORD *)gpLeakTrackingAllocator + v22) != 2019849042 )
      {
        if ( ++v22 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_20;
      }
      v28 = 0;
      if ( v21 < 0x1000 || (v21 & 0xFFF) != 0 )
      {
        v28 = 1;
        v21 += 16LL;
      }
      v23 = ExAllocatePool2(260LL, v21);
      if ( !v23 )
        goto LABEL_43;
      memset(v51, 0, sizeof(v51));
      RtlCaptureStackBackTrace(0, 0x14u, v51, 0LL);
      if ( v28 && (unsigned __int64)(v23 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v20,
               (const void *)v23,
               (struct NSInstrumentation::CBackTrace *)v51) )
        {
          v23 += 16LL;
          goto LABEL_21;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v20,
                  v23,
                  (struct NSInstrumentation::CBackTrace *)v51) )
      {
LABEL_21:
        *(_QWORD *)(a2 + 1024) = v23;
        if ( v23 )
        {
          v24 = *(_DWORD *)(a2 + 24) == 7;
          *(_DWORD *)(a2 + 1036) = *(_DWORD *)(a2 + 768);
          if ( !v24 || (SpecificButtonCaps = RIMValidatePTPButtons(v18, a5), SpecificButtonCaps >= 0) )
          {
            for ( i = 0; i < *(_DWORD *)(a2 + 1036); *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 4 * v27) = 1 )
            {
              ++*(_DWORD *)(a1 + 752);
              v26 = i++;
              v27 = 3 * v26;
              *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 4 * v27 + 4) = *(_DWORD *)(a1 + 752);
            }
          }
          goto LABEL_85;
        }
LABEL_84:
        SpecificButtonCaps = -1073741668;
LABEL_85:
        v41 = a5;
        *(_DWORD *)(a2 + 384) += a5;
        *(_DWORD *)(a2 + 1040) = v41;
        goto LABEL_86;
      }
      ExFreePoolWithTag((PVOID)v23, 0);
LABEL_43:
      v23 = 0LL;
      goto LABEL_21;
    }
    v29 = gpLeakTrackingAllocator;
    *(_DWORD *)(a2 + 1036) = 0;
    v30 = 12LL * v19;
    if ( (v29[10] & 0x78647352) == 0x78647352 && (v31 = 0LL, v29[11]) )
    {
      while ( v29[v31] != 2019849042 )
      {
        if ( ++v31 >= (unsigned __int64)(unsigned int)v29[11] )
          goto LABEL_54;
      }
      if ( v30 < 0x1000 || (v30 & 0xFFF) != 0 )
      {
        v6 = 1;
        v30 += 16LL;
      }
      v33 = ExAllocatePool2(260LL, v30);
      if ( v33 )
      {
        memset(v52, 0, sizeof(v52));
        RtlCaptureStackBackTrace(0, 0x14u, v52, 0LL);
        if ( v6 && (unsigned __int64)(v33 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v29,
                 (const void *)v33,
                 (struct NSInstrumentation::CBackTrace *)v52) )
          {
            v33 += 16LL;
            goto LABEL_55;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v29,
                    v33,
                    (struct NSInstrumentation::CBackTrace *)v52) )
        {
          goto LABEL_55;
        }
        ExFreePoolWithTag((PVOID)v33, 0);
      }
      v33 = 0LL;
    }
    else
    {
LABEL_54:
      v33 = ExAllocatePool2(260LL, v30);
    }
LABEL_55:
    *(_QWORD *)(a2 + 1024) = v33;
    if ( !v33 )
      goto LABEL_84;
    v34 = v55;
    v35 = 0LL;
    if ( !a5 )
    {
LABEL_79:
      if ( *(_DWORD *)(a2 + 1036) > a5 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v35, 69LL);
      if ( v57 )
      {
        v38 = *(_QWORD *)(a2 + 1024);
        *(_DWORD *)(v38 + 4) = v55;
        **(_DWORD **)(a2 + 1024) = RIMPbuttonToCursor(66LL, v38, 69LL);
        if ( v34 > 1 )
        {
          v40 = *(_QWORD *)(a2 + 1024);
          *(_DWORD *)(v40 + 16) = v56;
          *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 12LL) = RIMPbuttonToCursor((unsigned int)v39, v40, v39);
        }
        goto LABEL_85;
      }
      goto LABEL_84;
    }
    while ( 1 )
    {
      if ( v34 >= 2 )
        goto LABEL_79;
      v32 = 9LL * (unsigned int)v35;
      if ( *(_WORD *)&v18[72 * (unsigned int)v35] == 13 )
      {
        v36 = *(_WORD *)&v18[72 * (unsigned int)v35 + 56];
        if ( v36 == 66 )
        {
          v57 = 1;
        }
        else if ( v36 != 69 && v36 != 60 || v34 && *(_WORD *)&v18[72 * v34 - 16] != 66 )
        {
          goto LABEL_78;
        }
        v32 = (unsigned int)++*(_DWORD *)(a1 + 752);
        v37 = v34++;
        ++*(_DWORD *)(a2 + 1036);
        *(&v55 + v37) = v32;
      }
LABEL_78:
      v35 = (unsigned int)(v35 + 1);
      if ( (unsigned int)v35 >= a5 )
        goto LABEL_79;
    }
  }
LABEL_87:
  SpecificButtonCaps = -1073741668;
LABEL_88:
  v42 = *(unsigned int *)(a2 + 1040);
  if ( !(_DWORD)v42 )
    return (unsigned int)-1073741668;
  if ( SpecificButtonCaps == -1073741668 )
    return (unsigned int)SpecificButtonCaps;
  v43 = gpLeakTrackingAllocator;
  v44 = 2 * v42;
  v45 = SpecificButtonCaps;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65687352) != 0x65687352
    || (v46 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_95:
    v47 = ExAllocatePool2(260LL, v44);
    goto LABEL_96;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v46) != 1701344082 )
  {
    if ( ++v46 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_95;
  }
  v49 = 0;
  if ( v44 < 0x1000 || (v44 & 0xFFF) != 0 )
  {
    v49 = 1;
    v44 += 16LL;
  }
  v47 = ExAllocatePool2(260LL, v44);
  if ( !v47 )
    goto LABEL_103;
  memset(v53, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, v53, 0LL);
  if ( v49 && (unsigned __int64)(v47 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v43,
           (const void *)v47,
           (struct NSInstrumentation::CBackTrace *)v53) )
    {
      v47 += 16LL;
      goto LABEL_96;
    }
LABEL_109:
    ExFreePoolWithTag((PVOID)v47, 0);
LABEL_103:
    v47 = 0LL;
    goto LABEL_96;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v43,
          v47,
          (struct NSInstrumentation::CBackTrace *)v53) )
    goto LABEL_109;
LABEL_96:
  *(_QWORD *)(a2 + 816) = v47;
  SpecificButtonCaps = v45;
  if ( !v47 )
    return (unsigned int)-1073741668;
  return (unsigned int)SpecificButtonCaps;
}
