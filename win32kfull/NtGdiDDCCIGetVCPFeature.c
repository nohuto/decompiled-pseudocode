/*
 * XREFs of NtGdiDDCCIGetVCPFeature @ 0x1C026CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1C026C12C (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetVCPFeature(
        void *a1,
        unsigned int a2,
        _DWORD *Address,
        unsigned int *a4,
        unsigned int *Addressa)
{
  __int64 v9; // rax
  int VCPFeature; // edi
  unsigned int v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+34h] [rbp-14h] BYREF
  unsigned int v14[4]; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0;
  v12 = 0;
  v14[0] = 0;
  v9 = SGDGetSessionState(a1);
  VCPFeature = CMonitorAPI::DdcciGetVCPFeature(
                 *(CMonitorAPI **)(*(_QWORD *)(v9 + 32) + 8728LL),
                 a1,
                 a2,
                 (enum _MC_VCP_CODE_TYPE *)&v13,
                 &v12,
                 v14);
  if ( VCPFeature >= 0 )
  {
    ProbeForWrite(a4, 4uLL, 1u);
    *a4 = v12;
    if ( Address )
    {
      ProbeForWrite(Address, 4uLL, 1u);
      *Address = v13;
    }
    if ( Addressa )
    {
      ProbeForWrite(Addressa, 4uLL, 1u);
      *Addressa = v14[0];
    }
  }
  return (unsigned int)VCPFeature;
}
