__int64 __fastcall DxgkpCddSyncGPUAccess(struct _KTHREAD **a1, unsigned int a2, int a3)
{
  __int64 v3; // r14
  unsigned int v6; // eax
  struct _KTHREAD *v7; // r9
  int v8; // edx
  struct _EX_RUNDOWN_REF *v9; // rdx
  struct _EX_RUNDOWN_REF *v10; // rbx
  struct DXGDEVICE *Count; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  struct _EX_RUNDOWN_REF *v21; // r8
  __int64 v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v24; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v25[8]; // [rsp+60h] [rbp-A0h] BYREF
  DXGPUSHLOCK *v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+70h] [rbp-90h]
  _BYTE v28[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h]
  char v30; // [rsp+88h] [rbp-78h]
  _BYTE v31[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v32[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  char v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  char v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]

  v3 = a2;
  v23 = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, a1 + 31, 0);
  DXGPUSHLOCK::AcquireShared(v26);
  v27 = 1;
  v6 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( v6 < *((_DWORD *)a1 + 74) )
  {
    v7 = a1[35];
    if ( (((unsigned int)v3 >> 25) & 0x60) == (*((_BYTE *)v7 + 16 * v6 + 8) & 0x60)
      && (*((_DWORD *)v7 + 4 * v6 + 2) & 0x2000) == 0 )
    {
      v8 = *((_DWORD *)v7 + 4 * v6 + 2) & 0x1F;
      if ( v8 )
      {
        if ( v8 == 5 )
        {
          v9 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v7 + 2 * v6);
          goto LABEL_9;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v9 = 0LL;
LABEL_9:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v24, v9);
  DXGALLOCATIONREFERENCE::MoveAssign(&v23, &v24);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v24);
  v10 = v23;
  if ( !v23 )
  {
    v15 = -1073741811;
    WdLogSingleEntry2(3LL, v3, -1073741811LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    goto LABEL_26;
  }
  Count = (struct DXGDEVICE *)v23[1].Count;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v31, Count);
  v12 = *((_QWORD *)Count + 2);
  v30 = 0;
  v29 = *(_QWORD *)(v12 + 16);
  v13 = v29;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  v32[1] = 0;
  v34 = v13;
  v35 = 0;
  v36 = 0LL;
  if ( v13 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
    v10 = v23;
    v33 = -1LL;
  }
  v38 = v13;
  v39 = 0;
  v40 = 0LL;
  if ( v13 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
    v10 = v23;
    v37 = -1LL;
  }
  v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    v19 = v14;
    v20 = (__int64)a1;
    v21 = (struct _EX_RUNDOWN_REF *)v13;
    v22 = 4LL;
    goto LABEL_31;
  }
  if ( !*(_QWORD *)(v13 + 2928) )
  {
    WdLogSingleEntry1(1LL, 2125LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      2125LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_BYTE *)(v13 + 209) )
  {
    if ( v10[3].Count )
    {
      v16 = 0;
      if ( a3 )
      {
        v16 = 1;
        *(_DWORD *)(v10[6].Count + 4) &= ~0x400u;
      }
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v32);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v31);
      v17 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 2928)
                                                                                                  + 760LL)
                                                                                      + 8LL)
                                                                          + 608LL))(
              *(_QWORD *)(*(_QWORD *)(v13 + 2928) + 768LL),
              v10[3].Count,
              v3 & 0x3F,
              v16);
      goto LABEL_22;
    }
    v15 = -1073741811;
    v19 = v3;
    v20 = -1073741811LL;
    v21 = v10;
    v22 = 3LL;
LABEL_31:
    WdLogSingleEntry3(v22, v19, v21, v20);
    goto LABEL_23;
  }
  v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddSyncGpuAccess(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v13 + 4472),
          (struct DXGPROCESS *)a1,
          HIDWORD(v10[2].Ptr),
          a3 != 0);
LABEL_22:
  v15 = v17;
LABEL_23:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
  if ( v30 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v31);
LABEL_26:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v23);
  return v15;
}
