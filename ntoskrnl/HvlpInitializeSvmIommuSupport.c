/*
 * XREFs of HvlpInitializeSvmIommuSupport @ 0x140545EE4
 * Callers:
 *     HvlPhase2Initialize @ 0x1403AF870 (HvlPhase2Initialize.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     HvlGetSystemPasidCapabilities @ 0x140542050 (HvlGetSystemPasidCapabilities.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 HvlpInitializeSvmIommuSupport()
{
  int v0; // ebx
  __int64 v1; // rcx
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  HvlGetSystemPasidCapabilities((__int64)&v5);
  if ( (v5 & 1) == 0 )
    return 3221225659LL;
  v0 = v6;
  if ( !(_DWORD)v6 )
    return 3221225659LL;
  qword_140D18AE0 = ExAllocatePool2(64LL, 104LL * (unsigned int)v6, 541873736LL);
  v1 = qword_140D18AE0;
  if ( !qword_140D18AE0 )
    return 3221225626LL;
  dword_140D18AD8 = v0;
  v3 = 0;
  if ( v0 )
  {
    while ( 1 )
    {
      v4 = v1 + 104LL * v3;
      *(_DWORD *)v4 = v3;
      *(_QWORD *)(v4 + 32) = HvlpIommuPrqDpcRoutine;
      *(_DWORD *)(v4 + 8) = 275;
      *(_QWORD *)(v4 + 40) = v4;
      *(_QWORD *)(v4 + 64) = 0LL;
      *(_QWORD *)(v4 + 24) = 0LL;
      *(_QWORD *)(v4 + 96) = v4;
      *(_QWORD *)(v4 + 88) = HvlpProcessIommuPrq;
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_DWORD *)(v4 + 4) = 3;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 72), HyperCriticalWorkQueue);
      if ( ++v3 >= dword_140D18AD8 )
        break;
      v1 = qword_140D18AE0;
    }
  }
  return 0LL;
}
