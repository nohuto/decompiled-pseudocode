/*
 * XREFs of GreHintDCWnd @ 0x1C008EF30
 * Callers:
 *     UpdateRedirectedDCE @ 0x1C008EDF0 (UpdateRedirectedDCE.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0131264 (--1DCOBJA@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C013E478 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0159CE4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0159D32 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreHintDCWnd(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __m128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 v20; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v21[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v22[40]; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0LL;
  v21[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v22);
  LOBYTE(v10) = 1;
  v11 = HmgShareLockEx(a1, v10, 0LL);
  v21[0] = v11;
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 464) = a2;
    v13 = *(_QWORD *)(v11 + 496);
    if ( !v13 || *(int *)(v13 + 112) < 0 )
    {
      v20 = 0;
      if ( a2 && (unsigned int)UserIsWindowGdiScaled(a2, &v20) && v20 != 96 )
      {
        v14 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v20));
        v14.m128_f32[0] = v14.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v12, _mm_unpacklo_ps(v14, v14).m128_u64[0]);
      }
      else
      {
        v15 = *(_DWORD *)(v12 + 520);
        if ( (v15 & 1) != 0 )
        {
          *(_DWORD *)(v12 + 36) |= 0x10u;
          *(_QWORD *)(v12 + 524) = 0LL;
          *(_QWORD *)(v12 + 532) = 0LL;
          *(_DWORD *)(v12 + 520) = v15 & 0xFFFFFFF8 | 4;
          DC::vUpdateCachedDPIScaleValue((DC *)v12);
        }
      }
    }
    v16 = v21[0];
    *(_QWORD *)(v21[0] + 472LL) = a3;
    if ( a3 )
    {
      v17 = ValidateHwnd(a3);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 16);
        if ( v18 )
          v6 = **(_QWORD **)(v18 + 424);
      }
    }
    *(_QWORD *)(v16 + 480) = v6;
    *(_DWORD *)(v21[0] + 488LL) = a4;
    *(_DWORD *)(v21[0] + 492LL) = a5;
    DCOBJA::~DCOBJA((DCOBJA *)v21);
    return 1LL;
  }
  else
  {
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v22);
    return 0LL;
  }
}
