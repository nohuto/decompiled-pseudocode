/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0172ECC
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C00E3820 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0001EDC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000278C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00E432C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00EB6DC (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C013A304 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C013DE80 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C013DEF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01486EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0149090 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C016D0D0 (DxgkGetGlobalRawmodeFlag.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C01731E0 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C02A06B4 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v5; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int16 v19; // bx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int Active; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // edi
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // r9d
  unsigned int v33; // edx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int16 v42[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v43; // [rsp+40h] [rbp-C8h] BYREF
  struct DXGDEVICE *v44; // [rsp+48h] [rbp-C0h] BYREF
  struct _LUID v45; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v46[2]; // [rsp+58h] [rbp-B0h] BYREF
  DXGPUSHLOCK *v47[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v48; // [rsp+78h] [rbp-90h]
  _BYTE v49[64]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-40h]
  _BYTE v51[432]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v52[10]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v53[8]; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v54[64]; // [rsp+2F0h] [rbp+1E8h] BYREF
  _BYTE v55[88]; // [rsp+330h] [rbp+228h] BYREF

  v4 = a2;
  v5 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v9 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    v43 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, (unsigned int)v5, Current, &v43);
    v12 = (__int64)v43;
    if ( v43 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46, v43);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47, (struct _KTHREAD **)(v12 + 144), 0);
      DXGPUSHLOCK::AcquireExclusive(v47[1]);
      v48 = 2;
      v15 = *(_QWORD *)(v12 + 1848);
      if ( v15 )
      {
        MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
          (MANAGEDPRIMARIESTRACKER *)v51,
          *(struct ADAPTER_DISPLAY **)(v15 + 2696),
          v9);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v51, v16);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, v12, 1, v17, 0);
        LODWORD(v12) = COREDEVICEACCESS::AcquireExclusive((__int64)v53, 2LL);
        if ( (int)v12 >= 0 )
        {
          v45 = *(struct _LUID *)(v15 + 316);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v53, v18);
          v19 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v49, 8u, 0);
          for ( v42[0] = 8; ; v19 = v42[0] )
          {
            if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v49, v19) < v19 )
            {
              v41 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
              *(_QWORD *)(v41 + 24) = v19;
              WdLogEvent5_WdLowResource(v41);
              LODWORD(v12) = -1073741801;
              goto LABEL_20;
            }
            Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v49, 0, 0, 0, v42);
            v12 = Active;
            if ( Active != -1073741789 )
              break;
          }
          if ( Active < 0 )
            goto LABEL_32;
          v27 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v49, &v45, v4);
          v12 = v27;
          if ( v27 < 0 )
            goto LABEL_32;
          v28 = 0;
          if ( DxgkGetGlobalRawmodeFlag(v26, v25) )
            v28 = 0x20000;
          v29 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v49, v28, 0);
          v12 = v29;
          if ( v29 < 0
            || (memset(v52, 0, 0x48uLL),
                EtwActivityIdControl(3u, (LPGUID)&v52[1]),
                v52[8] = MEMORY[0xFFFFF78000000014],
                LODWORD(v52[3]) = 57,
                LOBYTE(v52[6]) = -1,
                v30 = CCD_TOPOLOGY::ApplyTopology(
                        (CCD_TOPOLOGY *)v49,
                        v28,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v52),
                v12 = v30,
                v30 < 0) )
          {
LABEL_32:
            v40 = WdLogNewEntry5_WdError(v26, v25);
            *(_QWORD *)(v40 + 24) = v12;
            WdLogEvent5_WdError(v40);
          }
          else
          {
            v31 = *(_QWORD *)(v50 + 40);
            if ( v31 )
            {
              v32 = *(_DWORD *)(v50 + 36);
              v33 = 0;
              if ( v32 )
              {
                while ( 1 )
                {
                  v34 = 336LL * v33;
                  if ( *(_DWORD *)(v34 + v31 + 88) || *(_DWORD *)(v34 + v31 + 92) || *(_DWORD *)(v34 + v31 + 124) )
                    break;
                  if ( ++v33 >= v32 )
                    goto LABEL_20;
                }
                DxgkNotifyDisplayChange(0LL);
              }
            }
          }
LABEL_20:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v49);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v55);
        COREACCESS::~COREACCESS((COREACCESS *)v54);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v51, v35);
      }
      else
      {
        v39 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v39 + 24) = v5;
        WdLogEvent5_WdError(v39);
        LODWORD(v12) = -1073741637;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
      if ( v46[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
    }
    else
    {
      v38 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v38 + 24) = v5;
      WdLogEvent5_WdError(v38);
      LODWORD(v12) = -1073741811;
    }
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    }
    return (unsigned int)v12;
  }
  else
  {
    v37 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v37 + 24) = 3311LL;
    WdLogEvent5_WdError(v37);
    return 3221225485LL;
  }
}
