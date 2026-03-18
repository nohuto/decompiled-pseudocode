/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C02E9510
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C0188AE0 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C00041DC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00042E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046C0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000538C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0008088 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C016C7F0 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C017D4B8 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0180B78 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0180C44 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0180EE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0188AA4 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0195B14 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E8D34 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C01EABA0 (DxgkGetGlobalRawmodeFlag.c)
 *     DxgkNotifyDisplayChange @ 0x1C0356BDC (DxgkNotifyDisplayChange.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C03BB0A0 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _KTHREAD **Current; // rax
  struct DXGPROCESS *v5; // r14
  struct DXGDEVICE *v7; // rbx
  int v8; // ebx
  __int64 v9; // r15
  __int64 v10; // r9
  unsigned __int16 v11; // bx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdi
  int v16; // edx
  const wchar_t *v17; // r9
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // r9d
  unsigned int v24; // edx
  __int64 v25; // r8
  unsigned __int16 i; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v27; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v28; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID v29; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v30[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v31[8]; // [rsp+80h] [rbp-80h] BYREF
  DXGPUSHLOCK *v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+90h] [rbp-70h]
  _BYTE v34[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-20h]
  _BYTE v36[432]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v37[10]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v38[8]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v39[64]; // [rsp+318h] [rbp+218h] BYREF
  _BYTE v40[88]; // [rsp+358h] [rbp+258h] BYREF

  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v5 = (struct DXGPROCESS *)Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 3383LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 3383LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v28, v3, Current, &v27);
  v7 = v27;
  if ( v27 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v27);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31, (struct _KTHREAD **)v7 + 18, 0);
    DXGPUSHLOCK::AcquireExclusive(v32);
    v33 = 2;
    v9 = *((_QWORD *)v7 + 235);
    if ( !v9 )
    {
      WdLogSingleEntry1(2LL, v3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DisableDWMVirtualModeOnVidPnSource function cannot be called on a render only device (0x%I64x)",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = -1073741637;
      goto LABEL_34;
    }
    MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
      (MANAGEDPRIMARIESTRACKER *)v36,
      *(struct ADAPTER_DISPLAY **)(v9 + 2920),
      v5);
    MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v36);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v7, 1, v10, 0);
    v8 = COREDEVICEACCESS::AcquireExclusive((__int64)v38, 2LL);
    if ( v8 >= 0 )
    {
      v29 = *(struct _LUID *)(v9 + 404);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v38);
      v11 = 8;
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v34, 8u, 0);
      for ( i = 8; ; v11 = i )
      {
        if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v34, v11, v12, v13) < v11 )
        {
          v15 = v11;
          WdLogSingleEntry1(6LL, v11);
          v16 = 262145;
          v17 = L"Failed to reserve the memory for active topology. (RequiredPathsCount = %I64u)";
          v8 = -1073741801;
          goto LABEL_31;
        }
        v14 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v34, 0, 0, 0, &i);
        v8 = v14;
        if ( v14 != -1073741789 )
          break;
      }
      if ( v14 < 0 )
      {
        v15 = v14;
        WdLogSingleEntry1(2LL, v14);
        v16 = 0x40000;
        v17 = L"Failed to set active topology, Status = 0x%I64x)";
LABEL_31:
        DxgkLogInternalTriageEvent(0LL, v16, -1, (__int64)v17, v15, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_32;
      }
      v18 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v34, &v29, a2);
      v8 = v18;
      if ( v18 < 0 )
      {
        v15 = v18;
        WdLogSingleEntry1(2LL, v18);
        v16 = 0x40000;
        v17 = L"Failed to set physical mode/IHV clone, (Status = 0x%I64x)";
        goto LABEL_31;
      }
      v19 = 0;
      if ( DxgkGetGlobalRawmodeFlag() )
        v19 = 0x20000;
      v20 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v34, v19, 0);
      v8 = v20;
      if ( v20 < 0 )
      {
        v15 = v20;
        WdLogSingleEntry1(2LL, v20);
        v16 = 0x40000;
        v17 = L"Failed to functionalize the new topology, (Status = 0x%I64x)";
        goto LABEL_31;
      }
      memset(v37, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v37[1]);
      v37[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v37[3]) = 57;
      LOBYTE(v37[6]) = -1;
      v21 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v34, v19, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v37);
      v8 = v21;
      if ( v21 < 0 )
      {
        v15 = v21;
        WdLogSingleEntry1(2LL, v21);
        v16 = 0x40000;
        v17 = L"Failed to apply the new topology, (Status = 0x%I64x)";
        goto LABEL_31;
      }
      v22 = *(_QWORD *)(v35 + 48);
      if ( v22 )
      {
        v23 = *(_DWORD *)(v35 + 40);
        v24 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            v25 = 340LL * v24;
            if ( *(_DWORD *)(v25 + v22 + 88) || *(_DWORD *)(v25 + v22 + 92) || *(_DWORD *)(v25 + v22 + 124) )
              break;
            if ( ++v24 >= v23 )
              goto LABEL_32;
          }
          DxgkNotifyDisplayChange(0LL);
        }
      }
LABEL_32:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v34);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v40);
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v36);
LABEL_34:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    goto LABEL_36;
  }
  WdLogSingleEntry1(2LL, v3);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid hDevice (0x%I64x) specified", v3, 0LL, 0LL, 0LL, 0LL);
  v8 = -1073741811;
LABEL_36:
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v28 + 2), v28);
  }
  return (unsigned int)v8;
}
