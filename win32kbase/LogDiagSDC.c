/*
 * XREFs of LogDiagSDC @ 0x1C001049C
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0011DE0 (xxxUserSetDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C0176190 (NtUserSetDisplayConfig.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00CA680 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memcmp @ 0x1C00E17D0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall LogDiagSDC(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        _DWORD *a9)
{
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  NSInstrumentation::CLeakTrackingAllocator *v12; // rbx
  int v13; // eax
  __int64 Pool2; // rdi
  unsigned int v15; // edx
  unsigned int v16; // r8d
  int v17; // ecx
  __int64 DxgkWin32kInterface; // rax
  _QWORD *v19; // rax
  unsigned int v20; // edx
  __int64 v21; // r10
  __int64 v22; // r11
  char v23; // r12
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-D8h]
  unsigned int v31; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 Buf1; // [rsp+F0h] [rbp-10h] BYREF

  v30 = a4;
  v31 = a3;
  v10 = a1;
  v11 = 200 * a1 + 88;
  if ( 200 * a1 == -88 )
    goto LABEL_34;
  v12 = gpLeakTrackingAllocator;
  v29 = 1936876615;
  v33 = 260LL;
  *(_QWORD *)&Buf1 = 200 * a1 + 88;
  v13 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v11, 1936876615LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v12 + 14);
    goto LABEL_5;
  }
  if ( v13 != 1 )
  {
    if ( v13 == 2 )
    {
      v32[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, v32) )
      {
        v32[0] = (unsigned __int64)&v33;
        v32[1] = (unsigned __int64)&v29;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v12,
                  v32,
                  &Buf1);
        goto LABEL_5;
      }
      v23 = 0;
      if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
      {
        v21 += 16LL;
        v23 = 1;
        *(_QWORD *)&Buf1 = v21;
      }
      Pool2 = ExAllocatePool2(v22, v21, v20);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v12 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v23 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v12,
                                  Pool2,
                                  v32[0],
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_5;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v12,
                                     Pool2,
                                     v32[0],
                                     BackTrace) )
        {
          goto LABEL_5;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v12 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_29;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u)
    || v11 + 16 <= v11 )
  {
LABEL_29:
    Pool2 = 0LL;
    goto LABEL_5;
  }
  v19 = (_QWORD *)ExAllocatePool2(v33 & 0xFFFFFFFFFFFFFFFDuLL, v11 + 16, v29);
  Pool2 = (__int64)v19;
  if ( !v19
    || (_InterlockedIncrement64((volatile signed __int64 *)v12 + 14),
        *v19 = 1936876615LL,
        Pool2 = (__int64)(v19 + 2),
        v19 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v12 + 1),
      (const void *)0x73726447);
  }
LABEL_5:
  if ( !Pool2 )
  {
LABEL_34:
    WdLogSingleEntry1(6LL, v11);
    DrvDxgkLogCodePointPacket(3LL, v31, v30, a6);
    return;
  }
  *(_DWORD *)(Pool2 + 40) = 0;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  v15 = v31;
  v16 = v30;
  *(_DWORD *)Pool2 = 47;
  *(_DWORD *)(Pool2 + 4) = v11;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_DWORD *)(Pool2 + 60) = a5;
  *(_DWORD *)(Pool2 + 64) = a6;
  *(_DWORD *)(Pool2 + 72) = v15;
  *(_DWORD *)(Pool2 + 52) = v10;
  *(_DWORD *)(Pool2 + 68) = v16;
  v17 = (a2 == 0) | (a8 != 0 ? 8 : 0) | 2;
  *(_DWORD *)(Pool2 + 48) = v17;
  if ( a9 )
  {
    v24 = v17 | (16 * (*a9 & 3));
    *(_DWORD *)(Pool2 + 48) = v24;
    Buf1 = 0LL;
    *(_DWORD *)(Pool2 + 48) = (memcmp(&Buf1, a9 + 1, 0x10uLL) == 0 ? 0x40 : 0) | v24;
  }
  *(_QWORD *)(Pool2 + 80) = a7;
  *(_DWORD *)(Pool2 + 76) = 200;
  if ( a2 && (_DWORD)v10 )
  {
    v25 = Pool2 + 104;
    v26 = v10;
    v27 = (_QWORD *)(a2 + 16);
    do
    {
      *(_QWORD *)(v25 - 16) = *(v27 - 2);
      *(_QWORD *)(v25 - 8) = *(v27 - 1);
      v28 = *v27;
      v27 += 27;
      *(_QWORD *)v25 = v28;
      *(_DWORD *)(v25 + 8) = *((_DWORD *)v27 - 52);
      *(_DWORD *)(v25 + 12) = *((_DWORD *)v27 - 51);
      *(_OWORD *)(v25 + 16) = *(_OWORD *)(v27 - 25);
      *(_OWORD *)(v25 + 32) = *(_OWORD *)(v27 - 23);
      *(_OWORD *)(v25 + 48) = *(_OWORD *)(v27 - 21);
      *(_DWORD *)(v25 + 64) = *((_DWORD *)v27 - 38);
      *(_DWORD *)(v25 + 68) = *((_DWORD *)v27 - 37);
      *(_QWORD *)(v25 + 72) = *(v27 - 18);
      *(_DWORD *)(v25 + 80) = *((_DWORD *)v27 - 34);
      *(_BYTE *)(v25 + 84) = *((_BYTE *)v27 - 132);
      *(_BYTE *)(v25 + 85) = *((_BYTE *)v27 - 131);
      *(_DWORD *)(v25 + 88) = *((_DWORD *)v27 - 32);
      *(_DWORD *)(v25 + 92) = *((_DWORD *)v27 - 31);
      *(_DWORD *)(v25 + 96) = *((_DWORD *)v27 - 30);
      *(_QWORD *)(v25 + 100) = *(_QWORD *)((char *)v27 - 116);
      *(_QWORD *)(v25 + 108) = *(_QWORD *)((char *)v27 - 108);
      *(_QWORD *)(v25 + 116) = *(_QWORD *)((char *)v27 - 100);
      *(_OWORD *)(v25 + 124) = *(_OWORD *)((char *)v27 - 92);
      *(_DWORD *)(v25 + 140) = *((_DWORD *)v27 - 19);
      *(_DWORD *)(v25 + 144) = *((_DWORD *)v27 - 18);
      *(_DWORD *)(v25 + 148) = *((_DWORD *)v27 - 17);
      *(_QWORD *)(v25 + 152) = *(v27 - 8);
      *(_QWORD *)(v25 + 160) = *(v27 - 7);
      *(_DWORD *)(v25 + 168) = *((_DWORD *)v27 - 12);
      *(_QWORD *)(v25 + 172) = *(_QWORD *)((char *)v27 - 36);
      *(_DWORD *)(v25 + 180) = *((_DWORD *)v27 - 5);
      v25 += 200LL;
      --v26;
    }
    while ( v26 );
  }
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 304))(Pool2);
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
}
