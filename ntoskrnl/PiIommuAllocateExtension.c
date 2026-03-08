/*
 * XREFs of PiIommuAllocateExtension @ 0x140840F4C
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407F84D0 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PipIommuRetrieveDeviceId @ 0x140841074 (PipIommuRetrieveDeviceId.c)
 *     PiIommuFreeExtension @ 0x14086135C (PiIommuFreeExtension.c)
 *     PnpTraceIommuDeviceProperties @ 0x140968EFC (PnpTraceIommuDeviceProperties.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiIommuAllocateExtension(__int64 a1, __int64 a2, ULONG_PTR *a3)
{
  __int64 Pool2; // rax
  ULONG_PTR v7; // rbx
  int DeviceId; // edi
  __int64 (__fastcall *v9)(_QWORD, unsigned int *); // rax
  char v10; // al
  char v11; // cl
  char v12; // dl
  char v13; // al
  __int64 result; // rax
  char v15; // cl
  char v16; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = 0;
  v16 = 0;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1685089872LL);
  v7 = Pool2;
  if ( !Pool2 )
  {
    DeviceId = -1073741670;
    goto LABEL_10;
  }
  DeviceId = PipIommuRetrieveDeviceId(a2, Pool2);
  if ( DeviceId < 0 )
    goto LABEL_14;
  v9 = *(__int64 (__fastcall **)(_QWORD, unsigned int *))(a2 + 56);
  if ( !v9 )
  {
    DeviceId = -1073741637;
    goto LABEL_14;
  }
  DeviceId = v9(*(_QWORD *)(a2 + 8), &v17);
  if ( DeviceId < 0 )
  {
LABEL_14:
    PiIommuFreeExtension(v7);
    v7 = 0LL;
    goto LABEL_10;
  }
  v10 = *(_BYTE *)(v7 + 16) ^ (*(_BYTE *)(v7 + 16) ^ (8 * (v17 >> 1))) & 8;
  *(_BYTE *)(v7 + 16) = v10;
  v11 = v10 ^ (v10 ^ (4 * v17)) & 4;
  *(_BYTE *)(v7 + 16) = v11;
  v12 = v11 ^ (v11 ^ (32 * (v17 >> 3))) & 0x20;
  *(_BYTE *)(v7 + 16) = v12;
  v13 = v12 ^ (v12 ^ (16 * (v17 >> 2))) & 0x10;
  *(_BYTE *)(v7 + 16) = v13;
  if ( (v13 & 0x24) != 0 )
    PnpTraceIommuDeviceProperties(a1, v17);
  DeviceId = (*(__int64 (__fastcall **)(_QWORD, char *))(HalIommuDispatch + 152))(*(_QWORD *)v7, &v16);
  if ( DeviceId >= 0 )
  {
    v15 = *(_BYTE *)(v7 + 16) ^ (*(_BYTE *)(v7 + 16) ^ (32 * v16)) & 0x40;
    *(_BYTE *)(v7 + 16) = v15;
    *(_BYTE *)(v7 + 16) = (v16 << 7) | v15 & 0x7F;
  }
  else
  {
    DeviceId = 0;
  }
  *(_DWORD *)(v7 + 20) = 2;
LABEL_10:
  result = (unsigned int)DeviceId;
  *a3 = v7;
  return result;
}
