/*
 * XREFs of ?SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z @ 0x1803E04D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x1803DDD4C (CreationThreadDispatcher--RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___.c)
 */

void __fastcall AccessibilityExperienceManager::SetWindowPosition(
        AccessibilityExperienceManager *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  __int64 v6; // rcx
  __int64 v10; // rcx
  char *v11; // [rsp+20h] [rbp-68h] BYREF
  int v12; // [rsp+28h] [rbp-60h]
  int v13; // [rsp+2Ch] [rbp-5Ch]
  int v14; // [rsp+30h] [rbp-58h]
  unsigned int v15; // [rsp+34h] [rbp-54h]
  _DWORD v16[4]; // [rsp+40h] [rbp-48h] BYREF

  v6 = *((_QWORD *)this + 29);
  v16[0] = a2;
  v16[1] = a4;
  v16[2] = a3;
  v16[3] = a5;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 64LL))(v6, v16);
    v10 = *((_QWORD *)this + 18);
    v11 = (char *)this - 152;
    v12 = a2;
    v13 = a3;
    v14 = a4;
    v15 = a5;
    CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___(v10, (volatile int *)&v11);
  }
}
