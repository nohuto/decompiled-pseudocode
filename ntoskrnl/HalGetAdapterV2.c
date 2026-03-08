/*
 * XREFs of HalGetAdapterV2 @ 0x1408215A0
 * Callers:
 *     HalpGetAdapter @ 0x1408212E4 (HalpGetAdapter.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140208C70 (ObReferenceObjectByPointer.c)
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14038CAF8 (HalpDmaFindAdapterByDeviceObject.c)
 *     HalpAddAdapterToList @ 0x14038CBA8 (HalpAddAdapterToList.c)
 *     HalpDmaIsAutomaticDomain @ 0x14038CD80 (HalpDmaIsAutomaticDomain.c)
 *     HalpDmaGetAdapterVersion @ 0x1403B4514 (HalpDmaGetAdapterVersion.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140821840 (HalpDmaAllocateChildAdapterV2.c)
 *     HalpGetCacheCoherency @ 0x140821A84 (HalpGetCacheCoherency.c)
 */

__int64 __fastcall HalGetAdapterV2(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v4; // cc
  char v5; // r15
  char v6; // al
  unsigned int v7; // r13d
  int v8; // ebx
  char v9; // bp
  char v10; // r12
  char v11; // al
  unsigned int v12; // esi
  unsigned int v13; // edx
  __int64 v14; // rbp
  __int64 v15; // r14
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int64 *AdapterByDeviceObject; // rax
  ULONG_PTR *v20; // rbp
  int AdapterVersion; // ebx
  bool IsAutomaticDomain; // r15
  __int64 ChildAdapterV2; // rax
  __int64 v24; // rbx
  char v25; // al
  unsigned int v27; // edx
  unsigned int v28; // r8d
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rax
  char v32; // [rsp+40h] [rbp-58h]
  PMDL Mdl; // [rsp+48h] [rbp-50h]
  char v34; // [rsp+A0h] [rbp+8h]
  __int64 v35; // [rsp+A8h] [rbp+10h]
  unsigned int v37; // [rsp+B8h] [rbp+20h] BYREF

  v35 = a2;
  v4 = *(_DWORD *)a1 <= 2u;
  LOBYTE(v37) = 0;
  Mdl = 0LL;
  if ( !v4 )
    return 0LL;
  if ( *(_BYTE *)(a1 + 4) && (*(_DWORD *)(a1 + 20) != 1 || *(_DWORD *)(a1 + 16) > 7u) )
  {
    v5 = 0;
    v34 = 0;
  }
  else
  {
    v5 = 1;
    v34 = 1;
    if ( !(*(unsigned __int8 (**)(void))(DmaDispatch + 8))() )
      return 0LL;
    a2 = v35;
  }
  v6 = *(_BYTE *)(a1 + 4);
  v7 = *(_DWORD *)(a1 + 32) & 0x7FFFFFFF;
  if ( v6 && *(_BYTE *)(a1 + 5) )
    *(_BYTE *)(a1 + 8) = 1;
  if ( *(_BYTE *)(a1 + 11) )
    *(_BYTE *)(a1 + 8) = 1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    if ( !v6 )
      goto LABEL_13;
  }
  v9 = 1;
LABEL_13:
  v32 = v9;
  if ( v5 || !a2 )
  {
    v10 = 1;
    goto LABEL_16;
  }
  HalpGetCacheCoherency(0LL, a2, &v37);
  v10 = v37;
  if ( !(_BYTE)v37 )
    return 0LL;
LABEL_16:
  v11 = *(_BYTE *)(a1 + 5);
  if ( v11 && v10 && ((unsigned __int64)HalpMaximumPhysicalMemoryAddress < 0x100000000LL || *(_BYTE *)(a1 + 11)) )
  {
    v12 = 0;
    v37 = 0;
    v13 = 0;
  }
  else
  {
    if ( v8 )
    {
      v27 = 64;
      if ( v11 )
        v27 = v10 != 0 ? 512 : 64;
    }
    else
    {
      v27 = 16;
    }
    v12 = (v7 >> 12) + ((v7 & 0xFFF) != 0) + 1;
    v37 = v12;
    v28 = v12;
    if ( v12 > v27 )
    {
      v12 = v27;
      v37 = v27;
      v28 = v27;
    }
    v29 = dword_140C63D20;
    v13 = v28;
    if ( !v8 )
      v29 = dword_140C63C40;
    if ( !v9 )
    {
      v30 = v29 >> 13;
      if ( v28 > v30 )
      {
        v12 = v30;
        v37 = v30;
        v13 = v30;
      }
    }
  }
  if ( !v10 )
  {
    Mdl = IoAllocateMdl(0LL, v13 << 12, 0, 0, 0LL);
    if ( !Mdl )
      return 0LL;
  }
  v14 = *(unsigned int *)(a1 + 16);
  v15 = v14;
  if ( v5 )
  {
    v24 = *(_QWORD *)(HalpDmaAdapters + 8 * v14);
    if ( v24 )
    {
      if ( v12 > *(_DWORD *)(v24 + 232) )
        *(_DWORD *)(v24 + 232) = v12;
      ObReferenceObjectByPointer((PVOID)v24, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_35;
    }
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  if ( v5 )
  {
    v24 = *(_QWORD *)(HalpDmaAdapters + 8 * v14);
    if ( v24 )
    {
      if ( v12 > *(_DWORD *)(v24 + 232) )
        *(_DWORD *)(v24 + 232) = v12;
      ObReferenceObjectByPointer((PVOID)v24, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_34;
    }
  }
  if ( v35 )
  {
    AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(v35);
    v20 = (ULONG_PTR *)AdapterByDeviceObject;
    if ( AdapterByDeviceObject )
    {
      AdapterVersion = HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject);
      IsAutomaticDomain = HalpDmaIsAutomaticDomain(v20[64]);
      ObfDereferenceObject(v20);
      if ( AdapterVersion != 2 && !IsAutomaticDomain )
        goto LABEL_70;
      v5 = v34;
    }
    LODWORD(v14) = v15;
  }
  LOBYTE(v18) = *(_BYTE *)(a1 + 5);
  LOBYTE(v17) = *(_BYTE *)(a1 + 11);
  LOBYTE(v16) = *(_BYTE *)(a1 + 8);
  ChildAdapterV2 = HalpDmaAllocateChildAdapterV2(v12, v16, v17, v18, *(_BYTE *)(a1 + 4), v32, v10, (__int64)&v37);
  v24 = ChildAdapterV2;
  if ( !ChildAdapterV2 )
    goto LABEL_70;
  *(_BYTE *)(ChildAdapterV2 + 524) = 1;
  if ( v5 )
  {
    *(_QWORD *)(HalpDmaAdapters + 8 * v15) = ChildAdapterV2;
    v31 = (*(__int64 (__fastcall **)(__int64))(DmaDispatch + 24))(a1);
    if ( v31 )
    {
      *(_QWORD *)(v24 + 432) = v31;
      ObReferenceObjectByPointer((PVOID)v24, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_31;
    }
LABEL_70:
    KeSetEvent(&HalpNewAdapter, 0, 0);
    return 0LL;
  }
LABEL_31:
  if ( v37 )
  {
    *(_DWORD *)(v24 + 232) = v37;
    v25 = 1;
  }
  else
  {
    *(_DWORD *)(v24 + 232) = (v7 >> 12) + ((v7 & 0xFFF) != 0) + 1;
    v25 = 0;
  }
  *(_BYTE *)(v24 + 440) = v25;
  *(_QWORD *)(v24 + 312) = 0LL;
LABEL_34:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_35:
  *(_BYTE *)(v24 + 444) = 0;
  if ( *(_DWORD *)a1 )
    *(_BYTE *)(v24 + 444) = *(_BYTE *)(a1 + 9);
  *a3 = *(_DWORD *)(v24 + 232);
  *(_QWORD *)(v24 + 304) = Mdl;
  if ( v5 )
  {
    *(_DWORD *)(v24 + 380) = v14;
  }
  else
  {
    *(_QWORD *)(v24 + 528) = v35;
    HalpAddAdapterToList(v24);
  }
  return v24;
}
