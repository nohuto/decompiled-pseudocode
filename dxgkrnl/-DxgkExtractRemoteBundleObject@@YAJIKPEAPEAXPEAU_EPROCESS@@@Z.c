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
