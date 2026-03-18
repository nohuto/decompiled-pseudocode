/*
 * XREFs of ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C01F13B4
 * Callers:
 *     NtUserfnINCBOXSTRING @ 0x1C02014C0 (NtUserfnINCBOXSTRING.c)
 *     NtUserfnINLBOXSTRING @ 0x1C0201830 (NtUserfnINLBOXSTRING.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     NtUserfnINSTRINGNULL @ 0x1C00E8700 (NtUserfnINSTRINGNULL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     NtUserfnINSTRING @ 0x1C0202E80 (NtUserfnINSTRING.c)
 */

__int64 __fastcall _InBoxString(
        int a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        int a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // r8d
  bool v18; // dl
  bool v19; // zf
  int v20; // ebp
  __int64 (__fastcall *v21)(__int64, __int64, unsigned __int64, __int64, ULONG64); // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( (unsigned __int64)a2 - 2 > 0xFFFFFFFFFFFFFFFBuLL || !ThreadWin32Thread )
    return -1LL;
  v15 = *((_QWORD *)a2 + 5);
  if ( a1 == 678 )
  {
    v16 = *(_DWORD *)(v15 + 28);
    v17 = 399;
    v18 = (v16 & 0x40) != 0;
    v19 = (v16 & 0x30) == 0;
  }
  else
  {
    v17 = 332;
    v18 = (*(_DWORD *)(v15 + 28) & 0x200) != 0;
    v19 = (*(_DWORD *)(v15 + 28) & 0x30) == 0;
  }
  v20 = *(_DWORD *)(v13 + 1412);
  if ( v18 || v19 )
  {
    *(_DWORD *)(v13 + 1412) = 2;
    if ( a3 == v17 )
      result = NtUserfnINSTRINGNULL((__int64)a2, a3, a4, a5, a6, a7, a8);
    else
      result = NtUserfnINSTRING((_DWORD)a2, a3, a4, a5, a6, a7, a8);
    goto LABEL_15;
  }
  v21 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64, ULONG64))mpFnidPfn[((_BYTE)a7 + 6) & 0x1F];
  if ( v21 == xxxSendMessageFF || (char *)v21 == (char *)xxxWrapSendMessageBSM )
    return -1LL;
  *(_DWORD *)(v13 + 1412) = 1;
  result = v21((__int64)a2, a3, a4, a5, a6);
LABEL_15:
  *(_DWORD *)(v13 + 1412) = v20;
  return result;
}
