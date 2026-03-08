/*
 * XREFs of ?GetVBlankDuration@CHolographicInteropTarget@@UEBA_KXZ @ 0x1802A5E00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

LONGLONG __fastcall CHolographicInteropTarget::GetVBlankDuration(CHolographicInteropTarget *this)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 3);
  v2 = 60;
  memset(v8, 0, sizeof(v8));
  v3 = 1;
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 40);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 32);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64, _OWORD *, _DWORD *))(*(_QWORD *)v5 + 24LL))(v5, v8, v7);
        v2 = v7[0];
        v3 = v7[1];
      }
    }
  }
  return g_qpcFrequency.QuadPart * v3 / v2;
}
