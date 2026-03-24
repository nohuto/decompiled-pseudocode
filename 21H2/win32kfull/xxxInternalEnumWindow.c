/*
 * XREFs of xxxInternalEnumWindow @ 0x1C01D2394
 * Callers:
 *     xxxTurnOffCompositing @ 0x1C01E85B0 (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C023DCF8 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C025019C (xxxHelpLoop.c)
 * Callees:
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

struct tagBWL *__fastcall xxxInternalEnumWindow(
        struct tagWND *a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        char a4)
{
  struct tagBWL *result; // rax
  struct tagBWL *v7; // rdi
  unsigned __int64 *v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]

  v14 = 0LL;
  v15 = 0LL;
  result = BuildHwndList(a1, a4, 0LL);
  v7 = result;
  if ( result )
  {
    v8 = (unsigned __int64 *)((char *)result + 32);
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
          *(_QWORD *)&v14 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v14;
          *((_QWORD *)&v14 + 1) = v11;
          HMLockObject(v11);
          v9 = a2(v11, a3);
          ThreadUnlock1(v13);
          if ( !v9 )
            break;
        }
        v10 = *++v8;
      }
      while ( *v8 != 1 );
    }
    FreeHwndList(v7);
    return (struct tagBWL *)v9;
  }
  return result;
}
