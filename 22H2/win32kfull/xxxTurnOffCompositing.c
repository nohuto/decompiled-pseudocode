/*
 * XREFs of xxxTurnOffCompositing @ 0x1C01BD2F0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 * Callees:
 *     xxxInternalEnumWindow @ 0x1C01A7E14 (xxxInternalEnumWindow.c)
 */

struct tagBWL *__fastcall xxxTurnOffCompositing(ShellWindowManagement **a1, int a2)
{
  struct tagBWL *result; // rax
  ShellWindowManagement *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v4 = (ShellWindowManagement *)a1;
  v9 = 0LL;
  v10 = 0LL;
  v5 = 1;
  if ( a2 )
  {
    v4 = a1[14];
    if ( !v4 )
      return result;
    v5 = 3;
    ThreadLockAlways(a1[14], &v9);
  }
  result = xxxInternalEnumWindow(v4, (__int64 (__fastcall *)(__int64, __int64))xxxEnumTurnOffCompositing, 0LL, v5);
  if ( a2 )
    return (struct tagBWL *)ThreadUnlock1(v7, v6, v8);
  return result;
}
