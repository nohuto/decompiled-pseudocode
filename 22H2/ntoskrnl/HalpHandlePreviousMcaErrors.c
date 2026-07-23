/*
 * XREFs of HalpHandlePreviousMcaErrors @ 0x1409A6DF4
 * Callers:
 *     HalpInitializeMce @ 0x1409A0A8C (HalpInitializeMce.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140344620 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HalpMceInitializeErrorPacketContents @ 0x1409A0DBC (HalpMceInitializeErrorPacketContents.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x1409A6F34 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall HalpHandlePreviousMcaErrors(char a1)
{
  GUID *PoolWithTag; // rax
  GUID *v3; // rsi
  ULONG v4; // edi
  ULONG ActiveProcessorCount; // ebp
  int *v6; // r14
  unsigned int v7; // edx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v9; // rcx
  __int64 i; // rbx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  PoolWithTag = (GUID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x160uLL, 0x206C6148u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    HalpMceInitializeErrorPacketContents(PoolWithTag);
    v4 = 0;
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( ActiveProcessorCount )
    {
      v6 = KiProcessorIndexToNumberMappingTable;
      do
      {
        v7 = *v6;
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v7 >> 6);
        Affinity.Mask = 1LL << (v7 & 0x3F);
        if ( v4 )
          p_PreviousAffinity = 0LL;
        else
          p_PreviousAffinity = &PreviousAffinity;
        KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
        for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 176) )
        {
          LOBYTE(v9) = a1;
          HalpHandlePreviousMcaErrorsOnProcessor(v9, v3, *(_QWORD *)(i + 164));
        }
        ++v4;
        ++v6;
      }
      while ( v4 < ActiveProcessorCount );
    }
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    ExFreePoolWithTag(v3, 0x206C6148u);
  }
}
