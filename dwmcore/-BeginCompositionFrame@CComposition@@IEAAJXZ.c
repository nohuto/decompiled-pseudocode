/*
 * XREFs of ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x18004FD5C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180129DEE (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qxxqx_EventWriteTransfer @ 0x1801B2484 (McTemplateU0qxxqx_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::BeginCompositionFrame(CComposition *this)
{
  LARGE_INTEGER **v1; // rdx
  LARGE_INTEGER v3; // r8
  LONGLONG QuadPart; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rsi
  __int128 v7; // xmm0
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // edi
  _QWORD *v13; // rcx
  LARGE_INTEGER PerformanceCount[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h]
  __int128 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+70h] [rbp-10h]

  v1 = (LARGE_INTEGER **)*((_QWORD *)this + 61);
  v18 = 0LL;
  *(_OWORD *)&PerformanceCount[0].LowPart = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( v1 )
  {
    *((LARGE_INTEGER *)this + 60) = (*v1)[9];
    PerformanceCount[0] = (*v1)[8];
    v3 = (*v1)[27];
    PerformanceCount[1] = v3;
    *(LARGE_INTEGER *)&v16 = (*v1)[6];
    QuadPart = (*v1)[30].QuadPart;
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount[1]);
    PerformanceCount[0].QuadPart = 0LL;
    DWORD1(v16) = 0;
    v3 = PerformanceCount[1];
    QuadPart = g_qpcFrequency.QuadPart / 60;
  }
  v5 = *((_QWORD *)this + 78);
  v6 = (_QWORD *)((char *)this + 496);
  *((_QWORD *)&v16 + 1) = QuadPart;
  *((LARGE_INTEGER *)this + 76) = v3;
  *(_QWORD *)(v5 + 4136) = QuadPart;
  v7 = *(_OWORD *)((char *)this + 1304);
  v8 = *((_QWORD *)this + 81);
  LODWORD(v18) = *((_DWORD *)this + 330);
  v17 = v7;
  v9 = (*(__int64 (__fastcall **)(__int64, LARGE_INTEGER *, char *))(*(_QWORD *)v8 + 16LL))(
         v8,
         PerformanceCount,
         (char *)this + 496);
  v12 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0xBD2u, 0LL);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0qxxqx_EventWriteTransfer(
      v11,
      v10,
      v12,
      *v6,
      PerformanceCount[1].QuadPart,
      SBYTE4(v16),
      PerformanceCount[0].QuadPart);
  if ( *((_BYTE *)this + 1279) )
  {
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)this + 136LL))(this);
    *((_BYTE *)this + 1279) = 0;
  }
  v13 = (_QWORD *)*((_QWORD *)this + 61);
  if ( v13 )
  {
    v13 = (_QWORD *)*v13;
    v13[3] = *v6;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000000) != 0 )
    McTemplateU0x_EventWriteTransfer(v13, &CurrentFrameId, *v6);
  if ( DWORD2(v17) )
    dword_1803E2A10 |= 0x40u;
  return v12;
}
