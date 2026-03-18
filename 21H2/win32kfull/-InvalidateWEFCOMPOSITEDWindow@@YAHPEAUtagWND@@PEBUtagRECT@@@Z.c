/*
 * XREFs of ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E1FA0
 * Callers:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C016BA80 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01E2070 (-NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall InvalidateWEFCOMPOSITEDWindow(struct tagWND *a1, __m128i *a2)
{
  __int64 v2; // rax
  __m128i v4; // xmm0
  unsigned int v5; // ebx
  int v6; // r8d
  int v7; // edx
  HRGN v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  __m128i v13; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v13 = *a2;
  v4 = v13;
  v6 = *(_DWORD *)(v2 + 92);
  v7 = *(_DWORD *)(v2 + 88);
  v13.m128i_i32[2] += v7;
  v13.m128i_i32[0] = v7 + _mm_cvtsi128_si32(v4);
  v13.m128i_i32[3] += v6;
  v13.m128i_i32[1] += v6;
  v8 = (HRGN)GreCreateRectRgnIndirect(&v13);
  if ( v8 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
    xxxInternalInvalidate(a1, v8, 0x485u);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12, v9, v10);
    GreDeleteObject(v8);
    return 1;
  }
  return v5;
}
