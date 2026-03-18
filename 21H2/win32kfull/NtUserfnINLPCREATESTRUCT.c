/*
 * XREFs of NtUserfnINLPCREATESTRUCT @ 0x1C00E8800
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E89FC (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00E8A3C (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserfnINLPCREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // r10
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  _OWORD v16[7]; // [rsp+40h] [rbp-78h] BYREF

  memset(v16, 0, sizeof(v16));
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = 0LL;
  if ( !a4 )
  {
    if ( a2 == 129 )
      return v11;
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             (unsigned __int64)v16 & -(__int64)(a4 != 0),
             a5);
  }
  v12 = (_OWORD *)a4;
  if ( a4 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  v16[0] = *v12;
  v16[1] = v12[1];
  v16[2] = v12[2];
  v16[3] = v12[3];
  v16[4] = v12[4];
  v13 = *((_QWORD *)&v16[3] + 1);
  if ( a7 )
  {
    RtlInitLargeAnsiString(&v16[5]);
    if ( (*(_QWORD *)&v16[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlInitLargeAnsiString(&v16[6]);
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             (unsigned __int64)v16 & -(__int64)(a4 != 0),
             a5);
  }
  if ( *((_QWORD *)&v16[3] + 1) )
  {
    if ( (BYTE8(v16[3]) & 1) != 0 )
      goto LABEL_15;
    v13 = *((_QWORD *)&v16[3] + 1);
  }
  RtlInitLargeUnicodeString(&v16[5], v13);
  v14 = *(_QWORD *)&v16[4];
  if ( (*(_QWORD *)&v16[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( !*(_QWORD *)&v16[4] )
    {
LABEL_12:
      RtlInitLargeUnicodeString(&v16[6], v14);
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))mpFnidPfn[(a6 + 6) & 0x1F])(
               a1,
               a2,
               a3,
               (unsigned __int64)v16 & -(__int64)(a4 != 0),
               a5);
    }
    if ( (v16[4] & 1) == 0 )
    {
      v14 = *(_QWORD *)&v16[4];
      goto LABEL_12;
    }
LABEL_15:
    ExRaiseDatatypeMisalignment();
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           (unsigned __int64)v16 & -(__int64)(a4 != 0),
           a5);
}
