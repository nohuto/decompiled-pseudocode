/*
 * XREFs of ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0346B84
 * Callers:
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02DC3D0 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0016980 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0340E60 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0340EF4 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0346DF8 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkExtractRemoteBundleObject(__int64 a1, unsigned int a2, void **a3, struct _EPROCESS *a4)
{
  __int64 v5; // rbp
  struct DXGPROCESS *Current; // rdi
  unsigned int v9; // ebx
  int v10; // ecx
  struct DXGVAILOBJECT *v11; // rsi
  __int64 v12; // rax
  struct _KTHREAD **v13; // rbx
  int BundleObject; // eax
  _BYTE v16[16]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-38h] BYREF
  DXGPUSHLOCK *v18; // [rsp+68h] [rbp-30h]
  int v19; // [rsp+70h] [rbp-28h]

  v5 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    KeEnterCriticalRegion();
    v10 = *((_DWORD *)Current + 106);
    v11 = 0LL;
    if ( (v10 & 0x80) != 0 )
    {
      if ( (v10 & 0x100) != 0 )
        v12 = *((_QWORD *)Current + 76);
      else
        v12 = (unsigned __int64)Current & -(__int64)((v10 & 0x80) != 0);
      v13 = *(struct _KTHREAD ***)(v12 + 608);
      if ( !v13 )
        goto LABEL_14;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, v13 + 8, 0);
      DXGPUSHLOCK::AcquireExclusive(v18);
      v19 = 2;
      v11 = DXGVIRTUALMACHINE::ReferenceVailObject(v13);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGPROCESS *)((char *)Current + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
      if ( *((_QWORD *)Current + 74) )
        v11 = DXGPROCESS::ReferenceVailObject((struct _KTHREAD **)Current);
      if ( v16[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
    }
    if ( v11 )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v11 + 11) )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v11 + 14) + 64LL)) )
        {
          BundleObject = DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
                           *((DXG_HOST_REMOTEOBJECTCHANNEL **)v11 + 15),
                           v5,
                           a2,
                           a3,
                           a4);
          v9 = BundleObject;
          if ( BundleObject < 0 )
            WdLogSingleEntry2(3LL, v5, BundleObject);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v11 + 14) + 64LL));
        }
        else
        {
          v9 = -2147483611;
          WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v11 + 11);
      }
      else
      {
        v9 = -2147483611;
        WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
      }
      DxgkCompositionObject::Release(v11);
      goto LABEL_24;
    }
LABEL_14:
    v9 = -1073741811;
    WdLogSingleEntry2(3LL, Current, -1073741811LL);
LABEL_24:
    KeLeaveCriticalRegion();
    return v9;
  }
  v9 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid process context. Returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v9;
}
