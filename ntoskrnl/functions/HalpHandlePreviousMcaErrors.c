void __fastcall HalpHandlePreviousMcaErrors(char a1)
{
  GUID *Pool2; // rax
  GUID *v3; // rsi
  ULONG v4; // edi
  ULONG ActiveProcessorCount; // ebp
  int *v6; // r14
  unsigned int v7; // edx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v9; // rcx
  __int64 i; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  Pool2 = (GUID *)ExAllocatePool2(64LL, 372LL, 1466720584LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    HalpMceInitializeErrorPacketContents(Pool2);
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
        for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
        {
          LOBYTE(v9) = a1;
          HalpHandlePreviousMcaErrorsOnProcessor(v9, v3, *(_QWORD *)(i + 172));
        }
        ++v4;
        ++v6;
      }
      while ( v4 < ActiveProcessorCount );
    }
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    ExFreePoolWithTag(v3, 0x576C6148u);
  }
}
