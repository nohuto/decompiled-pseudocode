/*
 * XREFs of LogDiagSDC @ 0x1C005C5BC
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C0160660 (NtUserSetDisplayConfig.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memcmp @ 0x1C00DD6E0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
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
  __int64 v11; // rbp
  unsigned int v13; // esi
  PVOID v14; // rbx
  __int64 v15; // rdx
  __int64 Pool2; // rdi
  int v17; // ecx
  __int64 v18; // rax
  char v19; // r15
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 Buf1; // [rsp+C0h] [rbp-58h] BYREF

  v11 = a1;
  v13 = 200 * a1 + 88;
  if ( 200 * a1 == -88 )
    goto LABEL_29;
  v14 = gpLeakTrackingAllocator;
  v15 = v13;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) != 0x73726447
    || (v18 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_3:
    Pool2 = ExAllocatePool2(260LL, v13);
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v18) != 1936876615 )
  {
    if ( ++v18 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_3;
  }
  v19 = 0;
  if ( v13 < 0x1000 || (v13 & 0xFFF) != 0 )
  {
    v19 = 1;
    v15 = v13 + 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v15);
  if ( !Pool2 )
    goto LABEL_22;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v19 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v14,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
    goto LABEL_21;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v14,
                           Pool2,
                           BackTrace) )
  {
LABEL_21:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_22:
    Pool2 = 0LL;
  }
LABEL_4:
  if ( !Pool2 )
  {
LABEL_29:
    WdLogSingleEntry1(6LL, v13);
    DrvDxgkLogCodePointPacket(3LL, a3, a4, a6);
    return;
  }
  *(_DWORD *)(Pool2 + 40) = 0;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_DWORD *)Pool2 = 47;
  *(_DWORD *)(Pool2 + 4) = v13;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_DWORD *)(Pool2 + 60) = a5;
  *(_DWORD *)(Pool2 + 64) = a6;
  *(_DWORD *)(Pool2 + 52) = v11;
  *(_DWORD *)(Pool2 + 68) = a4;
  *(_DWORD *)(Pool2 + 72) = a3;
  v17 = (a2 == 0) | (a8 != 0 ? 8 : 0) | 2;
  *(_DWORD *)(Pool2 + 48) = v17;
  if ( a9 )
  {
    v20 = v17 | (16 * (*a9 & 3));
    *(_DWORD *)(Pool2 + 48) = v20;
    Buf1 = 0LL;
    *(_DWORD *)(Pool2 + 48) = (memcmp(&Buf1, a9 + 1, 0x10uLL) == 0 ? 0x40 : 0) | v20;
  }
  *(_QWORD *)(Pool2 + 80) = a7;
  *(_DWORD *)(Pool2 + 76) = 200;
  if ( a2 && (_DWORD)v11 )
  {
    v21 = Pool2 + 104;
    v22 = v11;
    v23 = (_QWORD *)(a2 + 16);
    do
    {
      *(_QWORD *)(v21 - 16) = *(v23 - 2);
      *(_QWORD *)(v21 - 8) = *(v23 - 1);
      v24 = *v23;
      v23 += 27;
      *(_QWORD *)v21 = v24;
      *(_DWORD *)(v21 + 8) = *((_DWORD *)v23 - 52);
      *(_DWORD *)(v21 + 12) = *((_DWORD *)v23 - 51);
      *(_OWORD *)(v21 + 16) = *(_OWORD *)(v23 - 25);
      *(_OWORD *)(v21 + 32) = *(_OWORD *)(v23 - 23);
      *(_OWORD *)(v21 + 48) = *(_OWORD *)(v23 - 21);
      *(_DWORD *)(v21 + 64) = *((_DWORD *)v23 - 38);
      *(_DWORD *)(v21 + 68) = *((_DWORD *)v23 - 37);
      *(_QWORD *)(v21 + 72) = *(v23 - 18);
      *(_DWORD *)(v21 + 80) = *((_DWORD *)v23 - 34);
      *(_BYTE *)(v21 + 84) = *((_BYTE *)v23 - 132);
      *(_BYTE *)(v21 + 85) = *((_BYTE *)v23 - 131);
      *(_DWORD *)(v21 + 88) = *((_DWORD *)v23 - 32);
      *(_DWORD *)(v21 + 92) = *((_DWORD *)v23 - 31);
      *(_DWORD *)(v21 + 96) = *((_DWORD *)v23 - 30);
      *(_QWORD *)(v21 + 100) = *(_QWORD *)((char *)v23 - 116);
      *(_QWORD *)(v21 + 108) = *(_QWORD *)((char *)v23 - 108);
      *(_QWORD *)(v21 + 116) = *(_QWORD *)((char *)v23 - 100);
      *(_OWORD *)(v21 + 124) = *(_OWORD *)((char *)v23 - 92);
      *(_DWORD *)(v21 + 140) = *((_DWORD *)v23 - 19);
      *(_DWORD *)(v21 + 144) = *((_DWORD *)v23 - 18);
      *(_DWORD *)(v21 + 148) = *((_DWORD *)v23 - 17);
      *(_QWORD *)(v21 + 152) = *(v23 - 8);
      *(_QWORD *)(v21 + 160) = *(v23 - 7);
      *(_DWORD *)(v21 + 168) = *((_DWORD *)v23 - 12);
      *(_QWORD *)(v21 + 172) = *(_QWORD *)((char *)v23 - 36);
      *(_DWORD *)(v21 + 180) = *((_DWORD *)v23 - 5);
      v21 += 200LL;
      --v22;
    }
    while ( v22 );
  }
  ((void (__fastcall *)(__int64))qword_1C0296790)(Pool2);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (void *)Pool2);
}
