/*
 * XREFs of ?SendQueryStats@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C02DEFF8
 * Callers:
 *     ?VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C035EE58 (-VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendQueryStats(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        struct CSM_BUFFER_STATISTICS *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v16; // [rsp+50h] [rbp-39h] BYREF
  __int64 v17; // [rsp+58h] [rbp-31h] BYREF
  _DWORD v18[4]; // [rsp+60h] [rbp-29h] BYREF
  _OWORD v19[5]; // [rsp+70h] [rbp-19h] BYREF

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) < 0x1Eu )
  {
    LODWORD(v6) = -1073741637;
    WdLogSingleEntry1(3LL, -1073741637LL);
    return (unsigned int)v6;
  }
  v18[0] = 1886220131;
  v18[2] = 11;
  v18[1] = -1073741823;
  memset(v19, 0, sizeof(v19));
  *(_QWORD *)&v19[0] = 0xC0000001706D6F63uLL;
  DWORD2(v19[0]) = 12;
  memset(&v19[1], 0, 0x40uLL);
  v7 = *((_QWORD *)this + 1);
  v16 = 80;
  v18[3] = a2;
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _OWORD *, unsigned int *))(*(_QWORD *)v7 + 32LL))(
         v7,
         v18,
         16LL,
         v19,
         &v16);
  v6 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, v8, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v6,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  if ( v16 != 80 )
  {
    v9 = v16;
LABEL_7:
    WdLogSingleEntry2(3LL, v9, -1073741823LL);
    LODWORD(v6) = -1073741823;
    return (unsigned int)v6;
  }
  if ( DWORD2(v19[0]) != 12 )
  {
    v9 = SDWORD2(v19[0]);
    goto LABEL_7;
  }
  LODWORD(v6) = DWORD1(v19[0]);
  if ( SDWORD1(v19[0]) < 0 )
  {
    WdLogSingleEntry2(3LL, SDWORD1(v19[0]), this);
  }
  else
  {
    v17 = 0LL;
    v10 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v19[3] + 1), -1LL, &v17);
    LODWORD(v6) = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(3LL, v10);
    }
    else
    {
      v11 = v17;
      v12 = v19[2];
      *(_OWORD *)a3 = v19[1];
      v13 = v19[3];
      *((_OWORD *)a3 + 1) = v12;
      v14 = v19[4];
      *((_OWORD *)a3 + 2) = v13;
      *((_OWORD *)a3 + 3) = v14;
      *((_QWORD *)a3 + 5) = v11;
    }
  }
  return (unsigned int)v6;
}
