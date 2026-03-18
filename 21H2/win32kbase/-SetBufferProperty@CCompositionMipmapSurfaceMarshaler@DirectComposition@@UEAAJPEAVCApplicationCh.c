/*
 * XREFs of ?SetBufferProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0237400
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::SetBufferProperty(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v7; // ebx
  int v8; // r8d
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  unsigned __int64 v11; // r13
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  PVOID v14; // rbp
  __int64 v15; // rax
  __int64 Pool2; // rsi
  char v17; // r12
  __int64 v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-D8h]
  PVOID BackTrace[20]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v22; // [rsp+110h] [rbp+18h]

  v7 = 0;
  *a6 = 0;
  v8 = a3 - 1;
  if ( !v8 )
  {
    if ( a5 == 16 )
    {
      v19 = *((unsigned int *)this + 18);
      if ( (unsigned int)v19 < *((_DWORD *)this + 21) )
      {
        *((_DWORD *)this + 4) |= 0x40u;
        *(_OWORD *)(*((_QWORD *)this + 8) + 24 * v19 + 8) = *(_OWORD *)a4;
        *a6 = 1;
        *((_DWORD *)this + 24) |= 1 << *((_BYTE *)this + 72);
        return v7;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741811;
  if ( a5 != 20 )
    return (unsigned int)-1073741811;
  v9 = *a4;
  v10 = a4[1];
  v20 = a4[3];
  v22 = a4[4];
  if ( !*a4 )
    return (unsigned int)-1073741811;
  if ( !v10 )
    return (unsigned int)-1073741811;
  v11 = a4[2];
  if ( (unsigned int)(v11 - 1) > 0xE )
    return (unsigned int)-1073741811;
  v12 = *a4;
  if ( v9 <= v10 )
    v12 = a4[1];
  if ( v12 < 1 << (v11 - 1) )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 19)
    || *((_DWORD *)this + 20)
    || *((_DWORD *)this + 21)
    || *((_DWORD *)this + 23)
    || *((_DWORD *)this + 22)
    || *((_QWORD *)this + 8) )
  {
    return 3221225485LL;
  }
  v13 = 24 * v11;
  if ( !is_mul_ok(v11, 0x18uLL) )
    return (unsigned int)-1073741675;
  v14 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D6D4344) != 0x6D6D4344
    || (v15 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_21:
    Pool2 = ExAllocatePool2(261LL, 24 * v11);
    goto LABEL_22;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != 1835877188 )
  {
    if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_21;
  }
  v17 = 0;
  if ( v13 < 0x1000 || (v13 & 0xFFF) != 0 )
  {
    v17 = 1;
    v13 += 16LL;
  }
  Pool2 = ExAllocatePool2(261LL, v13);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v17 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v14,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_34;
    }
LABEL_33:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)-1073741801;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v14,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_33;
  Pool2 += 16LL;
LABEL_22:
  if ( Pool2 )
  {
LABEL_34:
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 23) = v22;
    *((_DWORD *)this + 22) = v20;
    *((_DWORD *)this + 19) = v9;
    *((_DWORD *)this + 20) = v10;
    *((_DWORD *)this + 21) = v11;
    *((_QWORD *)this + 8) = Pool2;
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x20u;
    return v7;
  }
  return (unsigned int)-1073741801;
}
