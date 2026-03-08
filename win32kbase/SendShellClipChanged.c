/*
 * XREFs of SendShellClipChanged @ 0x1C0218490
 * Callers:
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C020B0A4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     SendMessageTo @ 0x1C0081230 (SendMessageTo.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall SendShellClipChanged(void *Src, unsigned int a2)
{
  __int64 v2; // rsi
  char v3; // r15
  __int64 Pool2; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned int v8; // eax
  NSInstrumentation::CLeakTrackingAllocator *v9; // rdi
  unsigned __int64 v10; // rbx
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // r10
  __int64 v14; // r9
  unsigned __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h]
  PVOID BackTrace[26]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v20; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v21; // [rsp+160h] [rbp+60h] BYREF
  __int64 v22; // [rsp+168h] [rbp+68h] BYREF

  v2 = a2;
  v18 = 0LL;
  v3 = 0;
  Pool2 = (__int64)v17;
  LODWORD(v6) = 40;
  memset(v17, 0, sizeof(v17));
  if ( a2 <= 1 )
    goto LABEL_21;
  v7 = 16LL * (a2 - 1);
  v3 = 1;
  if ( v7 > 0xFFFFFFFF )
    return;
  v8 = v7 + 40;
  if ( (unsigned int)(v7 + 40) < 0x28 )
    return;
  v9 = gpLeakTrackingAllocator;
  v10 = v8;
  v6 = v8;
  v20 = 1668506453;
  v11 = *(_DWORD *)gpLeakTrackingAllocator;
  v22 = 260LL;
  v15 = v10;
  if ( !v11 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v10, 1668506453LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v9 + 14);
    goto LABEL_20;
  }
  if ( v11 != 1 )
  {
    if ( v11 != 2 )
      return;
    v21 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668506453, &v21) )
    {
      v16[0] = &v22;
      v16[1] = &v20;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v9,
                (__int64)v16,
                &v15);
      goto LABEL_20;
    }
    v15 = v10 + 16;
    Pool2 = ExAllocatePool2(v13, v10 + 16, 1668506453LL);
    if ( !Pool2 )
      return;
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v9,
             (const void *)Pool2,
             v21,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_20;
      }
LABEL_25:
      _InterlockedIncrement64((volatile signed __int64 *)v9 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      return;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
            (__int64)v9,
            Pool2,
            v21,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_25;
LABEL_21:
    *(_DWORD *)Pool2 = 3;
    *(_DWORD *)(Pool2 + 8) = v2;
    memmove((void *)(Pool2 + 12), Src, 16 * v2);
    SendMessageTo(0LL, Pool2, (unsigned int)v6, v14);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
    return;
  }
  if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63736355u)
    && v6 + 16 > v10 )
  {
    v12 = (_QWORD *)ExAllocatePool2(v22 & 0xFFFFFFFFFFFFFFFDuLL, v6 + 16, v20);
    Pool2 = (__int64)v12;
    if ( !v12
      || (_InterlockedIncrement64((volatile signed __int64 *)v9 + 14),
          *v12 = 1668506453LL,
          Pool2 = (__int64)(v12 + 2),
          v12 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v9 + 1),
        0x63736355uLL);
    }
LABEL_20:
    if ( !Pool2 )
      return;
    goto LABEL_21;
  }
}
