/*
 * XREFs of NtUserfnINSTRINGNULL @ 0x1C00A0C10
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C01CDA48 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlInitLargeUnicodeString @ 0x1C00A0F84 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00F4F04 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINSTRINGNULL(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6,
        int a7)
{
  _OWORD *v7; // rbx
  _OWORD v12[2]; // [rsp+38h] [rbp-20h] BYREF

  v7 = a4;
  v12[0] = 0LL;
  PtiCurrentShared(a1);
  if ( v7 )
  {
    if ( a7 )
    {
      RtlInitLargeAnsiString(v12, a4);
    }
    else
    {
      if ( ((unsigned __int8)v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlInitLargeUnicodeString(v12, a4);
    }
    v7 = v12;
  }
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           v7,
           a5);
}
