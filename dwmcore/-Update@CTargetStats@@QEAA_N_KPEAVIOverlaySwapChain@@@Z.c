/*
 * XREFs of ?Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1801E4C60
 * Callers:
 *     ?GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801E511C (-GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CTargetStats::Update(CTargetStats *this, unsigned __int64 a2, struct IOverlaySwapChain *a3)
{
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-20h]

  if ( a2 <= *((_QWORD *)this + 6) )
    return 1;
  v5 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a3 + 8LL))(a3);
  *(_DWORD *)this = v5;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( v5 )
  {
    if ( (*(int (__fastcall **)(struct IOverlaySwapChain *, __int128 *))(*(_QWORD *)a3 + 112LL))(a3, &v10) >= 0 )
    {
      v6 = *(_DWORD *)this;
      v7 = v10;
      if ( *(_DWORD *)this >= (unsigned int)v10 )
      {
        *((_DWORD *)this + 8) = v10;
        *((_DWORD *)this + 1) = v6 - v7;
        *((_DWORD *)this + 2) = v11;
        *((_DWORD *)this + 3) = DWORD1(v12);
        *((_QWORD *)this + 2) = *((_QWORD *)&v11 + 1);
        *((_QWORD *)this + 3) = *((_QWORD *)&v12 + 1);
        *((_DWORD *)this + 9) = DWORD1(v10);
        *((_QWORD *)this + 5) = *((_QWORD *)&v10 + 1);
        v8 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a3 + 72LL))(a3);
        *((_QWORD *)this + 6) = *((_QWORD *)&v11 + 1) + 9 * v8 / 0xAuLL;
        return 1;
      }
    }
  }
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = 0LL;
  return 0;
}
