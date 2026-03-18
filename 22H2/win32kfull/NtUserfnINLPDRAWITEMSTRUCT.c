/*
 * XREFs of NtUserfnINLPDRAWITEMSTRUCT @ 0x1C01E12A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall NtUserfnINLPDRAWITEMSTRUCT(__int64 a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _OWORD v15[4]; // [rsp+40h] [rbp-78h] BYREF

  memset_0(v15, 0, sizeof(v15));
  PtiCurrentShared(v11, v10, v12, v13);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_OWORD *)MmUserProbeAddress;
  v15[0] = *a4;
  v15[1] = a4[1];
  v15[2] = a4[2];
  v15[3] = a4[3];
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.SectorSize
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           v15,
           a5);
}
