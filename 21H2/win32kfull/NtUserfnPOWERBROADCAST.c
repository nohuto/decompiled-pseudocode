/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x1C0109670
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserfnPOWERBROADCAST(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 a5, char a6)
{
  _DWORD *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v16; // [rsp+30h] [rbp-58h]
  __int128 v17; // [rsp+48h] [rbp-40h]
  __int128 v18; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19; // [rsp+68h] [rbp-20h]

  v16 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9 = a4;
  if ( (a3 & 0x8000) != 0 && a4 )
  {
    ProbeForRead(a4, 0x14uLL, 1u);
    v17 = *(_OWORD *)a4;
    v10 = a4[4];
    if ( v10 + 20 < v10 )
    {
      v14 = 0LL;
      goto LABEL_9;
    }
    ProbeForRead(a4, v10 + 20, 1u);
    v11 = Win32AllocPoolWithQuotaZInit(v10 + 20, 1651536725LL);
    v16 = v11;
    if ( !v11 )
    {
      UserSetLastError(8LL, v12);
      v14 = 0LL;
      goto LABEL_9;
    }
    v13 = v11;
    PushW32ThreadLock(v11, &v18, (__int64)Win32FreePool);
    *(_OWORD *)v13 = v17;
    *(_DWORD *)(v13 + 16) = v10;
    memmove((void *)(v13 + 20), a4 + 5, v10);
    v9 = (_DWORD *)v13;
  }
  v14 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _DWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          v9,
          a5);
LABEL_9:
  if ( v16 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v18);
  return v14;
}
