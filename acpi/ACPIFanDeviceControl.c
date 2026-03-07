__int64 __fastcall ACPIFanDeviceControl(ULONG_PTR a1, __int64 a2)
{
  char v2; // bp
  char v4; // r13
  unsigned int v5; // esi
  __int64 DeviceExtension; // rax
  _DWORD *v7; // r15
  void *v8; // r14
  __int64 v9; // rbx
  char v10; // dl
  const char *v11; // r8
  const char *v12; // rcx
  __int64 v13; // rax
  char v14; // dl
  const char *v15; // r8
  const char *v16; // rcx
  __int64 v17; // rax
  KIRQL v18; // dl
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rcx
  void *v22; // rax
  int v23; // r9d
  char v24; // dl
  const char *v25; // r8
  const char *v26; // rcx
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rdi
  __int64 v32; // rax
  __int64 **v33; // rcx
  int v34; // edx
  int v35; // r8d
  __int64 v36; // rcx
  void *v37; // rax
  int v39; // [rsp+20h] [rbp-68h]
  char v40; // [rsp+38h] [rbp-50h]
  char v41; // [rsp+40h] [rbp-48h]
  __int64 v42; // [rsp+48h] [rbp-40h]
  __int64 v43; // [rsp+50h] [rbp-38h]

  v2 = 0;
  v4 = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v5 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
    IofCompleteRequest((PIRP)a2, 0);
    return v5;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = *(_DWORD **)(a2 + 184);
  v8 = &unk_1C00622D0;
  v9 = DeviceExtension;
  if ( v7[6] == 2703936 )
  {
    v24 = 0;
    v25 = (const char *)&unk_1C00622D0;
    v26 = (const char *)&unk_1C00622D0;
    if ( DeviceExtension )
    {
      v27 = *(_QWORD *)(DeviceExtension + 8);
      v24 = v9;
      if ( (v27 & 0x200000000000LL) != 0 )
      {
        v25 = *(const char **)(v9 + 608);
        if ( (v27 & 0x400000000000LL) != 0 )
          v26 = *(const char **)(v9 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x1Au,
        (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
        a2,
        v24,
        v25,
        v26);
    if ( v7[2] < 0xCu )
    {
      v5 = -1073741789;
      goto LABEL_44;
    }
  }
  else
  {
    if ( v7[6] == 2703940 )
    {
      v14 = 0;
      v15 = (const char *)&unk_1C00622D0;
      v16 = (const char *)&unk_1C00622D0;
      if ( DeviceExtension )
      {
        v17 = *(_QWORD *)(DeviceExtension + 8);
        v14 = v9;
        if ( (v17 & 0x200000000000LL) != 0 )
        {
          v15 = *(const char **)(v9 + 608);
          if ( (v17 & 0x400000000000LL) != 0 )
            v16 = *(const char **)(v9 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x1Bu,
          (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
          a2,
          v14,
          v15,
          v16);
      v5 = v7[2] < 0x14u ? 0xC0000023 : 0;
      if ( (*(_BYTE *)(v9 + 320) & 0xF) != 0xF )
        v5 = -1073741808;
    }
    else
    {
      if ( v7[6] != 2720328 )
      {
        v5 = -1073741637;
LABEL_44:
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_DWORD *)(a2 + 48) = v5;
        IofCompleteRequest((PIRP)a2, 0);
        v28 = &unk_1C00622D0;
        if ( v9 )
        {
          v29 = *(_QWORD *)(v9 + 8);
          v2 = v9;
          if ( (v29 & 0x200000000000LL) != 0 )
          {
            v8 = *(void **)(v9 + 608);
            if ( (v29 & 0x400000000000LL) != 0 )
              v28 = *(void **)(v9 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v43 = (__int64)v28;
          v23 = 29;
          v42 = (__int64)v8;
          v41 = v2;
          v40 = v5;
          goto LABEL_50;
        }
        return v5;
      }
      v10 = 0;
      v11 = (const char *)&unk_1C00622D0;
      v12 = (const char *)&unk_1C00622D0;
      if ( DeviceExtension )
      {
        v13 = *(_QWORD *)(DeviceExtension + 8);
        v10 = v9;
        if ( (v13 & 0x200000000000LL) != 0 )
        {
          v11 = *(const char **)(v9 + 608);
          if ( (v13 & 0x400000000000LL) != 0 )
            v12 = *(const char **)(v9 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x1Cu,
          (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
          a2,
          v10,
          v11,
          v12);
      v4 = 1;
      v5 = v7[4] < 8u ? 0xC0000023 : 0;
      if ( (*(_BYTE *)(v9 + 320) & 0xF) != 0xF )
        v5 = -1073741808;
      if ( **(_DWORD **)(a2 + 24) >= *(_DWORD *)(*(_QWORD *)(a2 + 24) + 4LL) )
        v5 = -1073741811;
    }
    if ( v5 )
      goto LABEL_44;
  }
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 184));
  if ( *(char *)(v9 + 8) < 0 || (*(_DWORD *)(v9 + 192) & 0x10000000) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 184), v18);
    v5 = -1073741810;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = -1073741810;
    IofCompleteRequest((PIRP)a2, 0);
    v36 = *(_QWORD *)(v9 + 8);
    v37 = &unk_1C00622D0;
    if ( (v36 & 0x200000000000LL) != 0 )
    {
      v8 = *(void **)(v9 + 608);
      if ( (v36 & 0x400000000000LL) != 0 )
        v37 = *(void **)(v9 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v34,
        v35,
        30,
        v39,
        a2,
        v7[6],
        14,
        v9,
        (__int64)v8,
        (__int64)v37);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIFanCancelRequest);
    if ( *(_BYTE *)(a2 + 68) && _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 184), v18);
      v5 = -1073741536;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_DWORD *)(a2 + 48) = -1073741536;
      IofCompleteRequest((PIRP)a2, 0);
      v21 = *(_QWORD *)(v9 + 8);
      v22 = &unk_1C00622D0;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v8 = *(void **)(v9 + 608);
        if ( (v21 & 0x400000000000LL) != 0 )
          v22 = *(void **)(v9 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = (__int64)v22;
        v23 = 31;
        v42 = (__int64)v8;
        v41 = v9;
        v40 = 32;
LABEL_50:
        WPP_RECORDER_SF_qDDqss(WPP_GLOBAL_Control->DeviceExtension, v19, v20, v23, v39, a2, v7[6], v40, v41, v42, v43);
      }
    }
    else
    {
      v30 = *(_QWORD *)(a2 + 184);
      v5 = 259;
      v31 = (__int64 *)(a2 + 168);
      *(_BYTE *)(v30 + 3) |= 1u;
      if ( v4 )
        v32 = v9 + 232;
      else
        v32 = v9 + 216;
      v33 = *(__int64 ***)(v32 + 8);
      if ( *v33 != (__int64 *)v32 )
        __fastfail(3u);
      *v31 = v32;
      v31[1] = (__int64)v33;
      *v33 = v31;
      *(_QWORD *)(v32 + 8) = v31;
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 184), v18);
      if ( v4 )
        ACPISetDeviceWorker(v9, 256LL);
      ACPIFanLoop(v9, 0LL, 0LL);
    }
  }
  return v5;
}
