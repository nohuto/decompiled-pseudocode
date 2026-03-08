/*
 * XREFs of ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C01779D4
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0175A20 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGDEVICE::IsAllocationInPrimaryAllocationsList(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  _BYTE v10[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+60h] [rbp-28h]

  v3 = a2;
  v6 = 1;
  if ( a2 >= *((_DWORD *)this + 472) )
  {
    WdLogSingleEntry1(1LL, 3861LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3861LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3862LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3862LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 235)) )
  {
    WdLogSingleEntry1(1LL, 3863LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      3863LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 116) != 1 )
  {
    WdLogSingleEntry1(1LL, 3864LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGDEVICECLIENT_USER == GetClientType()",
      3864LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 235) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)this + 42, 0);
    DXGPUSHLOCK::AcquireExclusive(v11);
    v7 = *((_DWORD *)this + v3 + 246);
    v8 = 0;
    v12 = 2;
    if ( v7 )
    {
      while ( *(struct DXGALLOCATION **)(*((_QWORD *)this + v3 + 107) + 8LL * v8) != a3 )
      {
        if ( ++v8 >= v7 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v6 = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  }
  return v6;
}
