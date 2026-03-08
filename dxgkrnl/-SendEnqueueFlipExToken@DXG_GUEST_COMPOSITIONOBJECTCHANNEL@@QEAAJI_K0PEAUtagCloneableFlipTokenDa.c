/*
 * XREFs of ?SendEnqueueFlipExToken@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02DEDC8
 * Callers:
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C035EBE8 (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendEnqueueFlipExToken(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tagCloneableFlipTokenData *a5)
{
  _OWORD *v9; // rcx
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rdx
  unsigned int v27; // [rsp+58h] [rbp-B0h] BYREF
  int v28; // [rsp+60h] [rbp-A8h] BYREF
  int v29; // [rsp+64h] [rbp-A4h]
  int v30; // [rsp+68h] [rbp-A0h]
  int v31; // [rsp+6Ch] [rbp-9Ch]
  _DWORD v32[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-80h]
  _BYTE v35[456]; // [rsp+90h] [rbp-78h] BYREF

  v32[0] = 1886220131;
  v32[1] = -1073741823;
  v32[2] = 9;
  memset(v35, 0, sizeof(v35));
  v31 = 0;
  v9 = v35;
  v32[3] = a2;
  v28 = 1886220131;
  v11 = 3LL;
  v29 = -1073741823;
  v30 = 10;
  v27 = 16;
  v33 = a3;
  v34 = a4;
  do
  {
    v12 = *((_OWORD *)a5 + 1);
    *v9 = *(_OWORD *)a5;
    v13 = *((_OWORD *)a5 + 2);
    v9[1] = v12;
    v14 = *((_OWORD *)a5 + 3);
    v9[2] = v13;
    v15 = *((_OWORD *)a5 + 4);
    v9[3] = v14;
    v16 = *((_OWORD *)a5 + 5);
    v9[4] = v15;
    v17 = *((_OWORD *)a5 + 6);
    v9[5] = v16;
    v18 = *((_OWORD *)a5 + 7);
    a5 = (struct tagCloneableFlipTokenData *)((char *)a5 + 128);
    v9[6] = v17;
    v9 += 8;
    *(v9 - 1) = v18;
    --v11;
  }
  while ( v11 );
  v19 = *((_OWORD *)a5 + 1);
  *v9 = *(_OWORD *)a5;
  v20 = *((_OWORD *)a5 + 2);
  v9[1] = v19;
  v21 = *((_OWORD *)a5 + 3);
  v22 = *((_QWORD *)a5 + 8);
  v9[2] = v20;
  v9[3] = v21;
  *((_QWORD *)v9 + 8) = v22;
  v23 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, int *, unsigned int *))(**((_QWORD **)this + 1) + 32LL))(
          *((_QWORD *)this + 1),
          v32,
          488LL,
          &v28,
          &v27);
  v24 = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry2(2LL, v23, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v24,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v24;
  }
  if ( v27 != 16 )
  {
    v25 = v27;
LABEL_7:
    WdLogSingleEntry2(3LL, v25, -1073741823LL);
    LODWORD(v24) = -1073741823;
    return (unsigned int)v24;
  }
  if ( v30 != 10 )
  {
    v25 = v30;
    goto LABEL_7;
  }
  LODWORD(v24) = v29;
  if ( v29 < 0 )
    WdLogSingleEntry2(3LL, v29, this);
  return (unsigned int)v24;
}
