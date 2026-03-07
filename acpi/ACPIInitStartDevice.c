__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, __int64),
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, __int64, __int64); // r14
  __int64 DeviceExtension; // rax
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r13
  _DWORD *v13; // r14
  _DWORD *v14; // rsi
  const char *v15; // rdi
  unsigned int v16; // r8d
  unsigned int v17; // edx
  _BYTE *v18; // rcx
  __int64 v19; // rax
  const char *v20; // rdx
  const char *v21; // rcx
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rcx
  const char *v25; // rax
  size_t v26; // r15
  void *Pool2; // rax
  void *v28; // r14
  __int64 v29; // rax
  const char *v30; // rdx
  const char *v31; // rcx
  void *v32; // rcx
  unsigned int v33; // esi
  void *v34; // rax
  void *v35; // r14
  __int64 v36; // rcx
  const char *v37; // rax
  char v38; // si
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // rcx
  const char *v42; // rax
  __int64 v43; // rcx
  const char *v44; // rax
  KIRQL v45; // al
  void *v46; // rcx
  KIRQL v47; // di
  void *v48; // rcx
  __int64 v49; // rax
  const char *v50; // rcx
  __int64 v51; // rcx
  const char *v52; // rax
  unsigned int v54; // ebx
  size_t v55; // [rsp+50h] [rbp-30h]
  __int128 v56; // [rsp+58h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+68h] [rbp-18h]
  void *v58; // [rsp+78h] [rbp-8h]
  _DWORD *Src; // [rsp+C8h] [rbp+48h]

  v56 = 0LL;
  v58 = 0LL;
  v5 = a4;
  *(_OWORD *)Size = 0LL;
  v6 = a3;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = 0LL;
  v10 = 0LL;
  v11 = DeviceExtension;
  v12 = *(_QWORD *)(DeviceExtension + 760);
  if ( a2 )
  {
    v13 = *(_DWORD **)(a2 + 8);
    v14 = *(_DWORD **)(a2 + 16);
    Src = v13;
    if ( v13 && *v13 == 1 )
    {
      v15 = (const char *)&unk_1C00622D0;
      if ( v14 && *v14 == 1 && _bittest64((const signed __int64 *)(DeviceExtension + 1008), 0x20u) )
      {
        v16 = v14[4];
        v17 = 0;
        if ( v16 )
        {
          v18 = v14 + 5;
          while ( *v18 != 2 || (v18[2] & 0x20) == 0 )
          {
            ++v17;
            v18 += 20;
            if ( v17 >= v16 )
              goto LABEL_12;
          }
          v26 = 20 * (v16 + 1);
          Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v26, 1399874369LL);
          v28 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, v14, v26);
            v32 = *(void **)(v11 + 680);
            if ( v32 )
              ExFreePoolWithTag(v32, 0);
            *(_QWORD *)(v11 + 680) = v28;
            v13 = Src;
          }
          else
          {
            v29 = *(_QWORD *)(v11 + 8);
            v30 = (const char *)&unk_1C00622D0;
            v31 = (const char *)&unk_1C00622D0;
            if ( (v29 & 0x200000000000LL) != 0 )
            {
              v30 = *(const char **)(v11 + 608);
              if ( (v29 & 0x400000000000LL) != 0 )
                v31 = *(const char **)(v11 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0x15u,
                (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
                v26,
                v11,
                v30,
                v31);
            v13 = Src;
          }
        }
        else
        {
LABEL_12:
          v19 = *(_QWORD *)(DeviceExtension + 8);
          v20 = (const char *)&unk_1C00622D0;
          v21 = (const char *)&unk_1C00622D0;
          if ( (v19 & 0x200000000000LL) != 0 )
          {
            v20 = *(const char **)(v11 + 608);
            if ( (v19 & 0x400000000000LL) != 0 )
              v21 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x11u,
              0x14u,
              (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
              v11,
              v20,
              v21);
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFEFFFFuLL);
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 1008), 0xFFFFFFFEFFFFFFFFuLL);
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 1008), 0xFFFFFFFFFFEFFFFFuLL);
        }
      }
      v9 = AMLIGetNamedChild(v12, 1397900127LL);
      v22 = AMLIGetNamedChild(v12, 1397904223LL);
      v10 = v22;
      if ( v9 && v22 )
      {
        v23 = AMLIEvalNameSpaceObject(v9, &v56, 0LL, 0LL);
        if ( v23 < 0 )
        {
          v24 = *(_QWORD *)(v11 + 8);
          v25 = (const char *)&unk_1C00622D0;
          if ( (v24 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v11 + 608);
            if ( (v24 & 0x400000000000LL) != 0 )
              v25 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x17u,
              (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
              v23,
              v11,
              v15,
              v25);
          goto LABEL_82;
        }
        if ( WORD1(v56) != 3 || !LODWORD(Size[1]) || !v58 )
        {
          v49 = *(_QWORD *)(v11 + 8);
          v50 = (const char *)&unk_1C00622D0;
          if ( (v49 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v11 + 608);
            if ( (v49 & 0x400000000000LL) != 0 )
              v50 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x18u,
              (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
              SBYTE2(v56),
              v11,
              v15,
              v50);
          dword_1C006F938 = 0;
          pszDest = 0;
          FreeDataBuffs(&v56, 1LL);
          v23 = -1073741823;
          goto LABEL_82;
        }
        v33 = 20 * (v13[4] + 1);
        v55 = v33;
        v34 = (void *)ExAllocatePool2(256LL, v33, 1399874369LL);
        v35 = v34;
        if ( !v34 )
        {
          v36 = *(_QWORD *)(v11 + 8);
          v37 = (const char *)&unk_1C00622D0;
          if ( (v36 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v11 + 608);
            if ( (v36 & 0x400000000000LL) != 0 )
              v37 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x19u,
              (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
              v33,
              v11,
              v15,
              v37);
          dword_1C006F938 = 0;
          pszDest = 0;
          FreeDataBuffs(&v56, 1LL);
LABEL_46:
          v23 = -1073741670;
LABEL_82:
          a3(v11, a4, (unsigned int)v23);
          if ( v9 )
            AMLIDereferenceHandleEx(v9);
          if ( v10 )
            AMLIDereferenceHandleEx(v10);
          return (unsigned int)v23;
        }
        memmove(v34, Src, v33);
        v38 = LOBYTE(Size[1]) + 40;
        v39 = ExAllocatePool2(64LL, (unsigned int)(LODWORD(Size[1]) + 40), 1332765505LL);
        v40 = v39;
        if ( !v39 )
        {
          v41 = *(_QWORD *)(v11 + 8);
          v42 = (const char *)&unk_1C00622D0;
          if ( (v41 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v11 + 608);
            if ( (v41 & 0x400000000000LL) != 0 )
              v42 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x1Au,
              (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
              v38,
              v11,
              v15,
              v42);
          dword_1C006F938 = 0;
          pszDest = 0;
          FreeDataBuffs(&v56, 1LL);
          ExFreePoolWithTag(v35, 0);
          goto LABEL_46;
        }
        *(_OWORD *)v39 = v56;
        *(_OWORD *)(v39 + 16) = *(_OWORD *)Size;
        *(_QWORD *)(v39 + 32) = v39 + 40;
        memmove((void *)(v39 + 40), v58, LODWORD(Size[1]));
        dword_1C006F938 = 0;
        pszDest = 0;
        FreeDataBuffs(&v56, 1LL);
        v23 = PnpCmResourcesToBiosResources(v11, v35, *(_QWORD *)(v40 + 32), *(unsigned int *)(v40 + 24));
        if ( v23 < 0 )
        {
          v43 = *(_QWORD *)(v11 + 8);
          v44 = (const char *)&unk_1C00622D0;
          if ( (v43 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v11 + 608);
            if ( (v43 & 0x400000000000LL) != 0 )
              v44 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x1Bu,
              (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
              v23,
              v11,
              v15,
              v44);
          ExFreePoolWithTag(v35, 0);
          ExFreePoolWithTag((PVOID)v40, 0);
          goto LABEL_82;
        }
        memmove(v35, Src, v55);
        v45 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v46 = *(void **)(v11 + 688);
        v47 = v45;
        if ( v46 )
          ExFreePoolWithTag(v46, 0);
        *(_QWORD *)(v11 + 688) = v40;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v47);
        v48 = *(void **)(v11 + 672);
        if ( v48 )
          ExFreePoolWithTag(v48, 0);
        *(_QWORD *)(v11 + 672) = v35;
      }
      else
      {
        v51 = *(_QWORD *)(v11 + 8);
        v52 = (const char *)&unk_1C00622D0;
        if ( (v51 & 0x200000000000LL) != 0 )
        {
          v15 = *(const char **)(v11 + 608);
          if ( (v51 & 0x400000000000LL) != 0 )
            v52 = *(const char **)(v11 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x16u,
            (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
            v11,
            v15,
            v52);
      }
      v5 = a4;
    }
    v6 = a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v11);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (*(_DWORD *)(v11 + 1008) & 0xC0000LL) == 0xC0000 && *(_DWORD *)(v11 + 384) == 1 )
  {
    v23 = 0;
    goto LABEL_82;
  }
  v54 = ACPIDeviceInternalDeviceRequest((_QWORD *)v11, 1LL, v6, v5, 4u);
  if ( v54 == -1073741802 )
    v54 = 259;
  if ( v9 )
    AMLIDereferenceHandleEx(v9);
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
  return v54;
}
