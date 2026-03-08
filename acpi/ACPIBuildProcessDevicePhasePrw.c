/*
 * XREFs of ACPIBuildProcessDevicePhasePrw @ 0x1C000FDA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C000C5A4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C00140F0 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIWriteEventLogEntry @ 0x1C0025F5C (ACPIWriteEventLogEntry.c)
 *     ACPIGpeValidIndex @ 0x1C002C6DC (ACPIGpeValidIndex.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrw(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // r13
  char v4; // si
  int v5; // r15d
  _DWORD *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int16 v9; // ax
  __int64 v10; // r8
  const char *v11; // rax
  const char *v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  unsigned __int8 v17; // cl
  unsigned int v18; // ebx
  int v19; // esi
  unsigned __int64 v20; // rdx
  unsigned __int8 v21; // r8
  __int64 v22; // rbx
  int v23; // r8d
  __int64 v24; // rdx
  const char *v25; // rax
  const char *v26; // r8
  _QWORD v28[15]; // [rsp+50h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 18;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)(v1 + 456) )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      dword_1C006F938 = 0;
      pszDest = 0;
      FreeDataBuffs(a1 + 80, 1LL);
    }
  }
  else
  {
    v6 = (_DWORD *)(v1 + 600);
    v7 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1465074783LL);
    if ( v7 )
      *v6 |= 0x40u;
    else
      v7 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1465077855LL);
    *(_QWORD *)(v1 + 456) = v7;
    if ( !*(_QWORD *)(a1 + 56) )
    {
      if ( (*v6 & 0x40) == 0 )
        goto LABEL_51;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x400000000uLL);
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      if ( (AcpiOverrideAttributes & 8) != 0 && !_bittest64((const signed __int64 *)(v1 + 8), 0x23u) )
        v4 = 1;
      if ( *(_WORD *)(v2 + 2) != 4 )
        ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      v5 = ACPIBuildDevicePowerNodes(v1, *(_QWORD *)(a1 + 56), v2, 0);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v8 = *(_QWORD *)(v2 + 32);
      v9 = *(_WORD *)(v8 + 10);
      if ( v9 != 1 )
      {
        if ( v9 != 4 )
          KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v8 + 10));
        v5 = ACPIBuildWakeEventDeviceContext(v1, v8 + 8);
        if ( v5 < 0 )
        {
          v10 = *(_QWORD *)(v1 + 8);
          v11 = (const char *)&unk_1C00622D0;
          v12 = (const char *)&unk_1C00622D0;
          if ( (v10 & 0x200000000000LL) != 0 )
          {
            v11 = *(const char **)(v1 + 608);
            if ( (v10 & 0x400000000000LL) != 0 )
              v12 = *(const char **)(v1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xAu,
              0x2Bu,
              (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
              v5,
              v1,
              v11,
              v12);
          KeBugCheckEx(0xA5u, 6uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v8 + 10));
        }
      }
      v13 = *(_QWORD *)(v2 + 32);
      if ( *(_WORD *)(v13 + 50) != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v13 + 50));
      if ( !v4 )
      {
        *(_DWORD *)(v1 + 504) = *(_DWORD *)(v8 + 24);
        v14 = *(_QWORD *)(v13 + 64);
        if ( v14 < 6 )
          v15 = SystemPowerStateTranslation[v14];
        else
          v15 = 0;
        *(_DWORD *)(v1 + 536) = v15;
        _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
        if ( *((_BYTE *)AcpiInformation + 133) )
        {
          _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x100000000uLL);
        }
        else
        {
          v16 = *(_QWORD *)(v1 + 1008);
          if ( (v16 & 0x800000000LL) != 0 )
          {
            if ( (v16 & 0x100000000LL) == 0 )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 0LL, 0LL);
            if ( *(_QWORD *)(v8 + 24) != 0xFFFFFFFFLL )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 1uLL, 0LL);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( !*((_BYTE *)AcpiInformation + 133)
        && !_bittest64((const signed __int64 *)(v1 + 1008), 0x20u)
        && (unsigned __int8)ACPIGpeValidIndex(*(unsigned int *)(v8 + 24)) )
      {
        v18 = v17;
        v19 = 1 << (v17 % 8);
        KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
        v20 = (unsigned __int64)v18 >> 3;
        if ( ((unsigned __int8)v19 & *((_BYTE *)GpeEnable + v20)) != 0 )
        {
          if ( _bittest64((const signed __int64 *)(v1 + 8), 0x23u) )
          {
            *((_BYTE *)GpeSpecialHandler + v20) |= v19;
            v21 = *((_BYTE *)GpeWakeHandler + v20);
            if ( (v21 & (unsigned __int8)v19) != 0 )
              *((_BYTE *)GpeWakeHandler + v20) = v21 & ~(_BYTE)v19;
          }
          else if ( ((unsigned __int8)v19 & *((_BYTE *)GpeSpecialHandler + v20)) == 0 )
          {
            *((_BYTE *)GpeWakeHandler + v20) |= v19;
          }
        }
        KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      }
    }
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(v2, 1LL);
    v22 = *(_QWORD *)(v1 + 456);
    if ( v22 )
    {
      memset(v28, 0, sizeof(v28));
      v23 = *v6 & 0x40;
      WORD1(v28[0]) = 1;
      v28[2] = 0LL;
      WORD1(v28[5]) = 1;
      v28[7] = 0LL;
      WORD1(v28[10]) = 1;
      v28[12] = 0LL;
      AMLIAsyncEvalObject(v22, 0, (v23 | 0x20u) >> 5, (unsigned int)v28, 0LL, 0LL);
    }
  }
LABEL_51:
  v24 = *(_QWORD *)(v1 + 8);
  v25 = (const char *)&unk_1C00622D0;
  v26 = (const char *)&unk_1C00622D0;
  if ( (v24 & 0x200000000000LL) != 0 )
  {
    v25 = *(const char **)(v1 + 608);
    if ( (v24 & 0x400000000000LL) != 0 )
      v26 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x2Cu,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v5,
      v1,
      v25,
      v26);
  ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
  return (unsigned int)v5;
}
