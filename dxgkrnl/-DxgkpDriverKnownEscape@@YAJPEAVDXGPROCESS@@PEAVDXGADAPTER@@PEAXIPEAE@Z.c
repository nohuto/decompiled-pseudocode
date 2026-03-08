/*
 * XREFs of ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1C030C358
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01854C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0185514 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01D3AB8 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C034B4E8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DxgkpDriverKnownEscape(
        struct DXGPROCESS *a1,
        struct ADAPTER_RENDER **a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // rdi
  unsigned int v14; // edi
  _DWORD *v15; // rdi
  int v16; // r15d
  int DxgAdapterSyncObject; // eax
  struct _KTHREAD **v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // edi
  unsigned int v22; // eax
  __int64 v23; // r8
  int v24; // ecx
  struct _EX_RUNDOWN_REF *v25; // rdx
  unsigned int v26; // ecx
  unsigned int v27; // edi
  unsigned int v28; // eax
  __int64 v29; // r8
  int v30; // ecx
  struct _EX_RUNDOWN_REF *v31; // rdx
  struct DXGADAPTERSYNCOBJECT *v32; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v33[24]; // [rsp+58h] [rbp-18h] BYREF

  if ( a4 < 4 )
  {
    WdLogSingleEntry1(3LL, 752LL);
    return 3221225485LL;
  }
  v9 = 0;
  if ( !*a3 )
  {
    if ( a4 < 8 )
    {
      WdLogSingleEntry1(3LL, 761LL);
      return 3221225485LL;
    }
    v27 = a3[1];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 248));
    v28 = (v27 >> 6) & 0xFFFFFF;
    if ( v28 < *((_DWORD *)a1 + 74) )
    {
      v29 = *((_QWORD *)a1 + 35);
      if ( ((v27 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x60)
        && (*(_DWORD *)(v29 + 16LL * v28 + 8) & 0x2000) == 0 )
      {
        v30 = *(_DWORD *)(v29 + 16LL * v28 + 8) & 0x1F;
        if ( v30 )
        {
          if ( v30 == 5 )
          {
            v31 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * v28);
            goto LABEL_62;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v31 = 0LL;
LABEL_62:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v32, v31);
    _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
    ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v32 )
    {
      WdLogSingleEntry1(3LL, 768LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v32);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)v32 + 18) & 0x40000) != 0 )
      a3[1] = *((_DWORD *)v32 + 5);
    *a5 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v32);
    return 0LL;
  }
  if ( *a3 == 1 )
  {
    if ( a4 < 8 )
    {
      WdLogSingleEntry1(3LL, 782LL);
      return 3221225485LL;
    }
    v21 = a3[1];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 248));
    v22 = (v21 >> 6) & 0xFFFFFF;
    if ( v22 < *((_DWORD *)a1 + 74) )
    {
      v23 = *((_QWORD *)a1 + 35);
      if ( ((v21 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60)
        && (*(_DWORD *)(v23 + 16LL * v22 + 8) & 0x2000) == 0 )
      {
        v24 = *(_DWORD *)(v23 + 16LL * v22 + 8) & 0x1F;
        if ( v24 )
        {
          if ( v24 == 4 )
          {
            v25 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * v22);
            goto LABEL_47;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v25 = 0LL;
LABEL_47:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v32, v25);
    _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
    ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v32 )
    {
      WdLogSingleEntry1(3LL, 789LL);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v32);
      return 3221225485LL;
    }
    v26 = *((_DWORD *)v32 + 5);
    if ( v26 )
      a3[1] = v26;
    *a5 = 0;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v32);
    return 0LL;
  }
  if ( *a3 != 2 )
  {
    WdLogSingleEntry1(3LL, 864LL);
    return 3221225485LL;
  }
  if ( a4 < 0x30 )
  {
    WdLogSingleEntry1(3LL, 803LL);
    return 3221225485LL;
  }
  if ( *((_QWORD *)a3 + 1) )
  {
    WdLogSingleEntry1(3LL, 813LL);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, a1);
  v10 = (a3[1] >> 6) & 0xFFFFFF;
  if ( v10 >= *((_DWORD *)a1 + 74) )
    goto LABEL_18;
  v11 = *((_QWORD *)a1 + 35);
  if ( ((a3[1] >> 25) & 0x60) != (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60) )
    goto LABEL_18;
  if ( (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) != 0 )
    goto LABEL_18;
  v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
  if ( !v12 )
    goto LABEL_18;
  if ( v12 != 8 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
    WdLogSingleEntry1(3LL, a3[1]);
LABEL_19:
    LODWORD(v13) = -1073741811;
LABEL_20:
    v9 = v13;
    goto LABEL_21;
  }
  v15 = *(_DWORD **)(v11 + 16LL * v10);
  if ( !v15 || v15[50] != 4 )
    goto LABEL_18;
  v16 = v15[51];
  if ( (v16 & 0x100) == 0 )
  {
    WdLogSingleEntry2(3LL, a3[1], 827LL);
    goto LABEL_19;
  }
  if ( !*((_BYTE *)a2 + 209) )
  {
    v32 = 0LL;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v15 + 8));
    DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject((DXGSYNCOBJECT *)v15, a2[366], &v32);
    v18 = (struct _KTHREAD **)(v15 + 8);
    v13 = DxgAdapterSyncObject;
    DXGFASTMUTEX::Release(v18);
    if ( (int)v13 < 0 )
    {
      WdLogSingleEntry2(3LL, a3[1], v13);
      goto LABEL_20;
    }
    v19 = *((_QWORD *)v32 + 5);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 32);
      *((_QWORD *)a3 + 1) = v20;
      if ( v20 )
        goto LABEL_29;
    }
    else
    {
      *((_QWORD *)a3 + 1) = 0LL;
    }
    if ( (v16 & 0x10) == 0 )
    {
      WdLogSingleEntry2(3LL, a3[1], 855LL);
      v14 = -1073741811;
      goto LABEL_22;
    }
    *a5 = 0;
LABEL_21:
    v14 = v9;
LABEL_22:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
    return v14;
  }
  a3[1] = DXGSYNCOBJECT::GetHostHandle((DXGSYNCOBJECT *)v15, a3[1], v11);
LABEL_29:
  *a5 = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return 0LL;
}
