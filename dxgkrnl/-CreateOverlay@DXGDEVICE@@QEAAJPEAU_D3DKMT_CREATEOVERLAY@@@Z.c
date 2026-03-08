/*
 * XREFs of ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C02E407C
 * Callers:
 *     DxgkCreateOverlay @ 0x1C0330DB0 (DxgkCreateOverlay.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000E280 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C00487F0 (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0330418 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateOverlay(DXGDEVICE *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rax
  DXGOVERLAY *v5; // rbx
  int v6; // esi
  DXGOVERLAY **v7; // rax
  __int64 v8; // rcx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 3989LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 3989LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = DXGQUOTAALLOCATOR<256,1265072196>::operator new(56LL);
  v5 = (DXGOVERLAY *)v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = this;
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 24) = 0;
    *(_DWORD *)(v4 + 28) = 0;
    *(_DWORD *)(v4 + 32) = -1;
    *(_QWORD *)(v4 + 40) = 0LL;
    v6 = DXGOVERLAY::Initialize((DXGOVERLAY *)v4, a2);
    if ( v6 >= 0 )
    {
      v7 = (DXGOVERLAY **)((char *)this + 512);
      v8 = *((_QWORD *)this + 64);
      if ( *(DXGDEVICE **)(v8 + 8) != (DXGDEVICE *)((char *)this + 512) )
        __fastfail(3u);
      *(_QWORD *)v5 = v8;
      *((_QWORD *)v5 + 1) = v7;
      *(_QWORD *)(v8 + 8) = v5;
      *v7 = v5;
    }
    else
    {
      DXGOVERLAY::`scalar deleting destructor'(v5);
    }
  }
  else
  {
    v6 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
  return (unsigned int)v6;
}
