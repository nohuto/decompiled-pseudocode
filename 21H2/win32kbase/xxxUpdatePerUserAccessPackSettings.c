/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1C0060150
 * Callers:
 *     <none>
 * Callees:
 *     GetProcessLuid @ 0x1C0018FF0 (GetProcessLuid.c)
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C005F930 (-CalculateMouseTable@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C005FA20 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C005FA40 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C005FA80 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     FastGetProfileIntW @ 0x1C0061160 (FastGetProfileIntW.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01B9570 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01BAF10 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

void __fastcall xxxUpdatePerUserAccessPackSettings(const UNICODE_STRING *a1)
{
  int v2; // ebx
  ULONG v3; // esi
  ULONG v4; // r14d
  ULONG v5; // r15d
  ULONG v6; // r12d
  ULONG v7; // r13d
  ULONG v8; // r8d
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  ULONG v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  ULONG v21; // eax
  int v22; // eax
  void *v23; // rsi
  PVOID v24; // r14
  __int64 Pool2; // rbx
  NTSTATUS v26; // eax
  int v27; // r14d
  int v28; // ecx
  unsigned int v29; // ecx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // eax
  __int64 v34; // rax
  ULONG Value; // [rsp+38h] [rbp-D0h] BYREF
  int v36; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG Length[2]; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  PVOID BackTrace[20]; // [rsp+68h] [rbp-A0h] BYREF
  size_t v41[32]; // [rsp+108h] [rbp+0h] BYREF

  DestinationString = 0LL;
  Value = 0;
  GetProcessLuid(0LL, &DestinationString);
  if ( DestinationString.LowPart != 999 || (v2 = 1, DestinationString.HighPart) )
    v2 = 0;
  FastGetProfileIntW((int)a1, 15, (int)L"Flags", 0, &Value, 0);
  v3 = Value & 1;
  FastGetProfileIntW((int)a1, 14, (int)L"Flags", 0, &Value, 0);
  v4 = Value & 1;
  FastGetProfileIntW((int)a1, 16, (int)L"Flags", 0, &Value, 0);
  v5 = Value & 1;
  FastGetProfileIntW((int)a1, 17, (int)L"Flags", 0, &Value, 0);
  v6 = Value & 1;
  FastGetProfileIntW((int)a1, 27, (int)L"On", 0, &Value, 0);
  Length[1] = Value != 0;
  FastGetProfileIntW((int)a1, 28, (int)L"On", 0, &Value, 0);
  Length[0] = Value != 0;
  FastGetProfileIntW((int)a1, 18, (int)L"Flags", 0, &Value, 0);
  v7 = Value & 1;
  FastGetProfileIntW((int)a1, 29, (int)L"Flags", 0, &Value, 0);
  v8 = Value & 1;
  v36 = v8;
  if ( v2 )
  {
    if ( v3 )
    {
      LODWORD(xmmword_1C0295A4C) = xmmword_1C0295A4C | 1;
      v9 = gdwPUDFlags | 1;
    }
    else
    {
      LODWORD(xmmword_1C0295A4C) = xmmword_1C0295A4C & 0xFFFFFFFE;
      v9 = gdwPUDFlags & 0xFFFFFFFE;
    }
    gdwPUDFlags = v9;
    if ( (dword_1C0295A44 & 1) != 0 && !v3 )
    {
      xxxTurnOffStickyKeys();
      v8 = v36;
    }
    if ( v4 )
    {
      dword_1C0295A44 |= 1u;
      v10 = gdwPUDFlags | 2;
    }
    else
    {
      dword_1C0295A44 &= ~1u;
      v10 = gdwPUDFlags & 0xFFFFFFFD;
    }
    if ( v5 )
    {
      dword_1C0295A24 |= 1u;
      v11 = v10 | 4;
    }
    else
    {
      dword_1C0295A24 &= ~1u;
      v11 = v10 & 0xFFFFFFFB;
    }
    if ( v6 )
    {
      dword_1C0295A0C |= 1u;
      v12 = v11 | 8;
    }
    else
    {
      dword_1C0295A0C &= ~1u;
      v12 = v11 & 0xFFFFFFF7;
    }
    if ( v7 )
    {
      LODWORD(qword_1C0295A14) = qword_1C0295A14 | 1;
      v13 = v12 | 0x10;
    }
    else
    {
      LODWORD(qword_1C0295A14) = qword_1C0295A14 & 0xFFFFFFFE;
      v13 = v12 & 0xFFFFFFEF;
    }
    if ( Length[1] )
    {
      gdwPUDFlags = v13 | 0x20020;
      _InterlockedOr((volatile signed __int32 *)gpsi, 0x80u);
    }
    else
    {
      gdwPUDFlags = v13 & 0xFFFDFFDF;
      _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFF7F);
    }
    if ( Length[0] )
      v14 = gdwPUDFlags | 0x40040;
    else
      v14 = gdwPUDFlags & 0xFFFBFFBF;
    if ( v8 )
    {
      dword_1C02959FC |= 1u;
      v15 = v14 | 0x80;
    }
    else
    {
      dword_1C02959FC &= ~1u;
      v15 = v14 & 0xFFFFFF7F;
    }
    gdwPUDFlags = v15;
    goto LABEL_22;
  }
  if ( (((unsigned __int8)gdwPUDFlags ^ (unsigned __int8)xmmword_1C0295A4C) & 1) == 0 )
  {
    if ( v3 )
      v28 = xmmword_1C0295A4C | 1;
    else
      v28 = xmmword_1C0295A4C & 0xFFFFFFFE;
    LODWORD(xmmword_1C0295A4C) = v28;
  }
  if ( (dword_1C0295A44 & 1) == (((unsigned int)gdwPUDFlags >> 1) & 1) )
  {
    if ( (dword_1C0295A44 & 1) != 0 )
    {
      if ( !v4 )
      {
        xxxTurnOffStickyKeys();
        v8 = v36;
        goto LABEL_67;
      }
    }
    else if ( !v4 )
    {
LABEL_67:
      dword_1C0295A44 &= ~1u;
      goto LABEL_68;
    }
    dword_1C0295A44 |= 1u;
  }
LABEL_68:
  v29 = gdwPUDFlags;
  if ( (((unsigned __int8)dword_1C0295A24 ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 2)) & 1) == 0 )
  {
    if ( v5 )
      v30 = dword_1C0295A24 | 1;
    else
      v30 = dword_1C0295A24 & 0xFFFFFFFE;
    dword_1C0295A24 = v30;
  }
  if ( (((unsigned __int8)dword_1C0295A0C ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 3)) & 1) == 0 )
  {
    if ( v6 )
      v31 = dword_1C0295A0C | 1;
    else
      v31 = dword_1C0295A0C & 0xFFFFFFFE;
    dword_1C0295A0C = v31;
  }
  if ( (((unsigned __int8)qword_1C0295A14 ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 4)) & 1) == 0 )
  {
    if ( v7 )
      v32 = qword_1C0295A14 | 1;
    else
      v32 = qword_1C0295A14 & 0xFFFFFFFE;
    LODWORD(qword_1C0295A14) = v32;
  }
  if ( (((unsigned __int8)gdwPUDFlags ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 12)) & 0x20) == 0 )
  {
    if ( Length[1] )
      v29 = gdwPUDFlags | 0x20000;
    else
      v29 = gdwPUDFlags & 0xFFFDFFFF;
    gdwPUDFlags = v29;
  }
  if ( (((unsigned __int8)v29 ^ (unsigned __int8)(v29 >> 12)) & 0x40) == 0 )
  {
    if ( Length[0] )
      v29 |= 0x40000u;
    else
      v29 &= ~0x40000u;
    gdwPUDFlags = v29;
  }
  if ( (((unsigned __int8)dword_1C02959FC ^ (unsigned __int8)(v29 >> 7)) & 1) == 0 )
  {
    if ( v8 )
      v33 = dword_1C02959FC | 1;
    else
      v33 = dword_1C02959FC & 0xFFFFFFFE;
    dword_1C02959FC = v33;
  }
LABEL_22:
  FastGetProfileIntW((int)a1, 15, (int)L"Flags", 82, &Value, 0);
  if ( (xmmword_1C0295A4C & 1) != 0 )
    v16 = Value | 1;
  else
    v16 = Value & 0xFFFFFFFE;
  Value = v16;
  LODWORD(xmmword_1C0295A4C) = v16;
  FastGetProfileIntW((int)a1, 15, (int)L"DelayBeforeAcceptance", 1000, (PULONG)&xmmword_1C0295A4C + 1, 0);
  FastGetProfileIntW((int)a1, 15, (int)L"AutoRepeatRate", 500, (PULONG)&xmmword_1C0295A4C + 3, 0);
  FastGetProfileIntW((int)a1, 15, (int)L"AutoRepeatDelay", 1000, (PULONG)&xmmword_1C0295A4C + 2, 0);
  FastGetProfileIntW((int)a1, 15, (int)L"BounceTime", 0, &::Value, 0);
  FastGetProfileIntW((int)a1, 19, (int)L"Flags", 2, &dword_1C0298C94, 0);
  FastGetProfileIntW((int)a1, 19, (int)L"FSTextEffect", 0, &dword_1C0298C98, 0);
  FastGetProfileIntW((int)a1, 19, (int)L"WindowsEffect", 0, &dword_1C0298CB0, 0);
  FastGetProfileIntW((int)a1, 20, (int)L"On", 0, &Value, 0);
  if ( Value )
    v17 = gdwPUDFlags | 0x8000;
  else
    v17 = gdwPUDFlags & 0xFFFF7FFF;
  gdwPUDFlags = v17;
  *((_DWORD *)gpsi + 544) = (v17 >> 15) & 1;
  FastGetProfileIntW((int)a1, 14, (int)L"Flags", 466, &Value, 0);
  if ( (dword_1C0295A44 & 1) != 0 )
    v18 = Value | 1;
  else
    v18 = Value & 0xFFFFFFFE;
  Value = v18;
  dword_1C0295A44 = v18;
  FastGetProfileIntW((int)a1, 16, (int)L"Flags", 18, &Value, 0);
  if ( (dword_1C0295A24 & 1) != 0 )
    v19 = Value | 1;
  else
    v19 = Value & 0xFFFFFFFE;
  Value = v19;
  dword_1C0295A24 = v19;
  FastGetProfileIntW((int)a1, 16, (int)L"MaximumSpeed", 40, &dword_1C0295A28, 0);
  FastGetProfileIntW((int)a1, 16, (int)L"TimeToMaximumSpeed", 3000, &dword_1C0295A2C, 0);
  if ( dword_1C0295A28 - 10 > 0x15E )
    dword_1C0295A28 = 40;
  if ( dword_1C0295A2C - 1000 > 0xFA0 )
    dword_1C0295A2C = 3000;
  CalculateMouseTable();
  gbMKMouseMode = ((dword_1C0295A24 & 0x80) != 0) ^ (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)gNumLockVk >> 2))) != 0);
  if ( (dword_1C0295A24 & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  FastGetProfileIntW((int)a1, 17, (int)L"Flags", 18, &Value, 0);
  if ( (dword_1C0295A0C & 1) != 0 )
    v20 = Value | 1;
  else
    v20 = Value & 0xFFFFFFFE;
  Value = v20;
  dword_1C0295A0C = v20;
  FastGetProfileIntW((int)a1, 18, (int)L"Flags", 2, &Value, 0);
  if ( (qword_1C0295A14 & 1) != 0 )
    v21 = Value | 1;
  else
    v21 = Value & 0xFFFFFFFE;
  Value = v21;
  LODWORD(qword_1C0295A14) = v21;
  if ( gpKbdNlsTbl )
  {
    if ( *(_DWORD *)(gpKbdNlsTbl + 16) == 16 && *(_QWORD *)(gpKbdNlsTbl + 24) )
      gpusMouseVKey = *(_QWORD *)(gpKbdNlsTbl + 24);
    if ( (*(_BYTE *)(gpKbdNlsTbl + 2) & 2) != 0 )
    {
      gNumLockVk = 36;
      gOemScrollVk = 21;
    }
  }
  FastGetProfileIntW((int)a1, 18, (int)L"TimeToWait", 300000, (PULONG)&qword_1C0295A14 + 1, 0);
  FastGetProfileIntW((int)a1, 29, (int)L"Flags", 82, &Value, 0);
  if ( (dword_1C02959FC & 1) != 0 )
    v22 = Value | 1;
  else
    v22 = Value & 0xFFFFFFFE;
  Value = v22;
  dword_1C02959FC = v22;
  v36 = gdwPolicyFlags;
  DestinationString_8 = 0LL;
  v23 = OpenCacheKeyEx(a1, 29LL, 131097LL, &v36);
  if ( v23 )
  {
    while ( 1 )
    {
      v24 = gpLeakTrackingAllocator;
      Length[0] = 268;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72707355) != 0x72707355 )
        break;
      v34 = 0LL;
      if ( !*((_DWORD *)gpLeakTrackingAllocator + 11) )
        break;
      while ( *((_DWORD *)gpLeakTrackingAllocator + v34) != 1919972181 )
      {
        if ( ++v34 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_45;
      }
      Pool2 = ExAllocatePool2(261LL, 284LL);
      if ( !Pool2 )
        goto LABEL_51;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                 v24,
                                 Pool2,
                                 BackTrace) )
        {
LABEL_132:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_51;
        }
        Pool2 += 16LL;
        goto LABEL_46;
      }
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v24,
                               Pool2,
                               BackTrace) )
        goto LABEL_132;
LABEL_47:
      RtlInitUnicodeString(&DestinationString_8, L"High Contrast Scheme");
      v26 = ZwQueryValueKey(v23, &DestinationString_8, KeyValuePartialInformation, (PVOID)Pool2, Length[0], Length);
      if ( v26 == -2147483643 || v26 >= 0 )
      {
        v27 = 128;
        if ( *(_DWORD *)(Pool2 + 8) >> 1 < 0x80u )
          v27 = *(_DWORD *)(Pool2 + 8) >> 1;
        if ( *(_DWORD *)(Pool2 + 8) < 2u )
        {
          LOWORD(v41[0]) = 0;
        }
        else
        {
          *(_WORD *)(Pool2 + 2LL * (unsigned int)(v27 - 1) + 12) = 0;
          RtlStringCchCopyW((unsigned __int16 *)v41, 0x80uLL, (size_t *)(Pool2 + 12));
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (void *)Pool2);
        ZwClose(v23);
        if ( v27 )
          RtlStringCchCopyW(&gHighContrastDefaultScheme, 0x80uLL, v41);
        goto LABEL_58;
      }
      if ( !v36 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (void *)Pool2);
LABEL_51:
        ZwClose(v23);
        goto LABEL_58;
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (void *)Pool2);
      ZwClose(v23);
      v23 = OpenCacheKeyEx(a1, 29LL, 131097LL, &v36);
      if ( !v23 )
        goto LABEL_58;
    }
LABEL_45:
    Pool2 = ExAllocatePool2(261LL, 268LL);
LABEL_46:
    if ( !Pool2 )
      goto LABEL_51;
    goto LABEL_47;
  }
LABEL_58:
  gAudioDescription = 12;
  FastGetProfileIntW((int)a1, 48, (int)L"On", 0, &dword_1C02959EC, 0);
  FastGetProfileIntW((int)a1, 48, (int)L"Locale", 0, &dword_1C02959F0, 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
