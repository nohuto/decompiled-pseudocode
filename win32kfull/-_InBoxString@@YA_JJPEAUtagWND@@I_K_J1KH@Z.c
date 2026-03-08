/*
 * XREFs of ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C01CDA48
 * Callers:
 *     NtUserfnINCBOXSTRING @ 0x1C01E1DB0 (NtUserfnINCBOXSTRING.c)
 *     NtUserfnINLBOXSTRING @ 0x1C01E2110 (NtUserfnINLBOXSTRING.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     NtUserfnINSTRINGNULL @ 0x1C00A0C10 (NtUserfnINSTRINGNULL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     NtUserfnINSTRING @ 0x1C01E35A0 (NtUserfnINSTRING.c)
 */

__int64 __fastcall _InBoxString(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int128 *a5,
        unsigned __int64 a6,
        unsigned int a7,
        int a8)
{
  int v11; // ebp
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rbx
  __int64 result; // rax
  unsigned int v15; // ecx
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // ebp
  __int64 (__fastcall *v19)(__int64, unsigned int, unsigned __int64, __int128 *, __int64); // rax

  v11 = a1;
  v12 = PtiCurrentShared(a1);
  v13 = v12;
  if ( (unsigned __int64)a2 - 2 > 0xFFFFFFFFFFFFFFFBuLL || !v12 )
    return -1LL;
  v15 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 28LL);
  if ( v11 == 678 )
  {
    v16 = 399;
    v17 = v15 >> 6;
  }
  else
  {
    v16 = 332;
    v17 = v15 >> 9;
  }
  v18 = *((_DWORD *)v12 + 363);
  if ( (v17 & 1) != 0 || (*(_DWORD *)(*((_QWORD *)a2 + 5) + 28LL) & 0x30) == 0 )
  {
    *((_DWORD *)v12 + 363) = 2;
    if ( a3 == v16 )
      result = NtUserfnINSTRINGNULL((__int64)a2, a3, a4, a5, a6, a7, a8);
    else
      result = NtUserfnINSTRING((_DWORD)a2, a3, a4, (_DWORD)a5, a6, a7, a8);
    goto LABEL_15;
  }
  v19 = (__int64 (__fastcall *)(__int64, unsigned int, unsigned __int64, __int128 *, __int64))*((_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
                                                                                              + (((_BYTE)a7 + 6) & 0x1F));
  if ( v19 == xxxSendMessageFF || (char *)v19 == (char *)xxxWrapSendMessageBSM )
    return -1LL;
  *((_DWORD *)v13 + 363) = 1;
  result = v19((__int64)a2, a3, a4, a5, a6);
LABEL_15:
  *((_DWORD *)v13 + 363) = v18;
  return result;
}
