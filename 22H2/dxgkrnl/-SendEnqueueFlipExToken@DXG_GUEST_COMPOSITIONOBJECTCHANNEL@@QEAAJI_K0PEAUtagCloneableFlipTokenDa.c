/*
 * XREFs of ?SendEnqueueFlipExToken@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C028E900
 * Callers:
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02B8074 (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
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
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v32; // [rsp+38h] [rbp-D0h] BYREF
  int v33; // [rsp+40h] [rbp-C8h] BYREF
  int v34; // [rsp+44h] [rbp-C4h]
  int v35; // [rsp+48h] [rbp-C0h]
  int v36; // [rsp+4Ch] [rbp-BCh]
  _DWORD v37[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  _BYTE v40[452]; // [rsp+70h] [rbp-98h] BYREF
  int v41; // [rsp+234h] [rbp+12Ch]

  v37[0] = 1886220131;
  v37[2] = 9;
  v41 = 0;
  v37[1] = -1073741823;
  memset(v40, 0, sizeof(v40));
  v36 = 0;
  v9 = v40;
  v11 = 3LL;
  v33 = 1886220131;
  v34 = -1073741823;
  v35 = 10;
  v32 = 16;
  v37[3] = a2;
  v38 = a3;
  v39 = a4;
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
  v22 = *((_DWORD *)a5 + 16);
  v9[2] = v20;
  v9[3] = v21;
  *((_DWORD *)v9 + 16) = v22;
  v23 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, int *, unsigned int *))(**((_QWORD **)this + 1) + 32LL))(
          *((_QWORD *)this + 1),
          v37,
          488LL,
          &v33,
          &v32);
  v27 = v23;
  if ( v23 >= 0 )
  {
    if ( v32 == 16 )
    {
      if ( v35 == 10 )
      {
        LODWORD(v27) = v34;
        return (unsigned int)v27;
      }
      v29 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      v30 = v35;
    }
    else
    {
      v29 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      v30 = v32;
    }
    *(_QWORD *)(v29 + 24) = v30;
    *(_QWORD *)(v29 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v29);
    LODWORD(v27) = -1073741823;
  }
  else
  {
    v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v28 + 24) = v27;
    WdLogEvent5_WdWarning(v28);
  }
  return (unsigned int)v27;
}
