/*
 * XREFs of DxgGetHandleDataCB @ 0x1C02E9980
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01854C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0185514 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v4; // rcx
  ULONG_PTR Count; // rbx
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // ecx
  int v10; // ecx
  struct _EX_RUNDOWN_REF *v11; // rdx
  KIRQL CurrentIrql; // al
  struct _EX_RUNDOWN_REF *v13; // rdx
  __int64 v14; // r9
  struct _EX_RUNDOWN_REF *v15; // rdx
  struct DXGPROCESS *v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // ecx
  int v21; // ecx
  struct _EX_RUNDOWN_REF *v22; // rdx
  KIRQL v23; // al
  struct _EX_RUNDOWN_REF *v24; // rdx
  __int64 v25; // r9
  struct _EX_RUNDOWN_REF *v26; // rdx
  struct _EX_RUNDOWN_REF *v28; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v29[24]; // [rsp+58h] [rbp-11h] BYREF
  char v30[8]; // [rsp+70h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v30);
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v29, Current);
  v4 = (int)a1[1];
  Count = 0LL;
  if ( (_DWORD)v4 == 1 )
  {
    v6 = (*a1 >> 6) & 0xFFFFFF;
    if ( v6 < *((_DWORD *)Current + 74) )
    {
      v7 = *((_QWORD *)Current + 35);
      v8 = 2LL * v6;
      v9 = *(_DWORD *)(v7 + 16LL * v6 + 8);
      if ( ((*a1 >> 25) & 0x60) == (v9 & 0x60) && (v9 & 0x2000) == 0 )
      {
        v10 = v9 & 0x1F;
        if ( v10 )
        {
          if ( v10 == 5 )
          {
            v11 = *(struct _EX_RUNDOWN_REF **)(v7 + 8 * v8);
LABEL_9:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28, v11);
            if ( v28 )
            {
              CurrentIrql = KeGetCurrentIrql();
              v13 = v28;
              if ( CurrentIrql >= 2u )
              {
                v14 = *(_QWORD *)(*(_QWORD *)(v28[1].Count + 16) + 16LL);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
                {
                  WdLogSingleEntry5(0LL, 275LL, 20LL, v14, 0LL, 0LL);
                  v13 = v28;
                }
              }
              if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v13[1].Count + 16) + 16LL)) )
              {
                if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
                {
                  WdLogSingleEntry1(1LL, 88LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"WDDM2 driver calls WDDM1.x DDI!",
                    88LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
LABEL_38:
                  Count = 0LL;
                  goto LABEL_47;
                }
                v15 = v28;
              }
              if ( (a1[2] & 1) != 0 )
                Count = v15[4].Count;
              else
                Count = *(_QWORD *)(v15[6].Count + 16);
            }
            else
            {
              WdLogSingleEntry1(3LL, *a1);
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
            goto LABEL_47;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v11 = 0LL;
    goto LABEL_9;
  }
  if ( (_DWORD)v4 != 2 )
  {
    WdLogSingleEntry1(3LL, v4);
    goto LABEL_47;
  }
  v16 = DXGPROCESS::GetCurrent(v4);
  v17 = (*a1 >> 6) & 0xFFFFFF;
  if ( v17 < *((_DWORD *)v16 + 74) )
  {
    v18 = *((_QWORD *)v16 + 35);
    v19 = 2LL * v17;
    v20 = *(_DWORD *)(v18 + 16LL * v17 + 8);
    if ( ((*a1 >> 25) & 0x60) == (v20 & 0x60) && (v20 & 0x2000) == 0 )
    {
      v21 = v20 & 0x1F;
      if ( v21 )
      {
        if ( v21 == 4 )
        {
          v22 = *(struct _EX_RUNDOWN_REF **)(v18 + 8 * v19);
          goto LABEL_31;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v22 = 0LL;
LABEL_31:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v28, v22);
  if ( v28 )
  {
    v23 = KeGetCurrentIrql();
    v24 = v28;
    if ( v23 >= 2u )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(v28[1].Count + 16) + 16LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      {
        WdLogSingleEntry5(0LL, 275LL, 20LL, v25, 0LL, 0LL);
        v24 = v28;
      }
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v24[1].Count + 16) + 16LL)) )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
      {
        WdLogSingleEntry1(1LL, 130LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"WDDM2 driver calls WDDM1.x DDI!",
          130LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v28);
        goto LABEL_38;
      }
      v26 = v28;
    }
    if ( (HIDWORD(v26->Ptr) & 1) != 0 )
      Count = *(_QWORD *)(v26[7].Count + 16);
    else
      Count = v26[7].Count;
  }
  else
  {
    WdLogSingleEntry1(3LL, *a1);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v28);
LABEL_47:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
