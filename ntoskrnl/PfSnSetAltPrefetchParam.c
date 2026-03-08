/*
 * XREFs of PfSnSetAltPrefetchParam @ 0x14097C9F8
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x1407E4DC0 (PfSnCalculateScenarioNameAndHash.c)
 *     PfSnAltProfileFindByScenarioId @ 0x1407E50B0 (PfSnAltProfileFindByScenarioId.c)
 *     PfCalculateProcessHash @ 0x1407E7450 (PfCalculateProcessHash.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14097C66C (PfSnAltProfileTreeCompareByProcess.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x14097C698 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnSetAltPrefetchParam(ULONG_PTR BugCheckParameter1, unsigned int *a2, int a3, char a4)
{
  unsigned __int64 v8; // r14
  int v9; // r15d
  int v10; // edi
  unsigned int v11; // ebx
  PVOID v12; // r12
  __int64 v13; // rcx
  void *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  int v19; // r12d
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  int v24; // r12d
  bool v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  int v28; // r12d
  bool v29; // r8
  unsigned __int64 v30; // rax
  void *v31; // rcx
  PVOID Object; // [rsp+68h] [rbp-1E0h] BYREF
  int v34; // [rsp+70h] [rbp-1D8h] BYREF
  int v35; // [rsp+74h] [rbp-1D4h] BYREF
  int v36; // [rsp+78h] [rbp-1D0h] BYREF
  int v37; // [rsp+7Ch] [rbp-1CCh] BYREF
  __int64 v38; // [rsp+80h] [rbp-1C8h]
  int v39; // [rsp+88h] [rbp-1C0h] BYREF
  unsigned int v40; // [rsp+8Ch] [rbp-1BCh]
  __int64 v41; // [rsp+90h] [rbp-1B8h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-1B0h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-1A0h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-188h] BYREF
  unsigned __int8 v45[256]; // [rsp+110h] [rbp-138h] BYREF

  memset(Str2, 0, 0x44uLL);
  v43 = 0LL;
  v37 = 0;
  v34 = 0;
  v36 = 0;
  v35 = 0;
  v39 = 0;
  P[0] = 0LL;
  Object = 0LL;
  v8 = 0LL;
  v38 = 0LL;
  v9 = 0;
  v10 = ObpReferenceObjectByHandleWithTag(
          BugCheckParameter1,
          512,
          (__int64)PsProcessType,
          a4,
          0x73576650u,
          &Object,
          0LL,
          0LL);
  if ( v10 >= 0 )
  {
    if ( Object != KeGetCurrentThread()->ApcState.Process )
    {
LABEL_3:
      v10 = -1073741811;
      goto LABEL_67;
    }
    if ( a3 != 4 )
    {
      v10 = -1073741820;
      goto LABEL_67;
    }
    v40 = *a2;
    v11 = v40;
    if ( v40 > 0x10 )
      goto LABEL_3;
    v12 = Object;
    v10 = PfCalculateProcessHash((__int64)Object, (unsigned __int64)P);
    if ( v10 >= 0 )
    {
      v41 = 256LL;
      v10 = PfSnCalculateScenarioNameAndHash(
              v13,
              Str2,
              (__int64)&v43,
              &v37,
              (__int64)&v34,
              (__int64)&v36,
              &v35,
              &v41,
              v45,
              &v39,
              (__int64)v12,
              (_OWORD *)P[0]);
      if ( v10 >= 0 )
      {
        *(_DWORD *)&Str2[32] = v34;
        *(_DWORD *)&Str2[30] = v37 + v36 + v35;
        Pool2 = (void *)ExAllocatePool2(256LL, 128LL, 1716544323LL);
        v8 = (unsigned __int64)Pool2;
        if ( !Pool2 )
        {
          v10 = -1073741670;
          goto LABEL_67;
        }
        memset(Pool2, 0, 0x80uLL);
        *(_DWORD *)(v8 + 124) = v11;
        *(_QWORD *)(v8 + 48) = Object;
        *(_OWORD *)(v8 + 56) = *(_OWORD *)Str2;
        *(_OWORD *)(v8 + 72) = *(_OWORD *)&Str2[8];
        *(_OWORD *)(v8 + 88) = *(_OWORD *)&Str2[16];
        *(_OWORD *)(v8 + 104) = *(_OWORD *)&Str2[24];
        *(_DWORD *)(v8 + 120) = *(_DWORD *)&Str2[32];
        Object = 0LL;
        v9 = 1;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C6A3B8, 0LL);
        v16 = PfSnAltProfileFindByScenarioId(Str2);
        if ( v16 )
        {
          if ( *(_QWORD *)(v8 + 48) != *(_QWORD *)(v16 + 48) )
          {
            v10 = -1073740008;
            goto LABEL_67;
          }
          *(_DWORD *)(v16 + 124) = v40;
          goto LABEL_15;
        }
        v17 = *(_QWORD *)(v8 + 48);
        v38 = v17;
        v18 = (unsigned __int64)qword_140C6A398;
        if ( (xmmword_140C6A3A0 & 1) != 0 && qword_140C6A398 )
          v18 = (unsigned __int64)&qword_140C6A398 ^ (unsigned __int64)qword_140C6A398;
        v19 = xmmword_140C6A3A0 & 1;
        while ( v18 )
        {
          v20 = PfSnAltProfileTreeCompareByProcess(v17, v18);
          if ( v20 >= 0 )
          {
            if ( v20 <= 0 )
              break;
            v21 = *(_QWORD *)(v18 + 8);
          }
          else
          {
            v21 = *(_QWORD *)v18;
          }
          if ( v19 && v21 )
            v18 ^= v21;
          else
            v18 = v21;
          v17 = v38;
        }
        if ( !v18 )
        {
          v22 = *(_QWORD *)(v8 + 48);
          v38 = v22;
          v23 = (unsigned __int64)qword_140C6A398;
          if ( (xmmword_140C6A3A0 & 1) != 0 && qword_140C6A398 )
            v23 = (unsigned __int64)&qword_140C6A398 ^ (unsigned __int64)qword_140C6A398;
          v24 = xmmword_140C6A3A0 & 1;
          v25 = 0;
          if ( v23 )
          {
            while ( 1 )
            {
              if ( PfSnAltProfileTreeCompareByProcess(v22, v23) < 0 )
              {
                v26 = *(_QWORD *)v23;
                if ( v24 )
                {
                  if ( !v26 )
                    goto LABEL_47;
                  v26 ^= v23;
                }
                if ( !v26 )
                {
LABEL_47:
                  v25 = 0;
                  break;
                }
              }
              else
              {
                v26 = *(_QWORD *)(v23 + 8);
                if ( v24 )
                {
                  if ( !v26 )
                    goto LABEL_41;
                  v26 ^= v23;
                }
                if ( !v26 )
                {
LABEL_41:
                  v25 = 1;
                  break;
                }
              }
              v23 = v26;
              v22 = v38;
            }
          }
          RtlRbInsertNodeEx((unsigned __int64 *)&qword_140C6A398, v23, v25, v8);
          v27 = *((_QWORD *)&xmmword_140C6A3A0 + 1);
          if ( (qword_140C6A3B0 & 1) != 0 && *((_QWORD *)&xmmword_140C6A3A0 + 1) )
            v27 = ((unsigned __int64)&xmmword_140C6A3A0 + 8) ^ *((_QWORD *)&xmmword_140C6A3A0 + 1);
          v28 = qword_140C6A3B0 & 1;
          v29 = 0;
          if ( v27 )
          {
            while ( 1 )
            {
              if ( PfSnAltProfileTreeCompareByScenarioId((wchar_t *)(v8 + 56), v27) < 0 )
              {
                v30 = *(_QWORD *)v27;
                if ( v28 )
                {
                  if ( !v30 )
                    goto LABEL_63;
                  v30 ^= v27;
                }
                if ( !v30 )
                {
LABEL_63:
                  v29 = 0;
                  break;
                }
              }
              else
              {
                v30 = *(_QWORD *)(v27 + 8);
                if ( v28 )
                {
                  if ( !v30 )
                    goto LABEL_57;
                  v30 ^= v27;
                }
                if ( !v30 )
                {
LABEL_57:
                  v29 = 1;
                  break;
                }
              }
              v27 = v30;
            }
          }
          RtlRbInsertNodeEx((unsigned __int64 *)&xmmword_140C6A3A0 + 1, v27, v29, v8 + 24);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6A3B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6A3B8);
          KeAbPostRelease((ULONG_PTR)&qword_140C6A3B8);
          KeLeaveCriticalRegion();
          v9 = 0;
          v8 = 0LL;
LABEL_15:
          v10 = 0;
          goto LABEL_67;
        }
        v10 = -1073741811;
      }
    }
  }
LABEL_67:
  if ( v9 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6A3B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6A3B8);
    KeAbPostRelease((ULONG_PTR)&qword_140C6A3B8);
    KeLeaveCriticalRegion();
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v8 )
  {
    v31 = *(void **)(v8 + 48);
    if ( v31 )
      ObfDereferenceObjectWithTag(v31, 0x73576650u);
    ExFreePoolWithTag((PVOID)v8, 0x66506343u);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x73576650u);
  return (unsigned int)v10;
}
