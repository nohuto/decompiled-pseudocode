/*
 * XREFs of ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x1C03CCAEC
 * Callers:
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C034B1D0 (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?RemovePending@DXGADAPTER@@QEBAHXZ @ 0x1C0040D18 (-RemovePending@DXGADAPTER@@QEBAHXZ.c)
 */

__int64 __fastcall BLTQUEUE::DestroyPeriodicFrameNotification(struct _KTHREAD **this, unsigned __int64 *a2)
{
  struct _KTHREAD *v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdi
  struct _KTHREAD *v10; // rcx
  __int64 v11; // rbp
  char v13[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, this + 358, 0);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v4 = this[364];
  v5 = 0;
  v6 = *a2;
  v7 = 0LL;
  v15 = 2;
  v8 = (_QWORD *)((char *)v4 + 48);
  while ( *v8 != v6 )
  {
    ++v7;
    v8 += 8;
    if ( v7 >= 8 )
    {
      WdLogSingleEntry1(2LL, v6);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to destroy dod periodic frame notification id: %lu",
        *a2,
        0LL,
        0LL,
        0LL,
        0LL);
      v5 = -1073741811;
      goto LABEL_12;
    }
  }
  v9 = v7 << 6;
  *((_BYTE *)v4 + v9 + 56) = 1;
  *((_BYTE *)this[364] + v9 + 57) = 0;
  v10 = this[364];
  --*((_DWORD *)this + 726);
  ExCancelTimer(*(_QWORD *)((char *)v10 + v9), 0LL);
  v11 = *(_QWORD *)((char *)this[364] + v9 + 16);
  if ( *(_DWORD *)(v11 + 200) != 1 && !DXGADAPTER::RemovePending(*(DXGADAPTER **)((char *)this[364] + v9 + 16)) )
  {
    WdLogSingleEntry1(1LL, 3698LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSyncAdapter->IsActive() || pSyncAdapter->RemovePending()",
      3698LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = -1LL;
  if ( (*(int (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 2928) + 736LL)
                                                                                       + 8LL)
                                                                           + 656LL))(
         1LL,
         (unsigned __int64)this[364] + v9 + 8,
         0LL,
         &v16) < 0 )
  {
    WdLogSingleEntry1(2LL, *a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to signal UINT64_MAX on a destroyed dod periodic frame notification id: %lu",
      *a2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    *(_QWORD *)((char *)this[364] + v9 + 40) = v16;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)((char *)this[364] + v9 + 16), 0LL);
  *a2 = 0LL;
LABEL_12:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v5;
}
