/*
 * XREFs of ?IsValidHandle@CChannel@@AEAA_NI@Z @ 0x1800442E0
 * Callers:
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x180043FC0 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 *     ?CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z @ 0x180044220 (-CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z.c)
 *     ?AddRefResource@CChannel@@UEAAJI@Z @ 0x1800EF940 (-AddRefResource@CChannel@@UEAAJI@Z.c)
 *     ?QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1801CD330 (-QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CChannel::IsValidHandle(CChannel *this, unsigned int a2)
{
  __int64 v2; // r10
  char v3; // r8

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  if ( a2 && a2 <= (unsigned __int64)((*((_QWORD *)this + 3) - v2) >> 4) && *(_DWORD *)(v2 + 16LL * (a2 - 1)) )
    return *(_DWORD *)(v2 + 16LL * (a2 - 1) + 4) != 0;
  return v3;
}
