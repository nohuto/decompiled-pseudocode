/*
 * XREFs of ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C0030B20
 * Callers:
 *     NtUserfnINLBOXSTRING @ 0x1C0030A40 (NtUserfnINLBOXSTRING.c)
 *     NtUserfnINCBOXSTRING @ 0x1C0161D10 (NtUserfnINCBOXSTRING.c)
 * Callees:
 *     NtUserfnINSTRINGNULL @ 0x1C0033CE0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINSTRING @ 0x1C012C0E0 (NtUserfnINSTRING.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _InBoxString(
        int a1,
        struct tagWND *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        int a8)
{
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // esi
  __int64 result; // rax
  __int64 (__fastcall *v15)(int, int, int, int, __int64); // r11

  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL && gptiCurrent )
  {
    v10 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 28LL);
    if ( a1 == 678 )
    {
      v11 = 399;
      v12 = v10 >> 6;
    }
    else
    {
      v11 = 332;
      v12 = v10 >> 9;
    }
    v13 = *(_DWORD *)(gptiCurrent + 1412LL);
    if ( (v12 & 1) != 0 || (*(_DWORD *)(*((_QWORD *)a2 + 5) + 28LL) & 0x30) == 0 )
    {
      *(_DWORD *)(gptiCurrent + 1412LL) = 2;
      if ( a3 == v11 )
        result = NtUserfnINSTRINGNULL((_DWORD)a2, a3, a4, a5, a6, a7, a8);
      else
        result = NtUserfnINSTRING((_DWORD)a2, a3, a4, a5, a6, a7, a8);
      goto LABEL_8;
    }
    v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))mpFnidPfn[((_BYTE)a7 + 6) & 0x1F];
    if ( v15 != xxxSendMessageFF && v15 != xxxWrapSendMessageBSM )
    {
      *(_DWORD *)(gptiCurrent + 1412LL) = 1;
      result = v15((int)a2, a3, a4, a5, a6);
LABEL_8:
      *(_DWORD *)(gptiCurrent + 1412LL) = v13;
      return result;
    }
  }
  return -1LL;
}
