/*
 * XREFs of ndisLWMGetConfigurationStore @ 0x1C00F97C8
 * Callers:
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01012B8 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 * Callees:
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0102A48 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 */

__int64 __fastcall ndisLWMGetConfigurationStore(NetSetupPropertyBag *a1, _DWORD *a2)
{
  int v2; // ebx
  __int64 result; // rax
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( *((_BYTE *)qword_1C00E55C8 + 96) )
  {
    v5 = 0;
    result = NetSetupPropertyBag::ReadUint32(a1, (const struct _NETSETUPPROPKEY *)&unk_1C00CDA50, &v5);
    if ( (_DWORD)result )
      return result;
    LOBYTE(v2) = v5 != 1;
    *a2 = v2;
  }
  else
  {
    *a2 = 0;
  }
  return 0LL;
}
