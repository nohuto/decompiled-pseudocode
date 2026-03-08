/*
 * XREFs of ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C02DFA98
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C02D7690 (DxgkUpdateGpuVirtualAddress.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C02DFA2C (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

struct _VIDSCH_CONTEXT *__fastcall DXGCONTEXT::GetVidSchCompanionContext(DXGCONTEXT *this)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]

  if ( !*((_QWORD *)this + 33) )
  {
    v5 = 0LL;
    v6 = 0;
    v2 = *((_QWORD *)this + 2);
    v4 = 0LL;
    LODWORD(v2) = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 432LL);
    HIDWORD(v4) = 0;
    LODWORD(v4) = 64;
    HIDWORD(v5) = v2;
    DWORD2(v4) = *((_DWORD *)this + 100);
    *((_QWORD *)this + 33) = (*(__int64 (__fastcall **)(DXGCONTEXT *, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                                                             + 8LL)
                                                                                 + 216LL))(
                               this,
                               &v4);
  }
  return (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 33);
}
