/*
 * XREFs of NtUserfnINCNTOUTSTRING @ 0x1C01E0D80
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRING(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        char a6,
        int a7)
{
  unsigned int v9; // r14d
  unsigned __int16 *v11; // rax
  signed int v12; // edx
  __int64 result; // rax
  __int128 v14; // [rsp+48h] [rbp-20h] BYREF

  v9 = a2;
  v14 = 0LL;
  PtiCurrentShared(a1, a2, a3, (__int64)a4);
  DWORD1(v14) = a7 << 31;
  v11 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v11 = (unsigned __int16 *)MmUserProbeAddress;
  v12 = *v11 | DWORD1(v14) & 0x80000000;
  DWORD1(v14) = v12;
  if ( !a7 )
  {
    v12 = (2 * v12) | v12 & 0x80000000;
    DWORD1(v14) = v12;
  }
  if ( (v12 & 0x7FFFFFFFu) < 2 )
    return 0LL;
  LODWORD(v14) = 0;
  *((_QWORD *)&v14 + 1) = a4;
  ProbeForWrite(a4, v12 & 0x7FFFFFFFLL, (v12 >> 31) + 2);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.SectorSize
            + ((a6 + 6) & 0x1F)))(
             a1,
             v9,
             a3,
             &v14,
             a5);
  if ( !result )
  {
    if ( a7 )
      *(_BYTE *)a4 = 0;
    else
      *a4 = 0;
  }
  return result;
}
