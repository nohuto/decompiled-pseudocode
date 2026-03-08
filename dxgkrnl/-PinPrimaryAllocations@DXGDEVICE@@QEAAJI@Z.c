/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0177ACC
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0175A20 (DxgkSetDisplayMode.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0178B04 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // r15d
  __int64 v9; // rsi
  __int64 v10; // rdx
  _BYTE v11[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v12; // [rsp+58h] [rbp-40h]
  int v13; // [rsp+60h] [rbp-38h]

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 472) )
  {
    WdLogSingleEntry1(1LL, 3806LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3806LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3807LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3807LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 235)) )
  {
    WdLogSingleEntry1(1LL, 3808LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      3808LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 116) != 1 )
  {
    WdLogSingleEntry1(1LL, 3809LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGDEVICECLIENT_USER == GetClientType()",
      3809LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + v2 + 310) & 0x100) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 235) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_18:
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)this + 42, 0);
    DXGPUSHLOCK::AcquireExclusive(v12);
    *((_DWORD *)this + v2 + 310) |= 0x100u;
    v13 = 2;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    return 0LL;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)this + 42, 0);
  DXGPUSHLOCK::AcquireExclusive(v12);
  v4 = 0;
  v13 = 2;
  if ( !*((_DWORD *)this + v2 + 246) )
  {
LABEL_17:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v5 = v4;
    v6 = *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * v4);
    if ( v6 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 48) + 4LL) & 1) == 0 )
      {
        WdLogSingleEntry1(1LL, 3822LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_PrimaryAllocation[VidPnSourceId][Index]->m_pAllocation->m_Primary",
          3822LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                                 + 8LL)
                                                                                     + 216LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * v4) + 24LL),
             0LL,
             0LL,
             0LL,
             0LL);
      if ( v7 < 0 )
        break;
    }
    if ( ++v4 >= *((_DWORD *)this + v2 + 246) )
      goto LABEL_17;
  }
  if ( v4 )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(v9 + *((_QWORD *)this + v2 + 107));
      if ( v10 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 224LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          *(_QWORD *)(v10 + 24));
      v9 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return (unsigned int)v7;
}
