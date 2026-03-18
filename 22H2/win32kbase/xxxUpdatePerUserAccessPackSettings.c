/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1C00A2650
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     FastGetProfileIntW @ 0x1C0033AC0 (FastGetProfileIntW.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00369B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     OpenCacheKeyEx @ 0x1C00371E0 (OpenCacheKeyEx.c)
 *     GetProcessLuid @ 0x1C0037670 (GetProcessLuid.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C00A3070 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00A3090 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C00A30C0 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C00A3100 (-CalculateMouseTable@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01B61E0 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01B74F0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

void __fastcall xxxUpdatePerUserAccessPackSettings(const UNICODE_STRING *a1)
{
  int v2; // edi
  ULONG v3; // ebx
  ULONG v4; // r15d
  ULONG v5; // r12d
  ULONG v6; // r13d
  ULONG v7; // r8d
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  unsigned __int64 v44; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v45; // rcx
  void *v46; // rdi
  __int64 QuotaZInit; // rbx
  NTSTATUS v48; // eax
  int v49; // esi
  int v50; // ecx
  unsigned int v51; // ecx
  int v52; // edx
  int v53; // edx
  int v54; // edx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  int v73; // [rsp+34h] [rbp-CCh] BYREF
  ULONG Length; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v75; // [rsp+3Ch] [rbp-C4h]
  BOOL v76; // [rsp+40h] [rbp-C0h]
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  size_t v79[32]; // [rsp+60h] [rbp-A0h] BYREF

  AuthenticationId = 0LL;
  Value = 0;
  GetProcessLuid(0LL, &AuthenticationId);
  if ( AuthenticationId.LowPart != 999 || (v2 = 1, AuthenticationId.HighPart) )
    v2 = 0;
  FastGetProfileIntW((__int64)a1, 15LL, (__int64)L"Flags", 0, &Value, 0);
  v3 = Value & 1;
  FastGetProfileIntW((__int64)a1, 14LL, (__int64)L"Flags", 0, &Value, 0);
  v4 = Value & 1;
  FastGetProfileIntW((__int64)a1, 16LL, (__int64)L"Flags", 0, &Value, 0);
  v5 = Value & 1;
  FastGetProfileIntW((__int64)a1, 17LL, (__int64)L"Flags", 0, &Value, 0);
  v6 = Value & 1;
  FastGetProfileIntW((__int64)a1, 27LL, (__int64)L"On", 0, &Value, 0);
  v76 = Value != 0;
  FastGetProfileIntW((__int64)a1, 28LL, (__int64)L"On", 0, &Value, 0);
  Length = Value != 0;
  FastGetProfileIntW((__int64)a1, 18LL, (__int64)L"Flags", 0, &Value, 0);
  v75 = Value & 1;
  FastGetProfileIntW((__int64)a1, 29LL, (__int64)L"Flags", 0, &Value, 0);
  v7 = Value & 1;
  v73 = v7;
  if ( v2 )
  {
    if ( v3 )
    {
      dword_1C02905FC |= 1u;
      v8 = gdwPUDFlags | 1;
    }
    else
    {
      dword_1C02905FC &= ~1u;
      v8 = gdwPUDFlags & 0xFFFFFFFE;
    }
    gdwPUDFlags = v8;
    if ( (dword_1C02905F4 & 1) != 0 && !v3 )
    {
      xxxTurnOffStickyKeys();
      v7 = v73;
    }
    if ( v4 )
    {
      dword_1C02905F4 |= 1u;
      v9 = gdwPUDFlags | 2;
    }
    else
    {
      dword_1C02905F4 &= ~1u;
      v9 = gdwPUDFlags & 0xFFFFFFFD;
    }
    if ( v5 )
    {
      dword_1C02905D4 |= 1u;
      v10 = v9 | 4;
    }
    else
    {
      dword_1C02905D4 &= ~1u;
      v10 = v9 & 0xFFFFFFFB;
    }
    if ( v6 )
    {
      dword_1C02905BC |= 1u;
      v11 = v10 | 8;
    }
    else
    {
      dword_1C02905BC &= ~1u;
      v11 = v10 & 0xFFFFFFF7;
    }
    if ( v75 )
    {
      dword_1C02905C4 |= 1u;
      v12 = v11 | 0x10;
    }
    else
    {
      dword_1C02905C4 &= ~1u;
      v12 = v11 & 0xFFFFFFEF;
    }
    if ( v76 )
    {
      gdwPUDFlags = v12 | 0x20020;
      _InterlockedOr((volatile signed __int32 *)gpsi, 0x80u);
    }
    else
    {
      gdwPUDFlags = v12 & 0xFFFDFFDF;
      _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFF7F);
    }
    if ( Length )
      v13 = gdwPUDFlags | 0x40040;
    else
      v13 = gdwPUDFlags & 0xFFFBFFBF;
    if ( v7 )
    {
      dword_1C02905AC |= 1u;
      v14 = v13 | 0x80;
    }
    else
    {
      dword_1C02905AC &= ~1u;
      v14 = v13 & 0xFFFFFF7F;
    }
    gdwPUDFlags = v14;
    goto LABEL_22;
  }
  if ( (((unsigned __int8)gdwPUDFlags ^ (unsigned __int8)dword_1C02905FC) & 1) == 0 )
  {
    if ( v3 )
      v50 = dword_1C02905FC | 1;
    else
      v50 = dword_1C02905FC & 0xFFFFFFFE;
    dword_1C02905FC = v50;
  }
  if ( (dword_1C02905F4 & 1) == (((unsigned int)gdwPUDFlags >> 1) & 1) )
  {
    if ( (dword_1C02905F4 & 1) != 0 )
    {
      if ( !v4 )
      {
        xxxTurnOffStickyKeys();
        v7 = v73;
        goto LABEL_65;
      }
    }
    else if ( !v4 )
    {
LABEL_65:
      dword_1C02905F4 &= ~1u;
      goto LABEL_66;
    }
    dword_1C02905F4 |= 1u;
  }
LABEL_66:
  v51 = gdwPUDFlags;
  if ( (((unsigned __int8)dword_1C02905D4 ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 2)) & 1) == 0 )
  {
    if ( v5 )
      v52 = dword_1C02905D4 | 1;
    else
      v52 = dword_1C02905D4 & 0xFFFFFFFE;
    dword_1C02905D4 = v52;
  }
  if ( (((unsigned __int8)dword_1C02905BC ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 3)) & 1) == 0 )
  {
    if ( v6 )
      v53 = dword_1C02905BC | 1;
    else
      v53 = dword_1C02905BC & 0xFFFFFFFE;
    dword_1C02905BC = v53;
  }
  if ( (((unsigned __int8)dword_1C02905C4 ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 4)) & 1) == 0 )
  {
    if ( v75 )
      v54 = dword_1C02905C4 | 1;
    else
      v54 = dword_1C02905C4 & 0xFFFFFFFE;
    dword_1C02905C4 = v54;
  }
  if ( (((unsigned __int8)gdwPUDFlags ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 12)) & 0x20) == 0 )
  {
    if ( v76 )
      v51 = gdwPUDFlags | 0x20000;
    else
      v51 = gdwPUDFlags & 0xFFFDFFFF;
    gdwPUDFlags = v51;
  }
  if ( (((unsigned __int8)v51 ^ (unsigned __int8)(v51 >> 12)) & 0x40) == 0 )
  {
    if ( Length )
      v51 |= 0x40000u;
    else
      v51 &= ~0x40000u;
    gdwPUDFlags = v51;
  }
  if ( (((unsigned __int8)dword_1C02905AC ^ (unsigned __int8)(v51 >> 7)) & 1) == 0 )
  {
    if ( v7 )
      v55 = dword_1C02905AC | 1;
    else
      v55 = dword_1C02905AC & 0xFFFFFFFE;
    dword_1C02905AC = v55;
  }
LABEL_22:
  FastGetProfileIntW((__int64)a1, 15LL, (__int64)L"Flags", 0x52u, &Value, 0);
  if ( (dword_1C02905FC & 1) != 0 )
    v15 = Value | 1;
  else
    v15 = Value & 0xFFFFFFFE;
  Value = v15;
  dword_1C02905FC = v15;
  FastGetProfileIntW((__int64)a1, 15LL, (__int64)L"DelayBeforeAcceptance", 0x3E8u, &::Value, 0);
  FastGetProfileIntW((__int64)a1, 15LL, (__int64)L"AutoRepeatRate", 0x1F4u, &dword_1C0290608, 0);
  FastGetProfileIntW((__int64)a1, 15LL, (__int64)L"AutoRepeatDelay", 0x3E8u, &dword_1C0290604, 0);
  FastGetProfileIntW((__int64)a1, 15LL, (__int64)L"BounceTime", 0, &dword_1C029060C, 0);
  FastGetProfileIntW((__int64)a1, 19LL, (__int64)L"Flags", 2u, &dword_1C0293964, 0);
  FastGetProfileIntW((__int64)a1, 19LL, (__int64)L"FSTextEffect", 0, &dword_1C0293968, 0);
  FastGetProfileIntW((__int64)a1, 19LL, (__int64)L"WindowsEffect", 0, &dword_1C0293980, 0);
  FastGetProfileIntW((__int64)a1, 20LL, (__int64)L"On", 0, &Value, 0);
  if ( Value )
    v16 = gdwPUDFlags | 0x8000;
  else
    v16 = gdwPUDFlags & 0xFFFF7FFF;
  gdwPUDFlags = v16;
  *((_DWORD *)gpsi + 544) = (v16 >> 15) & 1;
  FastGetProfileIntW((__int64)a1, 14LL, (__int64)L"Flags", 0x1D2u, &Value, 0);
  if ( (dword_1C02905F4 & 1) != 0 )
    v17 = Value | 1;
  else
    v17 = Value & 0xFFFFFFFE;
  Value = v17;
  dword_1C02905F4 = v17;
  FastGetProfileIntW((__int64)a1, 16LL, (__int64)L"Flags", 0x12u, &Value, 0);
  if ( (dword_1C02905D4 & 1) != 0 )
    v18 = Value | 1;
  else
    v18 = Value & 0xFFFFFFFE;
  Value = v18;
  dword_1C02905D4 = v18;
  FastGetProfileIntW((__int64)a1, 16LL, (__int64)L"MaximumSpeed", 0x28u, &dword_1C02905D8, 0);
  FastGetProfileIntW((__int64)a1, 16LL, (__int64)L"TimeToMaximumSpeed", 0xBB8u, &dword_1C02905DC, 0);
  if ( dword_1C02905D8 - 10 > 0x15E )
    dword_1C02905D8 = 40;
  if ( dword_1C02905DC - 1000 > 0xFA0 )
    dword_1C02905DC = 3000;
  CalculateMouseTable();
  v23 = SGDGetUserSessionState(v20, v19, v21, v22);
  v28 = (unsigned __int64)*(unsigned __int8 *)(SGDGetUserSessionState(v25, v24, v26, v27) + 13768) >> 2;
  gbMKMouseMode = ((dword_1C02905D4 & 0x80) != 0) ^ (((unsigned __int8)(1 << (2
                                                                            * (*(_WORD *)(SGDGetUserSessionState(
                                                                                            v30,
                                                                                            v29,
                                                                                            v31,
                                                                                            v32)
                                                                                        + 13768) & 3)
                                                                            + 1)) & *(_BYTE *)(v23 + v28 + 13992)) != 0);
  if ( (dword_1C02905D4 & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  FastGetProfileIntW((__int64)a1, 17LL, (__int64)L"Flags", 0x12u, &Value, 0);
  if ( (dword_1C02905BC & 1) != 0 )
    v33 = Value | 1;
  else
    v33 = Value & 0xFFFFFFFE;
  Value = v33;
  dword_1C02905BC = v33;
  FastGetProfileIntW((__int64)a1, 18LL, (__int64)L"Flags", 2u, &Value, 0);
  if ( (dword_1C02905C4 & 1) != 0 )
    v38 = Value | 1;
  else
    v38 = Value & 0xFFFFFFFE;
  Value = v38;
  dword_1C02905C4 = v38;
  if ( *(_QWORD *)(SGDGetUserSessionState(v35, v34, v36, v37) + 13848) )
  {
    v57 = *(_QWORD *)(SGDGetUserSessionState(v40, v39, v41, v42) + 13848);
    if ( *(_DWORD *)(v57 + 16) == 16 )
    {
      v57 = *(_QWORD *)(SGDGetUserSessionState(v57, v56, v58, v59) + 13848);
      if ( *(_QWORD *)(v57 + 24) )
      {
        v60 = *(_QWORD *)(SGDGetUserSessionState(v57, v56, v58, v59) + 13848);
        v61 = *(_QWORD *)(v60 + 24);
        *(_QWORD *)(SGDGetUserSessionState(v60, v62, v63, v64) + 13872) = v61;
      }
    }
    v66 = *(_QWORD *)(SGDGetUserSessionState(v57, v56, v58, v59) + 13848);
    if ( (*(_BYTE *)(v66 + 2) & 2) != 0 )
    {
      *(_WORD *)(SGDGetUserSessionState(v66, v65, v67, v68) + 13768) = 36;
      *(_WORD *)(SGDGetUserSessionState(36LL, v69, v70, v71) + 13770) = 21;
    }
  }
  FastGetProfileIntW((__int64)a1, 18LL, (__int64)L"TimeToWait", 0x493E0u, &dword_1C02905C8, 0);
  FastGetProfileIntW((__int64)a1, 29LL, (__int64)L"Flags", 0x52u, &Value, 0);
  if ( (dword_1C02905AC & 1) != 0 )
    v43 = Value | 1;
  else
    v43 = Value & 0xFFFFFFFE;
  Value = v43;
  dword_1C02905AC = v43;
  v73 = gdwPolicyFlags;
  DestinationString = 0LL;
  v46 = OpenCacheKeyEx(a1, 29LL, 131097LL, &v73);
  if ( v46 )
  {
    while ( 1 )
    {
      Length = 268;
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v45, v44, 0x10CuLL, 0x72707355u);
      if ( !QuotaZInit )
        goto LABEL_49;
      RtlInitUnicodeString(&DestinationString, L"High Contrast Scheme");
      v48 = ZwQueryValueKey(v46, &DestinationString, KeyValuePartialInformation, (PVOID)QuotaZInit, Length, &Length);
      if ( v48 == -2147483643 || v48 >= 0 )
        break;
      if ( !v73 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
LABEL_49:
        ZwClose(v46);
        goto LABEL_56;
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
      ZwClose(v46);
      v46 = OpenCacheKeyEx(a1, 29LL, 131097LL, &v73);
      if ( !v46 )
        goto LABEL_56;
    }
    v49 = 128;
    if ( *(_DWORD *)(QuotaZInit + 8) >> 1 < 0x80u )
      v49 = *(_DWORD *)(QuotaZInit + 8) >> 1;
    if ( *(_DWORD *)(QuotaZInit + 8) < 2u )
    {
      LOWORD(v79[0]) = 0;
    }
    else
    {
      *(_WORD *)(QuotaZInit + 2LL * (unsigned int)(v49 - 1) + 12) = 0;
      RtlStringCchCopyW((unsigned __int16 *)v79, 0x80uLL, (size_t *)(QuotaZInit + 12));
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
    ZwClose(v46);
    if ( v49 )
      RtlStringCchCopyW(&gHighContrastDefaultScheme, 0x80uLL, v79);
  }
LABEL_56:
  gAudioDescription = 12;
  FastGetProfileIntW((__int64)a1, 48LL, (__int64)L"On", 0, &dword_1C029059C, 0);
  FastGetProfileIntW((__int64)a1, 48LL, (__int64)L"Locale", 0, &dword_1C02905A0, 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
