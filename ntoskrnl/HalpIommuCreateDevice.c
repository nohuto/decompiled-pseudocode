/*
 * XREFs of HalpIommuCreateDevice @ 0x140822B28
 * Callers:
 *     HalpIommuUnblockDevice @ 0x140516330 (HalpIommuUnblockDevice.c)
 *     IommuCreateAtsDevice @ 0x14051F820 (IommuCreateAtsDevice.c)
 *     IommuMapDevice @ 0x140520BC0 (IommuMapDevice.c)
 *     IommuDomainAttachDevice @ 0x140523210 (IommuDomainAttachDevice.c)
 *     IommuDeviceCreate @ 0x140820F90 (IommuDeviceCreate.c)
 * Callees:
 *     ExInitializePushLock @ 0x140238200 (ExInitializePushLock.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExRundownCompleted @ 0x140294280 (ExRundownCompleted.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     HalpIommuCloneDeviceId @ 0x14038D3A8 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateDeviceInternal @ 0x14038D414 (HalpIommuCreateDeviceInternal.c)
 *     HalpIommuCheckDpptException @ 0x14038D4B4 (HalpIommuCheckDpptException.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1403AF2F4 (HalpIommuQueryAcpiDeviceMapping.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IommupHvRegisterDeviceId @ 0x140522F60 (IommupHvRegisterDeviceId.c)
 *     IommupHvUnregisterDeviceId @ 0x14052312C (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x14067175C (IidAreIdsStrictlyEqual.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x140822E44 (IommupDeviceEnablePasidTaggedDma.c)
 *     IommupDeviceGetPasidSettings @ 0x140822F74 (IommupDeviceGetPasidSettings.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140930C20 (IommupDeviceDisablePasidTaggedDma.c)
 */

__int64 __fastcall HalpIommuCreateDevice(_DWORD *Src, void *a2, __int64 a3, __int32 a4, __int64 *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  char v8; // r13
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 *v13; // r11
  __int64 v14; // rax
  char v15; // r13
  __int64 v16; // rcx
  int AcpiDeviceMapping; // ebx
  void *v18; // rax
  bool v19; // zf
  __int64 v20; // r8
  ULONG_PTR *v21; // rcx
  void (__fastcall *v22)(ULONG_PTR, _DWORD *, __int64, __int64 *); // rax
  PVOID v23; // rbx
  __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 *v26; // rax
  char v27; // al
  __int64 v29; // r8
  int v30; // ecx
  int v31; // edx
  int v32; // ecx
  int v33; // ecx
  bool v34; // al
  _BYTE *v35; // rcx
  __int64 *v36; // rax
  void *v37; // rcx
  __int64 v38; // rdx
  char v39; // [rsp+30h] [rbp-50h] BYREF
  char v40; // [rsp+31h] [rbp-4Fh] BYREF
  char v41; // [rsp+32h] [rbp-4Eh] BYREF
  char v42; // [rsp+33h] [rbp-4Dh]
  __int64 v43; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+40h] [rbp-40h] BYREF
  __int64 v45; // [rsp+48h] [rbp-38h] BYREF
  ULONG_PTR *v46; // [rsp+50h] [rbp-30h] BYREF
  __int64 v47; // [rsp+58h] [rbp-28h] BYREF
  __int128 Srca; // [rsp+60h] [rbp-20h] BYREF
  __int64 v49; // [rsp+70h] [rbp-10h]
  _DWORD *v50; // [rsp+C0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h]
  __int64 v52; // [rsp+D0h] [rbp+50h]

  v52 = a3;
  Object = a2;
  v50 = Src;
  v5 = Src;
  v47 = 0LL;
  v6 = 0LL;
  v43 = 0LL;
  v7 = 0LL;
  v46 = 0LL;
  v8 = 0;
  v45 = 0LL;
  v44 = 0LL;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  Srca = 0LL;
  v49 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v12 = HalpIommuDeviceCreatedList;
  v13 = &HalpIommuDeviceCreatedList;
  while ( 1 )
  {
    if ( (__int64 *)v12 == v13 )
    {
      v14 = HalpMmAllocCtxAlloc(v11, 40LL);
      v12 = v14;
      if ( !v14 )
      {
        AcpiDeviceMapping = -1073741670;
        goto LABEL_19;
      }
      *(_OWORD *)v14 = 0LL;
      *(_OWORD *)(v14 + 16) = 0LL;
      *(_QWORD *)(v14 + 32) = 0LL;
      v15 = 1;
      AcpiDeviceMapping = HalpIommuCloneDeviceId(v5, (_QWORD *)(v14 + 16));
      if ( AcpiDeviceMapping < 0 )
        goto LABEL_55;
      v18 = (void *)HalpMmAllocCtxAlloc(v16, 416LL);
      v7 = (__int64)v18;
      if ( !v18 )
      {
        AcpiDeviceMapping = -1073741670;
LABEL_66:
        v38 = *(_QWORD *)(v12 + 16);
        if ( v38 )
          HalpMmAllocCtxFree(v16, v38);
        HalpMmAllocCtxFree(v16, v12);
LABEL_69:
        if ( v6 )
          HalpMmAllocCtxFree(v16, v6);
        goto LABEL_19;
      }
      memset(v18, 0, 0x1A0uLL);
      v19 = HalpHvIommu == 0;
      *(_QWORD *)(v12 + 24) = v7;
      *(_DWORD *)(v7 + 388) = a4;
      *(_DWORD *)(v7 + 392) = a4;
      if ( v19 )
      {
        AcpiDeviceMapping = HalpIommuCreateDeviceInternal((__int64)v5, v7, &v45, &v46);
        if ( AcpiDeviceMapping < 0 )
          goto LABEL_55;
        v21 = v46;
        *(_QWORD *)(v7 + 40) = v45;
        *(_QWORD *)(v7 + 32) = v21;
        v22 = (void (__fastcall *)(ULONG_PTR, _DWORD *, __int64, __int64 *))v21[26];
        if ( v22 )
        {
          LOBYTE(v20) = 1;
          v22(v21[2], v5, v20, &v47);
          *(_QWORD *)(v7 + 48) = v47;
        }
        ExInitializePushLock((PEX_RUNDOWN_REF)(v7 + 64));
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v7 + 64));
        ExRundownCompleted((PEX_RUNDOWN_REF)(v7 + 64));
      }
      else
      {
        if ( *v5 == 2 )
        {
          AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping((__int64)v5, (__int64)&Srca);
          if ( AcpiDeviceMapping < 0 )
            goto LABEL_55;
          AcpiDeviceMapping = HalpIommuCloneDeviceId(&Srca, &v50);
          if ( AcpiDeviceMapping < 0 )
            goto LABEL_55;
          v5 = v50;
          v6 = (__int64)v50;
          v43 = (__int64)v50;
        }
        AcpiDeviceMapping = IommupHvRegisterDeviceId((__int64)v5, &v44);
        if ( AcpiDeviceMapping < 0 )
          goto LABEL_55;
        *(_QWORD *)(v7 + 32) = v44;
      }
      v42 = 1;
      if ( v6 )
      {
LABEL_14:
        v23 = Object;
        *(_QWORD *)v7 = v6;
        if ( v23 )
          ObfReferenceObjectWithTag(v23, 0x446C6148u);
        v24 = v52;
        *(_QWORD *)(v7 + 376) = 0LL;
        *(_QWORD *)(v7 + 368) = v7 + 360;
        *(_QWORD *)(v7 + 360) = v7 + 360;
        *(_DWORD *)(v7 + 352) = -1;
        *(_QWORD *)(v7 + 8) = v23;
        AcpiDeviceMapping = IommupDeviceEnablePasidTaggedDma(v7, v24);
        if ( AcpiDeviceMapping >= 0 )
        {
          *(_BYTE *)(v7 + 80) = HalpIommuCheckDpptException(v5);
          v25 = a5;
          *(_DWORD *)(v12 + 32) = 1;
          *v25 = v7;
          v26 = (__int64 *)qword_140C61AD8;
          if ( *(__int64 **)qword_140C61AD8 != &HalpIommuDeviceCreatedList )
            __fastfail(3u);
          *(_QWORD *)v12 = &HalpIommuDeviceCreatedList;
          *(_QWORD *)(v12 + 8) = v26;
          *v26 = v12;
          qword_140C61AD8 = v12;
          goto LABEL_19;
        }
LABEL_55:
        if ( v7 )
        {
          if ( *(_BYTE *)(v7 + 266) )
            IommupDeviceDisablePasidTaggedDma(v7);
          v37 = *(void **)(v7 + 8);
          if ( v37 )
            ObfDereferenceObjectWithTag(v37, 0x446C6148u);
          if ( v42 )
          {
            if ( HalpHvIommu )
              IommupHvUnregisterDeviceId();
            else
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v7 + 32) + 96LL))(
                *(_QWORD *)(*(_QWORD *)(v7 + 32) + 16LL),
                *(_QWORD *)(v7 + 40),
                0LL);
          }
          HalpMmAllocCtxFree((__int64)v37, v7);
        }
        if ( !v15 )
          goto LABEL_69;
        goto LABEL_66;
      }
      AcpiDeviceMapping = HalpIommuCloneDeviceId(v5, &v43);
      if ( AcpiDeviceMapping >= 0 )
      {
        v6 = v43;
        goto LABEL_14;
      }
LABEL_53:
      v6 = v43;
      goto LABEL_55;
    }
    if ( IidAreIdsStrictlyEqual(*(int **)(v12 + 16), (__int64)v5) )
      break;
    v12 = *(_QWORD *)v12;
  }
  v29 = *(_QWORD *)(v12 + 24);
  v30 = *(_DWORD *)(v29 + 392);
  v31 = *(_DWORD *)(v29 + 388);
  if ( v30 == a4 )
    goto LABEL_36;
  if ( !v30 )
  {
LABEL_29:
    v34 = a4 != 1;
    if ( a4 == 2 && v31 != 2 )
      goto LABEL_32;
LABEL_31:
    if ( !v34 )
      goto LABEL_32;
    goto LABEL_36;
  }
  v32 = v30 - 1;
  if ( !v32 )
  {
    if ( a4 != 2 )
      goto LABEL_32;
    if ( v31 == 2 )
      goto LABEL_36;
    v34 = 0;
    goto LABEL_31;
  }
  v33 = v32 - 1;
  if ( v33 )
  {
    if ( v33 == 1 )
      goto LABEL_29;
LABEL_32:
    AcpiDeviceMapping = -1073741637;
    goto LABEL_19;
  }
LABEL_36:
  _InterlockedExchange((volatile __int32 *)(v29 + 392), a4);
  AcpiDeviceMapping = IommupDeviceGetPasidSettings(a3, &v39, &v40, &v41);
  if ( AcpiDeviceMapping < 0 )
  {
    v15 = 0;
    goto LABEL_53;
  }
  if ( v40 || v39 )
    v8 = 1;
  v35 = *(_BYTE **)(v12 + 24);
  if ( v35[266] != v8 || v35[265] != v39 || v35[264] != v41 )
    goto LABEL_32;
  v36 = a5;
  ++*(_DWORD *)(v12 + 32);
  AcpiDeviceMapping = 0;
  *v36 = (__int64)v35;
LABEL_19:
  v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v27 & 2) != 0 && (v27 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  return (unsigned int)AcpiDeviceMapping;
}
