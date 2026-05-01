/*
 * XREFs of ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C750
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B898 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180005C00 (-RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C5A0 (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x18000C6D0 (-RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z.c)
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x18000C97C (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CB3C (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D6FC (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        unsigned int a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  char *Heap; // rax
  char *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r8d
  int State; // edi
  __int64 v15; // r8
  void *v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-38h]

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x5C8uLL);
  v10 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x5C8uLL);
    *((_QWORD *)v10 + 6) = a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a2) <= 1 )
      __fastfail(0xEu);
    *((_QWORD *)v10 + 7) = a2;
    *((_QWORD *)v10 + 177) = v10 + 1408;
    *((_QWORD *)v10 + 176) = v10 + 1408;
    v18 = *((_QWORD *)a3 + 68);
    *(_QWORD *)v10 = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = v18;
    *((_QWORD *)v10 + 2) = 1LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 1) = HIBYTE(v18)
                         + 37
                         * (BYTE6(v18)
                          + 37
                          * (BYTE5(v18)
                           + 37
                           * (BYTE4(v18)
                            + 37
                            * (BYTE3(v18)
                             + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883LL)))))));
    HampHostInitialize(a4 & 1, a3, (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64));
    v11 = v10 + 1112;
    v12 = 2LL;
    do
    {
      v11[2] = 0LL;
      v11[1] = v11;
      *v11 = v11;
      v11 += 3;
      --v12;
    }
    while ( v12 );
    v13 = *((_DWORD *)a3 + 133);
    State = RmpPolicyResizeScratchBuffers((struct _RM_PARTITION *)((char *)a2 + 144), ++*((_DWORD *)a2 + 48), v13);
    if ( State >= 0 )
      State = 0;
    if ( State >= 0 )
    {
      State = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v10);
      if ( State >= 0 )
      {
        if ( (a4 & 1) != 0 )
          *((_DWORD *)v10 + 311) |= 0x180u;
        State = RmpSystemReferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v10, (void **)v10 + 150);
        if ( State >= 0 )
        {
          State = HampHostAllocateState(
                    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1768),
                    (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64),
                    a4);
          if ( State >= 0 )
          {
            State = TpAllocWork(v10 + 1384, RmpActivityHostCommitUseUpdateWorker, v10, 0LL);
            if ( State >= 0 )
            {
              State = 0;
              *a5 = (struct _RM_ACTIVITY_HOST *)v10;
              v10 = 0LL;
            }
          }
        }
      }
    }
    if ( v10 )
    {
      v17 = (void *)*((_QWORD *)v10 + 150);
      if ( v17 )
        RmpSystemDereferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v10, v17, v15);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
