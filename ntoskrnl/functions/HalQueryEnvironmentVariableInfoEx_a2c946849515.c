__int64 __fastcall HalQueryEnvironmentVariableInfoEx(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // bl
  unsigned int v9; // edi
  unsigned int v10; // edx
  unsigned int VariableInfo; // edi
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi )
    return 3221225474LL;
  v8 = 1;
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  v9 = a1 | 6;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v8 = 0;
  }
  else
  {
    v10 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
    Affinity.Mask = 1LL << (v10 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  VariableInfo = HalEfiQueryVariableInfo(v9, a2, a3, a4);
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return VariableInfo;
}
