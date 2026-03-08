/*
 * XREFs of ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C01E0EA8
 * Callers:
 *     ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C01E0E0C (-UnpinDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02E8CB8 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedAllocation(DXGDEVICE *this, struct DXGALLOCATION *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // edx
  struct DXGALLOCATION *v6; // [rsp+68h] [rbp+10h] BYREF

  v6 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 480LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      480LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)a2 + 18) & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 224LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
      *((_QWORD *)a2 + 3));
    *((_DWORD *)a2 + 18) &= ~0x800u;
  }
  v5 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v5 & 0x2000) != 0 )
  {
    if ( *((_QWORD *)a2 + 3) )
      DXGDEVICE::UnpinDirectFlipAllocation(this, (v5 >> 6) & 0xF, v4, &v6, 0LL);
  }
}
