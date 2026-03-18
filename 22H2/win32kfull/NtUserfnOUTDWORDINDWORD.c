/*
 * XREFs of NtUserfnOUTDWORDINDWORD @ 0x1C01E2970
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTDWORDINDWORD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _DWORD *v7; // r14
  unsigned int v8; // edi
  __int64 v10; // r8
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF

  v7 = (_DWORD *)a3;
  v8 = a2;
  v12[0] = 0;
  PtiCurrentShared(a1, a2, a3, a4);
  v10 = (*((__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, __int64))&WPP_MAIN_CB.SectorSize
         + ((a6 + 6) & 0x1F)))(
          a1,
          v8,
          v12,
          a4,
          a5);
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  *v7 = v12[0];
  return v10;
}
