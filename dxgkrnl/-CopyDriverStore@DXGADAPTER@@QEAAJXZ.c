/*
 * XREFs of ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0305F44
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02B3024 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     Feature_CopyDriverToSystem32__private_ReportDeviceUsage @ 0x1C00260C8 (Feature_CopyDriverToSystem32__private_ReportDeviceUsage.c)
 *     Feature_NonDXKryptonGpuSupport__private_ReportDeviceUsage @ 0x1C002612C (Feature_NonDXKryptonGpuSupport__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C003F868 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003F8DC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C02CB87C (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z @ 0x1C0306B40 (-DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1C0306C8C (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0306E54 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 *     ?VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORMATION@@@Z @ 0x1C0384FB4 (-VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORM.c)
 *     ?VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0385558 (-VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DX.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C0387D4C (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 */

__int64 __fastcall DXGADAPTER::CopyDriverStore(DXGADAPTER *this)
{
  __int64 v2; // rsi
  unsigned __int16 *v3; // r14
  DXG_GUEST_VIRTUALGPU_VMBUS *v5; // r15
  unsigned int v6; // r9d
  int v7; // eax
  __int64 v8; // rdi
  const wchar_t *v9; // r9
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  unsigned int v14; // r9d
  int v15; // eax
  int v16; // eax
  int NextHardLink; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  WCHAR *v20; // rax
  __int64 v21; // r8
  WCHAR *v22; // rcx
  __int64 v23; // rax
  char *v24; // r9
  WCHAR v25; // r8
  WCHAR *v26; // rax
  size_t *NtSystemRoot; // rax
  __int64 v28; // rdx
  unsigned __int16 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int16 *v32; // rcx
  __int64 v33; // rax
  char *v34; // r9
  unsigned __int16 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rax
  char *v38; // r9
  unsigned __int16 v39; // r8
  unsigned __int16 *v40; // rax
  int v41; // eax
  __int64 v42; // rbx
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-A8h] BYREF
  struct _D3DKMT_QUERYADAPTERINFO v45; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v46[138]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v47[520]; // [rsp+2B0h] [rbp+1A8h] BYREF
  size_t SourceString[66]; // [rsp+4B8h] [rbp+3B0h] BYREF
  unsigned __int16 v49[264]; // [rsp+6C8h] [rbp+5C0h] BYREF
  size_t v50[66]; // [rsp+8D8h] [rbp+7D0h] BYREF
  size_t v51[66]; // [rsp+AE8h] [rbp+9E0h] BYREF

  DXGGLOBAL::GetGlobal();
  v2 = -1LL;
  v3 = 0LL;
  Handle = (HANDLE)-1LL;
  if ( *((_BYTE *)this + 210) )
  {
    WdLogSingleEntry1(4LL, 1695LL);
    return 0LL;
  }
  Feature_CopyDriverToSystem32__private_ReportDeviceUsage();
  memset(&v46[1], 0, 0x224uLL);
  memset(v47, 0, sizeof(v47));
  v46[0] = 3;
  v5 = (DXGADAPTER *)((char *)this + 4472);
  v45.pPrivateDriverData = v46;
  v45.hAdapter = 0;
  *(_QWORD *)&v45.PrivateDriverDataSize = 1072LL;
  v45.Type = KMTQAITYPE_QUERYREGISTRY;
  v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4472), 0LL, &v45, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = TranslateUmdFileNameToVm((size_t *)&v46[136], 0x104u, &v46[134]);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = 1731LL;
LABEL_8:
      WdLogSingleEntry2(2LL, v8, v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"TranslateUmdFileNameToVm failed: 0x%I64x",
        v8,
        v11,
        0LL,
        0LL,
        0LL);
      goto LABEL_58;
    }
    RtlStringCbCopyW((unsigned __int16 *)SourceString, 0x208uLL, (size_t *)L"\\??\\");
    RtlStringCbCatW((unsigned __int16 *)SourceString, v12, (size_t *)&v46[136]);
    if ( (int)DxgkpCreateFile((unsigned __int16 *)SourceString, 1u, 0x80u, 0x20u, 1u, &Handle) < 0 )
    {
      WdLogSingleEntry1(2LL, 1764LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver image does not exists in the VM",
        1764LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v2 = (__int64)Handle;
      LODWORD(v8) = -1073741823;
      goto LABEL_58;
    }
    ZwClose(Handle);
    v2 = -1LL;
    if ( *((_DWORD *)this + 721) == 2 )
      DxgkpDeleteFile((PCWSTR)SourceString);
    v13 = (unsigned __int16 *)operator new[](0x208uLL, 0x4B677844u, 256LL);
    v3 = v13;
    if ( !v13 )
    {
      LODWORD(v8) = -1073741801;
      goto LABEL_58;
    }
    RtlStringCbCopyW(v13, 0x208uLL, SourceString);
    v46[0] = 2;
    v45.pPrivateDriverData = v46;
    v45.hAdapter = 0;
    *(_QWORD *)&v45.PrivateDriverDataSize = 1072LL;
    v45.Type = KMTQAITYPE_QUERYREGISTRY;
    v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(v5, 0LL, &v45, v14);
    v8 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(2LL, v15);
      v9 = L"D3DDDI_QUERYREGISTRY_DRIVERSTOREPATH failed: 0x%I64x";
      goto LABEL_5;
    }
    v16 = TranslateUmdFileNameToVm((size_t *)&v46[136], 0x104u, &v46[134]);
    v8 = v16;
    if ( v16 < 0 )
    {
      v11 = 1793LL;
      goto LABEL_8;
    }
    Feature_NonDXKryptonGpuSupport__private_ReportDeviceUsage();
    LODWORD(Handle) = 0;
    v44 = 0;
    NextHardLink = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
                     v5,
                     (unsigned __int16 *const)v51,
                     (unsigned __int16 *const)v50,
                     (enum DXGKP_HARDLINKTYPE *)&Handle,
                     (enum DXGKP_HARDLINKOVERWRITETYPE *)&v44);
    if ( NextHardLink == -2147483642 )
    {
LABEL_56:
      LODWORD(v8) = 0;
      goto LABEL_58;
    }
    while ( 1 )
    {
      if ( NextHardLink < 0 )
        goto LABEL_56;
      RtlStringCbCopyW((unsigned __int16 *)SourceString, 0x208uLL, (size_t *)L"\\??\\");
      RtlStringCbCatW((unsigned __int16 *)SourceString, v18, (size_t *)&v46[136]);
      v19 = 260LL;
      v20 = (WCHAR *)SourceString;
      do
      {
        if ( !*v20 )
          break;
        ++v20;
        --v19;
      }
      while ( v19 );
      v21 = (260 - v19) & -(__int64)(v19 != 0);
      if ( v19 )
      {
        v22 = (WCHAR *)SourceString + v21;
        v19 = 260 - v21;
        if ( v21 != 260 )
        {
          v23 = 2147483646LL;
          v24 = (char *)((char *)L"\\" - (char *)v22);
          do
          {
            if ( !v23 )
              break;
            v25 = *(WCHAR *)((char *)v22 + (_QWORD)v24);
            if ( !v25 )
              break;
            *v22 = v25;
            --v23;
            ++v22;
            --v19;
          }
          while ( v19 );
        }
        v26 = v22 - 1;
        if ( v19 )
          v26 = v22;
        *v26 = 0;
      }
      RtlStringCbCatW((unsigned __int16 *)SourceString, v19, v51);
      RtlStringCbCopyW(v49, 0x208uLL, (size_t *)L"\\??\\");
      NtSystemRoot = (size_t *)RtlGetNtSystemRoot();
      RtlStringCbCatW(v49, v28, NtSystemRoot);
      v29 = v49;
      v30 = 260LL;
      if ( (_DWORD)Handle )
      {
        do
        {
          if ( !*v29 )
            break;
          ++v29;
          --v30;
        }
        while ( v30 );
        v36 = (260 - v30) & -(__int64)(v30 != 0);
        if ( v30 )
        {
          v32 = &v49[v36];
          v30 = 260 - v36;
          if ( v36 != 260 )
          {
            v37 = 2147483646LL;
            v38 = (char *)((char *)L"\\Syswow64\\" - (char *)v32);
            do
            {
              if ( !v37 )
                break;
              v39 = *(unsigned __int16 *)((char *)v32 + (_QWORD)v38);
              if ( !v39 )
                break;
              *v32 = v39;
              --v37;
              ++v32;
              --v30;
            }
            while ( v30 );
          }
          goto LABEL_50;
        }
      }
      else
      {
        do
        {
          if ( !*v29 )
            break;
          ++v29;
          --v30;
        }
        while ( v30 );
        v31 = (260 - v30) & -(__int64)(v30 != 0);
        if ( v30 )
        {
          v32 = &v49[v31];
          v30 = 260 - v31;
          if ( v31 != 260 )
          {
            v33 = 2147483646LL;
            v34 = (char *)((char *)L"\\System32\\" - (char *)v32);
            do
            {
              if ( !v33 )
                break;
              v35 = *(unsigned __int16 *)((char *)v32 + (_QWORD)v34);
              if ( !v35 )
                break;
              *v32 = v35;
              --v33;
              ++v32;
              --v30;
            }
            while ( v30 );
          }
LABEL_50:
          v40 = v32 - 1;
          if ( v30 )
            v40 = v32;
          *v40 = 0;
        }
      }
      RtlStringCbCatW(v49, v30, v50);
      v41 = DxgkpPopulateFile(SourceString, v49, v44);
      if ( v41 < 0 )
      {
        v42 = v41;
        WdLogSingleEntry2(2LL, v41, 2046LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to populate file: 0x%I64x",
          v42,
          2046LL,
          0LL,
          0LL,
          0LL);
      }
      NextHardLink = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
                       v5,
                       (unsigned __int16 *const)v51,
                       (unsigned __int16 *const)v50,
                       (enum DXGKP_HARDLINKTYPE *)&Handle,
                       (enum DXGKP_HARDLINKOVERWRITETYPE *)&v44);
      if ( NextHardLink == -2147483642 )
        goto LABEL_56;
    }
  }
  WdLogSingleEntry1(2LL, v7);
  v9 = L"D3DDDI_QUERYREGISTRY_DRIVERIMAGEPATH failed: 0x%I64x";
LABEL_5:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
LABEL_58:
  operator delete(v3);
  if ( v2 != -1 )
    ZwClose((HANDLE)v2);
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDriverStoreFile(v5, (unsigned __int16 *const)SourceString, 0LL, 0LL, 0LL);
  if ( (int)v8 < 0 )
  {
    WdLogSingleEntry2(2LL, (int)v8, 2102LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to copy driver store files: 0x%I64x",
      (int)v8,
      2102LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v8;
}
