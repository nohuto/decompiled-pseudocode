/*
 * XREFs of xxxInternalEnumWindow @ 0x1C01A9044
 * Callers:
 *     xxxTurnOffCompositing @ 0x1C01BE490 (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C0223360 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 * Callees:
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

struct tagBWL *__fastcall xxxInternalEnumWindow(
        ShellWindowManagement *a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        char a4)
{
  struct tagBWL *result; // rax
  struct tagBWL *v7; // rsi
  _QWORD *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  result = BuildHwndList(a1, a4, 0LL, 1);
  v7 = result;
  if ( result )
  {
    v8 = (_QWORD *)((char *)result + 32);
    v9 = 1;
    v10 = *((_QWORD *)result + 4);
    if ( v10 != 1 )
    {
      do
      {
        v11 = HMValidateHandleNoSecure(v10, 1);
        v12 = v11;
        if ( v11 )
        {
          ThreadLockAlways(v11, &v16);
          v9 = a2(v12, a3);
          ThreadUnlock1(v14, v13, v15);
          if ( !v9 )
            break;
        }
        v10 = *++v8;
      }
      while ( *v8 != 1LL );
    }
    FreeHwndList(v7);
    return (struct tagBWL *)v9;
  }
  return result;
}
