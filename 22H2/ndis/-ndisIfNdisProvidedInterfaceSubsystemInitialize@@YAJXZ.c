/*
 * XREFs of ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0109648
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0146098 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0019180 (NdisConvertNdisStatusToNtStatus.c)
 *     ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1C0032CC0 (-ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z.c)
 *     NdisIfDeregisterProvider @ 0x1C00B2740 (NdisIfDeregisterProvider.c)
 */

__int64 ndisIfNdisProvidedInterfaceSubsystemInitialize(void)
{
  int v0; // eax
  __int64 result; // rax
  int v2; // ebx
  int v3; // ecx
  struct _NDIS_IF_PROVIDER_CHARACTERISTICS Src; // [rsp+20h] [rbp-38h] BYREF

  *((_DWORD *)&Src.Header + 1) = 0;
  Src.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryObject;
  Src.Header = (_NDIS_OBJECT_HEADER)2621824;
  Src.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))ndisIfSetObject;
  *(_OWORD *)&Src.Reserved1 = 0LL;
  v0 = ndisIfRegisterProviderInternal(&Src, &qword_1C00E7130, &qword_1C00E7130);
  if ( v0 )
  {
    v3 = v0;
    return NdisConvertNdisStatusToNtStatus(v3);
  }
  Src.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryLoopbackObject;
  Src.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))ndisIfSetObject;
  result = ndisIfRegisterProviderInternal(&Src, &qword_1C00E7128, &qword_1C00E7128);
  v2 = result;
  if ( (_DWORD)result )
  {
    NdisIfDeregisterProvider(&qword_1C00E7130);
    qword_1C00E7130 = 0LL;
    v3 = v2;
    return NdisConvertNdisStatusToNtStatus(v3);
  }
  return result;
}
