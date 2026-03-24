/*
 * XREFs of ?Initialize@CInputManager@@IEAAJXZ @ 0x1C00B56CC
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C00B5630 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( qword_1C0256E00 )
    v3 = qword_1C0256E00(1LL, 0LL);
  else
    v3 = 0LL;
  *(_QWORD *)this = v3;
  if ( v3 )
    *((_QWORD *)this + 15) = 0LL;
  else
    return (unsigned int)-1073741801;
  return v1;
}
