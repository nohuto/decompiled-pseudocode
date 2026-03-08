/*
 * XREFs of ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00E689C
 * Callers:
 *     VidSchiSubmitRenderCommand @ 0x1C0106E0C (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C00E6FDC (-ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z.c)
 *     ?VerifyAllocationForSubmissionPhysical@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00E9BFC (-VerifyAllocationForSubmissionPhysical@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PrepareDmaBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_DMA_BUFFER *a3,
        unsigned int a4,
        unsigned int *a5,
        union _LARGE_INTEGER *a6)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // r10
  VIDMM_GLOBAL *v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdi
  struct VIDMM_ALLOC **v13; // rbx
  __int64 v14; // rdi
  __int64 result; // rax
  VIDMM_GLOBAL *v16; // rcx

  v6 = *((_QWORD *)a3 + 8);
  if ( v6 )
  {
    *a5 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(**(_QWORD **)v6 + 120LL));
    v10 = (VIDMM_GLOBAL *)(*(_QWORD *)(v9 + 128) + *(_QWORD *)(v8 + 24));
  }
  else
  {
    v10 = (VIDMM_GLOBAL *)*((_QWORD *)a3 + 11);
    *a5 = 0;
  }
  v11 = 0;
  v12 = *((_QWORD *)a3 + 14);
  v13 = (struct VIDMM_ALLOC **)*((_QWORD *)a3 + 13);
  a6->QuadPart = (LONGLONG)v10;
  if ( a4 )
  {
    v14 = v12 + 8;
    do
    {
      if ( *v13 )
      {
        result = VIDMM_GLOBAL::VerifyAllocationForSubmissionPhysical(v10, *v13);
        if ( (int)result < 0 )
          return result;
        VIDMM_GLOBAL::ReferenceAllocationForSubmission(v16, *v13, (*(_BYTE *)v14 & 1) == 0);
        *(_DWORD *)v14 ^= (*(_DWORD *)v14 ^ (2 * VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(**(_QWORD **)*v13 + 120LL)))) & 0x3E;
        v10 = (VIDMM_GLOBAL *)(*(_QWORD *)(**(_QWORD **)*v13 + 128LL)
                             + *(_QWORD *)(*(_QWORD *)(**(_QWORD **)*v13 + 120LL) + 24LL));
        *(_QWORD *)(v14 + 8) = v10;
      }
      ++v11;
      ++v13;
      v14 += 24LL;
    }
    while ( v11 < a4 );
  }
  return 0LL;
}
