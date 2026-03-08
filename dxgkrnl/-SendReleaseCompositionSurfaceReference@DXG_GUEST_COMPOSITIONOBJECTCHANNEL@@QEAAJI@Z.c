/*
 * XREFs of ?SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI@Z @ 0x1C02DF208
 * Callers:
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C035F0A4 (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendReleaseCompositionSurfaceReference(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v8; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+58h] [rbp-28h] BYREF
  int v10; // [rsp+5Ch] [rbp-24h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  _DWORD v13[4]; // [rsp+68h] [rbp-18h] BYREF

  v12 = 0;
  v13[3] = a2;
  v13[0] = 1886220131;
  v9 = 1886220131;
  v3 = *((_QWORD *)this + 1);
  v13[1] = -1073741823;
  v13[2] = 3;
  v10 = -1073741823;
  v11 = 4;
  v8 = 16;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v3 + 32LL))(
         v3,
         v13,
         16LL,
         &v9,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v8 == 16 )
    {
      if ( v11 == 4 )
      {
        LODWORD(v5) = v10;
        return (unsigned int)v5;
      }
      v6 = v11;
    }
    else
    {
      v6 = v8;
    }
    WdLogSingleEntry2(3LL, v6, -1073741823LL);
    LODWORD(v5) = -1073741823;
  }
  else
  {
    WdLogSingleEntry2(2LL, v4, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v5,
      (__int64)this,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v5;
}
