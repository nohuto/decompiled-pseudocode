/*
 * XREFs of HalpHvInitMcaPcrContext @ 0x14037CEA4
 * Callers:
 *     HalpMceInit @ 0x140A87B68 (HalpMceInit.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1402C1200 (KeGetCurrentProcessorNumberEx.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403007C0 (KeSetTargetProcessorDpcEx.c)
 *     HalpGetMcaPcrContext @ 0x14037CEF4 (HalpGetMcaPcrContext.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void HalpHvInitMcaPcrContext()
{
  KPCR *Pcr; // rdi
  ULONG CurrentProcessorNumber; // r15d
  size_t v2; // rbx
  void *v3; // rax
  _DWORD *Pool2; // r14
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
  __int64 McaPcrContext; // rbp
  unsigned int i; // edi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // esi
  int v14; // r15d
  __int64 v15; // rax
  __int64 j; // rbx
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+18h]

  v17 = 0;
  Pcr = KeGetPcr();
  v19 = 0LL;
  ProcNumber = 0;
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(&ProcNumber);
    if ( !CurrentProcessorNumber && !HalpHvVpMcaPcrContextData )
    {
      v2 = 192 * KeQueryMaximumProcessorCountEx(0xFFFFu);
      v3 = (void *)HalpMmAllocCtxAlloc(v2, v2);
      HalpHvVpMcaPcrContextData = (__int64)v3;
      if ( !v3 )
        KeBugCheckEx(0xACu, (unsigned int)v2, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4CAuLL);
      memset(v3, 0, v2);
    }
    if ( !*(_QWORD *)&Pcr->HalReserved[6] )
    {
      Pool2 = 0LL;
      if ( !qword_140C62170 )
        goto LABEL_21;
      v5 = qword_140C62170(4294967294LL, &v17, 0LL);
      if ( v5 == -1073741789 )
      {
        v6 = 8 * v17;
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, 8 * v17, 1215062344LL);
        if ( !Pool2 )
          KeBugCheckEx(0xACu, v6, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4E5uLL);
        if ( qword_140C62170 )
          v5 = qword_140C62170(4294967294LL, &v17, Pool2);
        else
          v5 = -1073741823;
      }
      if ( v5 < 0 || !v17 )
LABEL_21:
        KeBugCheckEx(0x5Cu, 0x8200uLL, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4F1uLL);
      v7 = 0;
      v19 = *Pool2 & 0x7FFFFFFF;
      v8 = v19;
      McaPcrContext = HalpGetMcaPcrContext(v19);
      *(_QWORD *)(McaPcrContext + 172) = v8;
      *(_QWORD *)(McaPcrContext + 184) = 0LL;
      *(_QWORD *)&Pcr->HalReserved[6] = McaPcrContext;
      for ( i = 1; i < v17; McaPcrContext = v12 )
      {
        v7 &= ~1u;
        v19 = __PAIR64__(v7, Pool2[i] & 0x7FFFFFFF);
        v11 = v19;
        v12 = HalpGetMcaPcrContext(v19);
        ++i;
        *(_QWORD *)(v12 + 184) = 0LL;
        *(_QWORD *)(v12 + 172) = v11;
        *(_QWORD *)(McaPcrContext + 184) = v12;
      }
      v13 = v7 | 1;
      v14 = CurrentProcessorNumber & 0x7FFFFFFF;
      v19 = __PAIR64__(v13, v14);
      v15 = HalpGetMcaPcrContext(__PAIR64__(v13, v14));
      *(_QWORD *)(v15 + 184) = 0LL;
      *(_QWORD *)(v15 + 172) = __PAIR64__(v13, v14);
      *(_QWORD *)(McaPcrContext + 184) = v15;
      ExFreePoolWithTag(Pool2, 0x486C6148u);
    }
    for ( j = *(_QWORD *)&KeGetPcr()->HalReserved[6]; j; j = *(_QWORD *)(j + 184) )
    {
      if ( !*(_BYTE *)(j + 160) )
      {
        *(_DWORD *)(j + 48) = 275;
        *(_QWORD *)(j + 72) = HalpCmciDeferredRoutine;
        *(_QWORD *)(j + 80) = j;
        *(_QWORD *)(j + 104) = 0LL;
        *(_QWORD *)(j + 64) = 0LL;
        KeSetTargetProcessorDpcEx((PKDPC)(j + 48), &ProcNumber);
        *(_BYTE *)(j + 160) = 1;
      }
    }
  }
}
