/*
 * XREFs of ACPIProcessorDeviceControl @ 0x1C008C570
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0004232 (ACPIIoctlEvalControlMethod.c)
 *     ACPIDispatchPowerIrpInvalid @ 0x1C00245C0 (ACPIDispatchPowerIrpInvalid.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002F468 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEnumChildren @ 0x1C002FA10 (ACPIIoctlEnumChildren.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C003A968 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNSObjectType @ 0x1C00483A8 (AMLIGetNSObjectType.c)
 */

__int64 __fastcall ACPIProcessorDeviceControl(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v15; // ebx
  __int64 *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  _OWORD v23[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-18h]

  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  if ( *(_BYTE *)(a2 + 64) )
    return ACPIDispatchPowerIrpInvalid(a1, (IRP *)a2);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = DeviceExtension;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(_DWORD *)(v6 + 24);
  if ( v9 > 0x32C01C )
  {
    v19 = v9 - 3325984;
    if ( !v19 )
      return (unsigned int)ACPIIoctlEnumChildren(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    v20 = v19 - 28;
    if ( !v20 )
      return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    v21 = v20 - 4;
    if ( v21 )
    {
      v22 = v21 - 4;
      if ( !v22 )
        return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
      if ( v22 != 4 )
        goto LABEL_28;
    }
    return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
  }
  if ( v9 == 3325980 )
    return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
  v10 = v9 - 2703744;
  if ( v10 )
  {
    v11 = v10 - 4;
    if ( !v11 )
      return (unsigned int)ACPIProcessorContainerGetLpiStatesIoctl((PIRP)a2, *(_QWORD *)(a2 + 184));
    v12 = v11 - 622204;
    if ( v12 )
    {
      v13 = v12 - 4;
      if ( !v13 || v13 == 20 )
        return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
LABEL_28:
      v15 = -1073741637;
      *(_DWORD *)(a2 + 48) = -1073741637;
      goto LABEL_22;
    }
    return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
  }
  if ( *(_DWORD *)(v6 + 8) >= 0xCu )
  {
    if ( (unsigned int)AMLIGetNSObjectType(*(_QWORD *)(DeviceExtension + 760)) == 12 )
    {
      v15 = AMLIEvalNameSpaceObject(v16, (__int64)v23, 0, 0LL);
      if ( v15 < 0 )
        goto LABEL_21;
      v17 = v24;
      *(_DWORD *)v8 = *(unsigned __int8 *)(v24 + 8);
      *(_DWORD *)(v8 + 4) = *(_DWORD *)v17;
      *(_BYTE *)(v8 + 8) = *(_BYTE *)(v17 + 4);
      AMLIFreeDataBuffs((__int64)v23);
    }
    else
    {
      v18 = *(_DWORD *)(v7 + 196);
      *(_DWORD *)(v8 + 4) = 0;
      v15 = 0;
      *(_DWORD *)v8 = v18;
      *(_BYTE *)(v8 + 8) = 0;
    }
    if ( *(_DWORD *)(v6 + 8) == 16 )
    {
      *(_DWORD *)(v8 + 12) = *(_DWORD *)(v7 + 192);
      *(_QWORD *)(a2 + 56) = 16LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = 12LL;
    }
    goto LABEL_21;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  v15 = -1073741820;
LABEL_21:
  *(_DWORD *)(a2 + 48) = v15;
LABEL_22:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v15;
}
