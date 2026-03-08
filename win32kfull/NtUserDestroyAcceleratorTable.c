/*
 * XREFs of NtUserDestroyAcceleratorTable @ 0x1C00F3BA0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserDestroyAcceleratorTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi

  EnterCrit(0LL, 0LL);
  v2 = HMValidateHandle(a1, 8u);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    if ( (unsigned int)HMMarkObjectDestroy(v2) )
      HMFreeObject(v5);
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
