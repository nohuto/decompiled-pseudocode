/*
 * XREFs of NtUserfnOUTCBOXSTRING @ 0x1C02031C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     NtUserfnGETDBCSTEXTLENGTHS @ 0x1C010A7C0 (NtUserfnGETDBCSTEXTLENGTHS.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTCBOXSTRING(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        volatile void *a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  ULONG v15; // r8d
  SIZE_T v16; // rdx
  int v17; // eax
  __int128 v19; // [rsp+48h] [rbp-40h] BYREF

  v19 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL )
    return -1LL;
  v10 = NtUserfnGETDBCSTEXTLENGTHS(a1, 0x149u, a3, (__int64)a4, a5, a6, a7);
  v11 = -1LL;
  if ( v10 != -1 )
  {
    v12 = v10 + 1;
    v13 = v10 + 1;
    if ( !a7 )
      v13 = 2 * v12;
    v14 = (a7 << 31) | v13 & 0x7FFFFFFF;
    DWORD1(v19) = v14;
    if ( (v14 & 0x7FFFFFFFu) < (unsigned int)v12 )
    {
      UserSetLastError(0LL, v12);
      return v11;
    }
    LODWORD(v19) = 0;
    *((_QWORD *)&v19 + 1) = a4;
    if ( (v14 & 0x7FFFFFFF) != 0 )
    {
      v15 = (v14 >> 31) + 2;
      v16 = v14 & 0x7FFFFFFF;
    }
    else
    {
      if ( !a4 )
      {
LABEL_12:
        v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
                a1,
                a2,
                a3,
                &v19,
                a5);
        v17 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL);
        if ( (v17 & 0x200) == 0 && (v17 & 0x30) != 0 )
          return a7 != 0 ? 8LL : 4LL;
        return v11;
      }
      v16 = ((unsigned __int64)(unsigned int)~v14 >> 31) + 1;
      v15 = (v14 >> 31) + 2;
    }
    ProbeForWrite(a4, v16, v15);
    goto LABEL_12;
  }
  return v11;
}
