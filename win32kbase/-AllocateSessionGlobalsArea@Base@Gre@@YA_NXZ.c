/*
 * XREFs of ?AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ @ 0x1C00CA144
 * Callers:
 *     InitializeGre @ 0x1C031D988 (InitializeGre.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

bool __fastcall Gre::Base::AllocateSessionGlobalsArea(Gre::Base *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  __int64 v4; // r14
  int v5; // r9d
  __int64 Pool2; // rbx
  __int64 v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  const char *v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  __int128 v18; // xmm1
  _OWORD *v19; // rax
  _OWORD *v20; // rcx
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  bool result; // al
  _QWORD *v24; // rax
  __int64 v25; // r10
  _QWORD v26[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v28; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v29; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+110h] [rbp+77h] BYREF
  __int64 v31; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = SGDGetSessionState(this);
  v3 = gpLeakTrackingAllocator;
  v28 = 826754887;
  v30 = 260LL;
  v4 = v1;
  v31 = 8104LL;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 8104LL, 826754887LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
    goto LABEL_4;
  }
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v29 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x31474747u, &v29) )
      {
        v26[0] = &v30;
        v26[1] = &v28;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v3,
                  (__int64)v26,
                  &v31);
        goto LABEL_4;
      }
      Pool2 = ExAllocatePool2(v25, 8120LL, 826754887LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v3,
                                  Pool2,
                                  v29,
                                  BackTrace) )
            goto LABEL_4;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v3,
                                     Pool2,
                                     v29,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_27;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x31474747u) )
  {
LABEL_27:
    Pool2 = 0LL;
    goto LABEL_4;
  }
  v24 = (_QWORD *)ExAllocatePool2(v30 & 0xFFFFFFFFFFFFFFFDuLL, 8120LL, v28);
  Pool2 = (__int64)v24;
  if ( !v24
    || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
        *v24 = 826754887LL,
        Pool2 = (__int64)(v24 + 2),
        v24 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v3 + 1),
      (const void *)0x31474747);
  }
LABEL_4:
  *(_QWORD *)(v4 + 24) = Pool2;
  if ( !Pool2 )
    return 0;
  v7 = SGDGetSessionState(v2);
  v8 = &unk_1C028B630;
  v9 = 3LL;
  v10 = *(_QWORD *)(v7 + 24);
  v11 = (_OWORD *)(v10 + 752);
  do
  {
    *v11 = *v8;
    v11[1] = v8[1];
    v11[2] = v8[2];
    v11[3] = v8[3];
    v11[4] = v8[4];
    v11[5] = v8[5];
    v11[6] = v8[6];
    v11 += 8;
    v12 = v8[7];
    v8 += 8;
    *(v11 - 1) = v12;
    --v9;
  }
  while ( v9 );
  v13 = "COSP";
  *v11 = *v8;
  v11[1] = v8[1];
  v11[2] = v8[2];
  v11[3] = v8[3];
  v14 = v8[4];
  *(_DWORD *)(v10 + 1432) = -1;
  v15 = v10 + 2408;
  *(_DWORD *)(v10 + 3848) = 3;
  v16 = 4LL;
  v11[4] = v14;
  *(_DWORD *)(v10 + 1400) = 1;
  *(_DWORD *)(v10 + 1404) = 1;
  *(_DWORD *)(v10 + 1408) = 1;
  *(_DWORD *)(v10 + 1412) = 1;
  *(_OWORD *)(v10 + 3852) = xmmword_1C028B530;
  *(_OWORD *)(v10 + 3868) = xmmword_1C028B540;
  *(_OWORD *)(v10 + 3884) = xmmword_1C028B550;
  *(_OWORD *)(v10 + 3900) = xmmword_1C028B560;
  *(_OWORD *)(v10 + 3916) = xmmword_1C028B570;
  *(_DWORD *)(v10 + 3932) = 0xFFFFFF;
  v17 = 4LL;
  do
  {
    *(_OWORD *)v15 = *(_OWORD *)v13;
    *(_OWORD *)(v15 + 16) = *((_OWORD *)v13 + 1);
    *(_OWORD *)(v15 + 32) = *((_OWORD *)v13 + 2);
    *(_OWORD *)(v15 + 48) = *((_OWORD *)v13 + 3);
    *(_OWORD *)(v15 + 64) = *((_OWORD *)v13 + 4);
    *(_OWORD *)(v15 + 80) = *((_OWORD *)v13 + 5);
    *(_OWORD *)(v15 + 96) = *((_OWORD *)v13 + 6);
    v15 += 128LL;
    v18 = *((_OWORD *)v13 + 7);
    v13 += 128;
    *(_OWORD *)(v15 - 16) = v18;
    --v17;
  }
  while ( v17 );
  *(_OWORD *)v15 = *(_OWORD *)v13;
  *(_OWORD *)(v15 + 16) = *((_OWORD *)v13 + 1);
  *(_OWORD *)(v15 + 32) = *((_OWORD *)v13 + 2);
  *(_OWORD *)(v15 + 48) = *((_OWORD *)v13 + 3);
  *(_QWORD *)(v15 + 64) = *((_QWORD *)v13 + 8);
  *(_DWORD *)(v15 + 72) = *((_DWORD *)v13 + 18);
  v19 = (_OWORD *)(v10 + 3256);
  v20 = &unk_1C0280CA0;
  *(_DWORD *)(v10 + 3008) = 1;
  do
  {
    *v19 = *v20;
    v19[1] = v20[1];
    v19[2] = v20[2];
    v19[3] = v20[3];
    v19[4] = v20[4];
    v19[5] = v20[5];
    v19[6] = v20[6];
    v19 += 8;
    v21 = v20[7];
    v20 += 8;
    *(v19 - 1) = v21;
    --v16;
  }
  while ( v16 );
  *v19 = *v20;
  v22 = v20[1];
  *(_QWORD *)(v10 + 3808) = 0LL;
  *(_DWORD *)(v10 + 3800) = 6;
  v19[1] = v22;
  *(_DWORD *)(v10 + 6360) = 1;
  *(_OWORD *)(v10 + 8032) = *(_OWORD *)&gxsReferenceTrackerCountedTypes;
  *(_OWORD *)(v10 + 8048) = xmmword_1C028B610;
  *(_DWORD *)(v10 + 6496) = 0;
  *(_QWORD *)(v10 + 6472) = v10 + 6408;
  *(_OWORD *)(v10 + 8064) = xmmword_1C028B620;
  *(_BYTE *)(v10 + 1216) = 0;
  *(_DWORD *)(v10 + 6484) = 4096;
  *(_OWORD *)(v10 + 6524) = xmmword_1C028B588;
  *(_OWORD *)(v10 + 6540) = xmmword_1C028B598;
  result = 1;
  *(_DWORD *)(v10 + 6556) = 75;
  *(_OWORD *)(v10 + 6560) = xmmword_1C028B5B0;
  *(_OWORD *)(v10 + 6576) = xmmword_1C028B5C0;
  *(_DWORD *)(v10 + 6592) = 99;
  *(_OWORD *)(v10 + 6596) = xmmword_1C028B5D8;
  *(_OWORD *)(v10 + 6612) = xmmword_1C028B5E8;
  *(_DWORD *)(v10 + 6628) = 83;
  return result;
}
