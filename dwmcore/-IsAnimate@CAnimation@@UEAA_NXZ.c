/*
 * XREFs of ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x1800E86D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CAnimation::IsAnimate(CAnimation *this)
{
  char v2; // al
  char v3; // dl

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 192LL))((char *)this - 64);
  v3 = 0;
  if ( !v2 && *((_DWORD *)this + 8) && !*((_BYTE *)this + 58) && (!*((_BYTE *)this + 60) || !*((_BYTE *)this + 56)) )
    return 1;
  return v3;
}
