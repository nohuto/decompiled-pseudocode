/*
 * XREFs of ?SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1C02DEA78
 * Callers:
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1C035E004 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendBindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        int a3,
        const struct CSM_BUFFER_INFO *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+5Ch] [rbp-A4h]
  int v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v20; // [rsp+68h] [rbp-98h]
  _DWORD v21[336]; // [rsp+70h] [rbp-90h] BYREF

  memset(v21, 0, sizeof(v21));
  v21[1] = -1073741823;
  v21[0] = 1886220131;
  v21[2] = 5;
  memset(&v21[6], 0, 0x520uLL);
  v19 = 0;
  v20 = 0LL;
  v16 = 1886220131;
  v18 = 6;
  v17 = -1073741823;
  v15 = 24;
  v21[3] = a2;
  v21[4] = a3;
  memmove(&v21[6], a4, 0x520uLL);
  v10 = *((_QWORD *)this + 1);
  v21[334] = a5;
  v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v10 + 32LL))(
          v10,
          v21,
          1344LL,
          &v16,
          &v15);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v12,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
  if ( v15 != 24 )
  {
    v13 = v15;
LABEL_5:
    WdLogSingleEntry2(3LL, v13, -1073741823LL);
    LODWORD(v12) = -1073741823;
    return (unsigned int)v12;
  }
  if ( v18 != 6 )
  {
    v13 = v18;
    goto LABEL_5;
  }
  LODWORD(v12) = v17;
  if ( v17 < 0 )
    WdLogSingleEntry2(3LL, v17, this);
  else
    *a6 = v20;
  return (unsigned int)v12;
}
