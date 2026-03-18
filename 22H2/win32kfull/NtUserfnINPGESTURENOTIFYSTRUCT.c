/*
 * XREFs of NtUserfnINPGESTURENOTIFYSTRUCT @ 0x1C01E22C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINPGESTURENOTIFYSTRUCT(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  ULONG64 v6; // rbx
  unsigned int v8; // esi
  __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h]

  v6 = a4;
  v8 = a2;
  v15 = 0LL;
  v16 = 0LL;
  PtiCurrentShared((__int64)a1, a2, a3, a4);
  if ( v8 == 284 && a6 != 670 )
  {
    v10 = 0LL;
LABEL_4:
    v11 = 5;
    goto LABEL_5;
  }
  if ( v6 + 24 < v6 || v6 + 24 > MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  v14 = *(_QWORD *)(v6 + 16);
  v15 = *(_OWORD *)v6;
  v16 = v14;
  v10 = 0LL;
  if ( (_DWORD)v15 != 24 || !HIDWORD(v14) )
  {
    v11 = 87;
    goto LABEL_5;
  }
  if ( v8 == 284 )
  {
    v12 = 0LL;
    if ( a1 )
      v12 = *a1;
    if ( *((_QWORD *)&v15 + 1) != v12 )
      goto LABEL_4;
  }
  if ( !DWORD1(v15) )
    return (*((__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.SectorSize
            + (((_BYTE)a6 + 6) & 0x1F)))(
             a1,
             v8,
             a3,
             &v15,
             a5);
  v11 = 1004;
LABEL_5:
  UserSetLastError(v11);
  return v10;
}
