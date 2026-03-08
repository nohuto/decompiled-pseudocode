/*
 * XREFs of NtUserfnINCNTOUTSTRINGNULL @ 0x1C01E1FC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRINGNULL(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        _WORD *a4,
        __int64 a5,
        char a6,
        int a7)
{
  int v11; // ecx
  __int64 v12; // rbx
  int v14; // [rsp+40h] [rbp-18h] BYREF
  int v15; // [rsp+44h] [rbp-14h]
  _WORD *v16; // [rsp+48h] [rbp-10h]

  PtiCurrentShared(a1);
  v11 = (a7 << 31) ^ (a3 ^ (a7 << 31)) & 0x7FFFFFFF;
  v15 = v11;
  v12 = 0LL;
  if ( !a7 )
  {
    v11 ^= (v11 ^ (2 * v11)) & 0x7FFFFFFF;
    v15 = v11;
  }
  if ( (v11 & 0x7FFFFFFFu) < 2 || (v11 & 0x7FFFFFFFu) < a3 )
  {
    UserSetLastError(87);
  }
  else
  {
    v14 = 0;
    v16 = a4;
    ProbeForWrite(a4, v11 & 0x7FFFFFFF, (v11 >> 31) + 2);
    *a4 = 0;
    return (*((__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, int *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v14,
             a5);
  }
  return v12;
}
