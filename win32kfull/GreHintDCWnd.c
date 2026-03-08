/*
 * XREFs of GreHintDCWnd @ 0x1C0097030
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C0096EF0 (UpdateRedirectedDCE.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00DC828 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C014CFA4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C014CFF2 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreHintDCWnd(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __m128 v15; // xmm0
  unsigned __int16 v16; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v17[4]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  v7 = 0LL;
  LOBYTE(a2) = 1;
  v17[1] = 0LL;
  result = HmgShareLockEx(a1, a2, 0LL);
  v17[0] = result;
  v10 = result;
  if ( result )
  {
    *(_QWORD *)(result + 464) = v6;
    v11 = *(_QWORD *)(result + 496);
    if ( !v11 || *(int *)(v11 + 112) < 0 )
    {
      v16 = 0;
      if ( v6 && (unsigned int)UserIsWindowGdiScaled(v6, &v16) && v16 != 96 )
      {
        v15 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v16));
        v15.m128_f32[0] = v15.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v10, _mm_unpacklo_ps(v15, v15).m128_u64[0]);
      }
      else
      {
        v14 = *(_DWORD *)(v10 + 520);
        if ( (v14 & 1) != 0 )
        {
          *(_DWORD *)(v10 + 36) |= 0x10u;
          *(_QWORD *)(v10 + 524) = 0LL;
          *(_QWORD *)(v10 + 532) = 0LL;
          *(_DWORD *)(v10 + 520) = v14 & 0xFFFFFFF8 | 4;
          DC::vUpdateCachedDPIScaleValue((DC *)v10);
        }
      }
    }
    *(_QWORD *)(v10 + 472) = a3;
    if ( a3 )
    {
      v12 = ValidateHwnd(a3);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 16);
        if ( v13 )
          v7 = **(_QWORD **)(v13 + 424);
      }
    }
    *(_QWORD *)(v10 + 480) = v7;
    *(_DWORD *)(v10 + 488) = a4;
    *(_DWORD *)(v10 + 492) = a5;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v17);
    return 1LL;
  }
  return result;
}
