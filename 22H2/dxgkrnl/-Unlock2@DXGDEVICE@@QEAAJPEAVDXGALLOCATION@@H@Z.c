/*
 * XREFs of ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C03222E0
 * Callers:
 *     DxgkLock2 @ 0x1C01D2650 (DxgkLock2.c)
 *     DxgkUnlock2Internal @ 0x1C0322918 (DxgkUnlock2Internal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0005070 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C001BA24 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0322460 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock2(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  DXGDEVICE *v3; // r9
  unsigned int v6; // edi
  unsigned int v7; // edi
  __int64 v8; // rbp
  unsigned int v9; // edi
  int v10; // eax

  v3 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  if ( v3 == this )
  {
    if ( !*((_DWORD *)this + 116) )
    {
      v7 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
      if ( (v7 & 4) != 0 )
      {
        if ( a3 )
        {
          v8 = *((_QWORD *)this + 235);
          v9 = (v7 >> 6) & 0xF;
          if ( v8 )
          {
            if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 235)) )
            {
              WdLogSingleEntry1(1LL, 1193LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
                1193LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *((_DWORD *)this + 152) == 1
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v8 + 2920), this, v9)
              && DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v9) == a2 )
            {
              DXGDEVICE::UpdateDodFrontBuffer(this, a2);
            }
          }
        }
      }
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                    + 816LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            *((_QWORD *)a2 + 3));
    v6 = v10;
    if ( v10 < 0 )
      WdLogSingleEntry3(3LL, this, a2, v10);
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry4(3LL, a2, this, v3, -1073741811LL);
  }
  return v6;
}
