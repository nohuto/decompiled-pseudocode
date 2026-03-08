/*
 * XREFs of NtUserfnOUTCBOXSTRING @ 0x1C01E3850
 * Callers:
 *     <none>
 * Callees:
 *     NtUserfnGETDBCSTEXTLENGTHS @ 0x1C00159B0 (NtUserfnGETDBCSTEXTLENGTHS.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
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
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // ecx
  SIZE_T v15; // rdx
  int v16; // eax
  __int128 v18; // [rsp+48h] [rbp-40h] BYREF

  v18 = 0LL;
  PtiCurrentShared(a1);
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
    DWORD1(v18) = v14;
    if ( (v14 & 0x7FFFFFFFu) < v12 )
    {
      UserSetLastError(0);
      return v11;
    }
    LODWORD(v18) = 0;
    *((_QWORD *)&v18 + 1) = a4;
    if ( (v14 & 0x7FFFFFFF) != 0 )
    {
      v15 = v14 & 0x7FFFFFFF;
    }
    else
    {
      if ( !a4 )
      {
LABEL_12:
        v11 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
               + ((a6 + 6) & 0x1F)))(
                a1,
                a2,
                a3,
                &v18,
                a5);
        v16 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL);
        if ( (v16 & 0x200) == 0 && (v16 & 0x30) != 0 )
          return a7 != 0 ? 8LL : 4LL;
        return v11;
      }
      v15 = ((unsigned __int64)(unsigned int)~v14 >> 31) + 1;
    }
    ProbeForWrite(a4, v15, (v14 >> 31) + 2);
    goto LABEL_12;
  }
  return v11;
}
