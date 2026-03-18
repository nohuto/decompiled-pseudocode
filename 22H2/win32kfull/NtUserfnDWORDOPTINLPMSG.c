/*
 * XREFs of NtUserfnDWORDOPTINLPMSG @ 0x1C0155230
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnDWORDOPTINLPMSG(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int128 *v6; // rbx
  unsigned int v8; // esi
  __int128 v11; // [rsp+38h] [rbp-40h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+58h] [rbp-20h]

  v6 = (__int128 *)a4;
  v8 = a2;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  PtiCurrentShared(a1, a2, a3, a4);
  if ( v6 )
  {
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v6 = (__int128 *)MmUserProbeAddress;
    v11 = *v6;
    v12 = v6[1];
    v13 = v6[2];
    v6 = &v11;
  }
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.SectorSize
          + ((a6 + 6) & 0x1F)))(
           a1,
           v8,
           a3,
           v6,
           a5);
}
