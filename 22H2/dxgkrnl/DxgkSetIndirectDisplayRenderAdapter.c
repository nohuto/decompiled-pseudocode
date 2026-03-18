/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D5BF8
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02B7170 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02D60CC (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C00088CC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0013C40 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DXGKCALLONEXIT__lambda_aacb25400ded284731246042636418dc___ @ 0x1C0024E64 (DXGKCALLONEXIT__lambda_aacb25400ded284731246042636418dc___.c)
 *     _DXGKCALLONEXIT__lambda_aacb25400ded284731246042636418dc____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C0024F0C (_DXGKCALLONEXIT__lambda_aacb25400ded284731246042636418dc____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C0040AF8 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C022F9AC (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C02C0E14 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapter(struct DXGADAPTER *a1, struct _LUID *a2, _BYTE *a3)
{
  struct _LUID *v6; // rdx
  bool v7; // zf
  unsigned int v8; // ebx
  struct DXGADAPTER *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct DXGADAPTER *v12; // rax
  __int64 v13; // r15
  struct DXGADAPTER *v14; // rdi
  int v15; // edi
  DXGADAPTERSTOPRESETLOCKSHARED *v16; // rcx
  struct DXGADAPTER *v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v20[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v22; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v23; // [rsp+98h] [rbp-68h]
  char *v24; // [rsp+A0h] [rbp-60h]
  _BYTE v25[8]; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGADAPTER *v26; // [rsp+B8h] [rbp-48h]
  char v27; // [rsp+C0h] [rbp-40h]
  _BYTE v28[16]; // [rsp+C8h] [rbp-38h] BYREF
  struct _GUID v29; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v30[104]; // [rsp+E8h] [rbp-18h] BYREF
  char v31; // [rsp+160h] [rbp+60h] BYREF
  int IndirectDisplayPairedAdapter; // [rsp+168h] [rbp+68h] BYREF
  __int64 v33; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v34; // [rsp+178h] [rbp+78h] BYREF

  IndirectDisplayPairedAdapter = 0;
  v33 = 0LL;
  v19 = 0LL;
  v31 = 0;
  v29 = 0LL;
  if ( a3 )
    *a3 = 0;
  *(_QWORD *)&v21 = a2;
  *((_QWORD *)&v21 + 1) = &IndirectDisplayPairedAdapter;
  v22 = &v33;
  v23 = &v19;
  v24 = &v31;
  DXGKCALLONEXIT__lambda_aacb25400ded284731246042636418dc_((__int64)v30, &v21);
  v33 = *(_QWORD *)((char *)a1 + 404);
  v34 = 0LL;
  DXGADAPTER::IsAdapterSessionized(a1, v6, 0LL, &v34);
  v7 = (*((_DWORD *)a1 + 109) & 0x100) == 0;
  v19 = v34;
  if ( !v7 )
  {
    v9 = 0LL;
    v18[0] = 0LL;
    if ( a2->HighPart || a2->LowPart )
    {
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v18, a2);
      v9 = v18[0];
      if ( !v18[0] )
      {
        WdLogSingleEntry3(2LL, a2->HighPart, a2->LowPart, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid Render Adapter LUID (0x%I64x, 0x%I64x) specified, returning 0x%I64x",
          a2->HighPart,
          a2->LowPart,
          -1073741811LL,
          0LL,
          0LL);
        v8 = -1073741584;
        IndirectDisplayPairedAdapter = -1073741584;
LABEL_45:
        DXGADAPTER_REFERENCE::Assign(v18, 0LL);
        goto LABEL_46;
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)(*((_QWORD *)a1 + 365) + 152LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    v20[0] = 0LL;
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter((ADAPTER_DISPLAY **)a1, 0, v20);
    if ( IndirectDisplayPairedAdapter < 0 )
      WdLogSingleEntry1(4LL, a1);
    if ( v20[0] == v9 )
    {
      WdLogSingleEntry2(4LL, a2->HighPart, a2->LowPart);
      IndirectDisplayPairedAdapter = 0;
      v8 = 0;
      goto LABEL_43;
    }
    if ( v20[0] )
      v10 = *((_QWORD *)v20[0] + 366);
    else
      v10 = *((_QWORD *)v9 + 366);
    v11 = v10 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
    v12 = v20[0];
    if ( !v20[0] )
      v12 = v18[0];
    v13 = *((_QWORD *)v12 + 366) + 48LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    v14 = v18[0];
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    if ( v14 )
    {
      v26 = v14;
      v27 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
      if ( !*((_QWORD *)v14 + 366) || (*((_DWORD *)v14 + 698) & 8) != 0 )
      {
        WdLogSingleEntry2(2LL, v14, -1073741584LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller specified adapter 0x%I64x is not a capable adapter, returning 0x%I64x",
          (__int64)v14,
          -1073741584LL,
          0LL,
          0LL,
          0LL);
        v15 = -1073741584;
      }
      else
      {
        if ( *((_DWORD *)v14 + 50) == 1 && !*((_BYTE *)v18[0] + 2833) )
        {
          v29 = *(struct _GUID *)((char *)v18[0] + 308);
          if ( v27 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
          goto LABEL_25;
        }
        v15 = -1073741130;
        WdLogSingleEntry2(3LL, v18[0], -1073741130LL);
      }
      IndirectDisplayPairedAdapter = v15;
      if ( v27 )
      {
        v16 = (DXGADAPTERSTOPRESETLOCKSHARED *)v25;
LABEL_40:
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v16);
      }
LABEL_41:
      v8 = v15;
LABEL_42:
      *(_QWORD *)(v13 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v13, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v11 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v11, 0LL);
      KeLeaveCriticalRegion();
LABEL_43:
      DXGADAPTER_REFERENCE::Assign(v20, 0LL);
      if ( v28[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
      goto LABEL_45;
    }
LABEL_25:
    *((_QWORD *)&v21 + 1) = a1;
    LOBYTE(v22) = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v21);
    if ( *((_DWORD *)a1 + 50) == 1 && !*((_BYTE *)a1 + 2833) )
    {
      if ( v20[0] )
        ADAPTER_RENDER::DisconnectFromDisplayAdapters(*((ADAPTER_RENDER **)v20[0] + 366), a1, *((_DWORD *)a1 + 50));
      ADAPTER_DISPLAY::SetPairedRenderAdapter(*((ADAPTER_DISPLAY **)a1 + 365), v18[0], &v29);
      if ( (_BYTE)v22 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v21);
      v31 = 1;
      if ( a3 )
        *a3 = 1;
      IndirectDisplayPairedAdapter = 0;
      v8 = 0;
      goto LABEL_42;
    }
    v15 = -1073741130;
    WdLogSingleEntry2(3LL, a1, -1073741130LL);
    IndirectDisplayPairedAdapter = -1073741130;
    if ( (_BYTE)v22 )
    {
      v16 = (DXGADAPTERSTOPRESETLOCKSHARED *)&v21;
      goto LABEL_40;
    }
    goto LABEL_41;
  }
  WdLogSingleEntry2(2LL, a1, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
    (__int64)a1,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  v8 = -1073741585;
  IndirectDisplayPairedAdapter = -1073741585;
LABEL_46:
  DXGKCALLONEXIT__lambda_aacb25400ded284731246042636418dc____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v30);
  return v8;
}
