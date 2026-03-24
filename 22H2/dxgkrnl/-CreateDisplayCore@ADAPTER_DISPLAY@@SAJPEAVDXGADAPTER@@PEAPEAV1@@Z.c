/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0191440
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C018F684 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C00370B0 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C011DA44 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C018850C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C019C644 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0211CAC (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(unsigned __int64 a1, struct ADAPTER_DISPLAY **a2)
{
  struct DXGADAPTER *v3; // rbx
  __int64 v4; // rdx
  BOOL v5; // eax
  PVOID v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  ADAPTER_DISPLAY *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx

  v3 = (struct DXGADAPTER *)a1;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v17 + 24) = 4145LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v18 + 24) = 4146LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v4 = *((_QWORD *)v3 + 65);
  if ( !v4
    || !*((_QWORD *)v3 + 66)
    || !*((_QWORD *)v3 + 67)
    || !*((_QWORD *)v3 + 69)
    || !*((_QWORD *)v3 + 70) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(v3)
    || !*((_QWORD *)v3 + 71) && *((int *)v3 + 649) < 2200
    || !*((_QWORD *)v3 + 58)
    || !*((_QWORD *)v3 + 59) )
  {
    if ( *((int *)v3 + 649) < 1200 && (*((_DWORD *)v3 + 87) & 0x10) == 0
      || v4
      || *((_QWORD *)v3 + 66)
      || *((_QWORD *)v3 + 67)
      || *((_QWORD *)v3 + 68)
      || *((_QWORD *)v3 + 69)
      || *((_QWORD *)v3 + 70)
      || *((_QWORD *)v3 + 71)
      || *((_QWORD *)v3 + 57)
      || *((_QWORD *)v3 + 58)
      || *((_QWORD *)v3 + 59)
      || *((_QWORD *)v3 + 73)
      || *((_QWORD *)v3 + 72)
      || *((_QWORD *)v3 + 87)
      || *((_QWORD *)v3 + 136)
      || *((_QWORD *)v3 + 137)
      || *((_QWORD *)v3 + 138)
      || *((_QWORD *)v3 + 139) )
    {
      goto LABEL_73;
    }
    if ( *((_DWORD *)v3 + 362) || *((_DWORD *)v3 + 363) )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL);
      v19[3] = *((unsigned int *)v3 + 362);
      v24 = *((unsigned int *)v3 + 363);
      v20 = -1073741735;
      v19[5] = -1073741735LL;
      v19[4] = v24;
      goto LABEL_74;
    }
    goto LABEL_66;
  }
  if ( *((_QWORD *)v3 + 338) )
  {
    if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v3) )
    {
      v5 = *((_QWORD *)v3 + 117) == 0LL;
    }
    else
    {
      if ( !*((_QWORD *)v3 + 68) )
      {
LABEL_73:
        v19 = (_QWORD *)WdLogNewEntry5_WdError(a1, v4);
        v19[3] = v3;
        v20 = -1073741735;
        v19[4] = -1073741735LL;
LABEL_74:
        WdLogEvent5_WdError(v19);
        return v20;
      }
      v5 = 0;
    }
    if ( v5 || !*((_QWORD *)v3 + 73) || !*((_QWORD *)v3 + 57) && *((int *)v3 + 649) < 1200 )
      goto LABEL_73;
  }
  else
  {
    if ( !*((_QWORD *)v3 + 92) )
      goto LABEL_73;
    a1 = *((_QWORD *)v3 + 75) == 0LL;
    if ( (*((_QWORD *)v3 + 73) == 0LL) != (_DWORD)a1 )
      goto LABEL_73;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v4) + 24) = v3;
  if ( *((int *)v3 + 649) >= 1200 && !*((_DWORD *)v3 + 362) && !*((_DWORD *)v3 + 363) )
  {
LABEL_66:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v4) + 24) = v3;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)v3 + 362) - 1) > 0xF )
  {
    v21 = WdLogNewEntry5_WdError(a1, v4);
    *(_QWORD *)(v21 + 24) = v3;
    v22 = *((unsigned int *)v3 + 362);
    goto LABEL_87;
  }
  if ( !*((_DWORD *)v3 + 363) )
  {
    v21 = WdLogNewEntry5_WdError(a1, v4);
    *(_QWORD *)(v21 + 24) = v3;
    v22 = *((unsigned int *)v3 + 363);
LABEL_87:
    *(_QWORD *)(v21 + 32) = v22;
    goto LABEL_88;
  }
  if ( *((_BYTE *)v3 + 2608) && *((int *)v3 + 582) >= 4608 && (!*((_BYTE *)v3 + 2528) || !*((_BYTE *)v3 + 2529)) )
  {
    v21 = WdLogNewEntry5_WdError(a1, v4);
    *(_QWORD *)(v21 + 24) = 4319LL;
LABEL_88:
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v3 + 72) )
    *((_QWORD *)v3 + 72) = W32kStub_UserRemoveWindowedSwapChain;
  if ( !*((_QWORD *)v3 + 87) )
    *((_QWORD *)v3 + 87) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)v3 + 124) )
    *((_QWORD *)v3 + 124) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)v3 + 137) )
    *((_QWORD *)v3 + 137) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)v3 + 138) )
    *((_QWORD *)v3 + 138) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)v3 + 139) )
    *((_QWORD *)v3 + 139) = W32kStub_GreSfmOpenTokenEvent;
  v6 = operator new(0x398uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v6 )
    v11 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v6, v3);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v23 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    v20 = -1073741801;
    *(_QWORD *)(v23 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
    return v20;
  }
  v14 = ADAPTER_DISPLAY::Initialize(v11);
  if ( v14 < 0 )
  {
    ADAPTER_DISPLAY::Destroy(v11);
    ADAPTER_DISPLAY::`scalar deleting destructor'(v11);
  }
  else
  {
    v15 = WdLogNewEntry5_WdEvent(v13, v12);
    *(_QWORD *)(v15 + 24) = v11;
    *(_QWORD *)(v15 + 32) = v3;
    WdLogEvent5_WdEvent(v15);
    *a2 = v11;
  }
  return (unsigned int)v14;
}
