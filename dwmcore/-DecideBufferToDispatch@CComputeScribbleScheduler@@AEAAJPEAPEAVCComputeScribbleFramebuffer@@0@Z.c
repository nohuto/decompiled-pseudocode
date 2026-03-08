/*
 * XREFs of ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x1801FFD9C
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180200614 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqff_EventWriteTransfer @ 0x180201228 (McTemplateU0qqqff_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleScheduler::DecideBufferToDispatch(
        CComputeScribbleScheduler *this,
        struct CComputeScribbleFramebuffer **a2,
        struct CComputeScribbleFramebuffer **a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  unsigned __int64 v10; // rax
  double v11; // xmm0_8
  int v12; // r8d
  int v13; // r9d
  double v14; // xmm3_8
  double v15; // xmm5_8
  struct CComputeScribbleFramebuffer *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // rdx
  int v20; // r8d
  struct CComputeScribbleFramebuffer *v21; // rdx
  int v22; // r9d
  int v23; // ecx
  float v24; // [rsp+28h] [rbp-80h]
  float v25; // [rsp+30h] [rbp-78h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v27[4]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v28; // [rsp+58h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 25) + 32LL))(*((_QWORD *)this + 25), v27);
  v8 = v7;
  if ( v7 >= 0 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v10 = (PerformanceCount.QuadPart - v28) / (qword_1803E2B70 / 0xF4240uLL);
    if ( (v10 & 0x8000000000000000uLL) != 0LL )
      v11 = (double)(int)(v10 & 1 | (v10 >> 1)) + (double)(int)(v10 & 1 | (v10 >> 1));
    else
      v11 = (double)(int)v10;
    v12 = 0;
    v13 = v27[0] - *((_DWORD *)this + 44);
    v14 = 0.0;
    v15 = 0.0;
    if ( (_DWORD)v6 )
    {
      while ( 1 )
      {
        v16 = *(struct CComputeScribbleFramebuffer **)(*((_QWORD *)this + 14) + 8LL * ((v12 + v13) % (unsigned int)v6));
        if ( *((_BYTE *)v16 + 240) )
        {
          v17 = *((_QWORD *)this + 17);
          v18 = 32LL * ((v12 + v13) % (unsigned int)v6);
          if ( !v12 )
          {
            v15 = *(double *)(v18 + v17 + 8);
            *(_QWORD *)&v14 = COERCE_UNSIGNED_INT64(*((double *)this + 6) - v11 / 1000000.0 - (v15
                                                                                             - (double)0
                                                                                             * *((double *)this + 6))) & _xmm;
          }
          if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(
                               *((double *)this + 6)
                             - v11 / 1000000.0
                             - (*(double *)(v18 + v17 + 8)
                              - (double)v12 * *((double *)this + 6))) & _xmm) < 0.002499999944120646 )
            break;
        }
        if ( ++v12 >= (unsigned int)v6 )
          goto LABEL_14;
      }
      *a2 = v16;
    }
LABEL_14:
    v19 = (v13 + 1) % (unsigned int)v6;
    v20 = v19;
    if ( *a2 )
      v19 = (*((_DWORD *)*a2 + 61) + 1) % (unsigned int)v6;
    v21 = *(struct CComputeScribbleFramebuffer **)(*((_QWORD *)this + 14) + 8 * v19);
    if ( *((_BYTE *)v21 + 240) )
      *a3 = v21;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v22 = -1;
      if ( *a3 )
        v23 = *((_DWORD *)*a3 + 61);
      else
        v23 = -1;
      if ( *a2 )
        v22 = *((_DWORD *)*a2 + 61);
      v25 = v15;
      v24 = v14;
      McTemplateU0qqqff_EventWriteTransfer(v23, (_DWORD)v21, v20, v22, v23, SLOBYTE(v24), SLOBYTE(v25));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x271,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
