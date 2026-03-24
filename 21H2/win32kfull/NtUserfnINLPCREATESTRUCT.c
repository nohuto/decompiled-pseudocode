/*
 * XREFs of NtUserfnINLPCREATESTRUCT @ 0x1C0033DD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C0033FBC (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C0034008 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
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
  __int64 v15; // rdx
  _OWORD v17[7]; // [rsp+40h] [rbp-78h] BYREF

  memset(v17, 0, sizeof(v17));
  v11 = 0LL;
  if ( !a4 )
  {
    if ( a2 == 129 )
      return v11;
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             (unsigned __int64)v17 & -(__int64)(a4 != 0),
             a5);
  }
  v12 = (_OWORD *)a4;
  if ( a4 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  v17[0] = *v12;
  v17[1] = v12[1];
  v17[2] = v12[2];
  v17[3] = v12[3];
  v17[4] = v12[4];
  v13 = *((_QWORD *)&v17[3] + 1);
  if ( a7 )
  {
    if ( *((_QWORD *)&v17[3] + 1) )
      v13 = *((_QWORD *)&v17[3] + 1);
    RtlInitLargeAnsiString(&v17[5], v13);
    v15 = *(_QWORD *)&v17[4];
    if ( (*(_QWORD *)&v17[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v17[4] )
        v15 = *(_QWORD *)&v17[4];
      RtlInitLargeAnsiString(&v17[6], v15);
    }
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             (unsigned __int64)v17 & -(__int64)(a4 != 0),
             a5);
  }
  if ( *((_QWORD *)&v17[3] + 1) )
  {
    if ( (BYTE8(v17[3]) & 1) != 0 )
      goto LABEL_19;
    v13 = *((_QWORD *)&v17[3] + 1);
  }
  RtlInitLargeUnicodeString(&v17[5], v13);
  v14 = *(_QWORD *)&v17[4];
  if ( (*(_QWORD *)&v17[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( !*(_QWORD *)&v17[4] )
    {
LABEL_12:
      RtlInitLargeUnicodeString(&v17[6], v14);
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))mpFnidPfn[(a6 + 6) & 0x1F])(
               a1,
               a2,
               a3,
               (unsigned __int64)v17 & -(__int64)(a4 != 0),
               a5);
    }
    if ( (v17[4] & 1) == 0 )
    {
      v14 = *(_QWORD *)&v17[4];
      goto LABEL_12;
    }
LABEL_19:
    ExRaiseDatatypeMisalignment();
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           (unsigned __int64)v17 & -(__int64)(a4 != 0),
           a5);
}
