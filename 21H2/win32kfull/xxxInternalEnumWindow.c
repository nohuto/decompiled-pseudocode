/*
 * XREFs of xxxInternalEnumWindow @ 0x1C01CE524
 * Callers:
 *     xxxTurnOffCompositing @ 0x1C01E2C78 (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C0239060 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

struct tagBWL *__fastcall xxxInternalEnumWindow(
        ShellWindowManagement *a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        unsigned int a4)
{
  struct tagBWL *result; // rax
  struct tagBWL *v7; // rdi
  _QWORD *v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  result = BuildHwndList(a1, (const struct tagWND *)a4, 0LL, 1);
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
        if ( v11 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v16 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v16;
          *((_QWORD *)&v16 + 1) = v11;
          HMLockObject(v11);
          v9 = a2(v11, a3);
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
