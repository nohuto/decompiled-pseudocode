/*
 * XREFs of HalpCmcWorkerRoutine @ 0x14080C020
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     HalpCmcPollProcessor @ 0x14037CF58 (HalpCmcPollProcessor.c)
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HalpCmciInit @ 0x140A8795C (HalpCmciInit.c)
 */

void __fastcall HalpCmcWorkerRoutine(__int64 a1)
{
  unsigned int v2; // esi
  ULONG ActiveProcessorCount; // r13d
  ULONG v4; // r14d
  int *v5; // r12
  unsigned int v6; // edx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edx
  bool v15; // cf
  unsigned int v16; // eax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-60h] BYREF
  __int128 Src; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+50h] [rbp-30h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-20h] BYREF

  ++*(_DWORD *)(a1 + 184);
  Affinity = 0LL;
  v2 = 0;
  PreviousAffinity = 0LL;
  Src = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  if ( ActiveProcessorCount )
  {
    v5 = KiProcessorIndexToNumberMappingTable;
    do
    {
      v6 = *v5;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v6 >> 6);
      Affinity.Mask = 1LL << (v6 & 0x3F);
      if ( v4 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      v8 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
      while ( v8 )
      {
        HalpCmcPollProcessor(HalpCmcErrorPacket, HalpCmciEnabled, *(_QWORD *)(v8 + 172), v8);
        v16 = *(_DWORD *)(v8 + 164);
        v8 = *(_QWORD *)(v8 + 184);
        if ( v16 <= v2 )
          v16 = v2;
        v2 = v16;
      }
      ++v4;
      ++v5;
    }
    while ( v4 < ActiveProcessorCount );
  }
  if ( HalpCmciRevertToPolledMode )
  {
    if ( *(_BYTE *)(a1 + 172) )
    {
      if ( *(_DWORD *)(a1 + 184) > 1u )
      {
        v9 = *(_DWORD *)(a1 + 188);
        if ( v9 < *(_DWORD *)(a1 + 180) && v2 < *(_DWORD *)(a1 + 176) )
        {
          *(_DWORD *)(a1 + 188) = v9 + 1;
          KeCancelTimer((PKTIMER)(a1 + 8));
          HalpCmciRevertToPolledMode = 0;
          HalpCmcPollingStarted = 0;
          *((_BYTE *)HalpCmcErrorSource + 48) = 5;
          HalpCmciInit(
            v11,
            v10,
            v12,
            v13,
            Affinity.Mask,
            *(_QWORD *)&Affinity.Group,
            Src,
            *((_QWORD *)&Src + 1),
            v19,
            *((_QWORD *)&v19 + 1));
          v14 = *(_DWORD *)(a1 + 180);
          v15 = *(_DWORD *)(a1 + 188) < v14;
          LODWORD(v20) = *(_DWORD *)(a1 + 188);
          *(_DWORD *)(a1 + 184) = 0;
          *(_QWORD *)&Src = 0x1674C6857LL;
          DWORD1(v19) = -v15 - 2147483620;
          HIDWORD(v20) = *(_DWORD *)(a1 + 176);
          *((_QWORD *)&Src + 1) = 48LL;
          LODWORD(v19) = 541868360;
          *((_QWORD *)&v19 + 1) = 0x1000000002LL;
          *(_QWORD *)((char *)&v20 + 4) = __PAIR64__(v2, v14);
          WheaLogInternalEvent(&Src);
        }
      }
    }
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
}
