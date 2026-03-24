/*
 * XREFs of SeQuerySigningPolicy @ 0x14060D450
 * Callers:
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1407CE380 (PspCreateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     SeQuerySigningPolicyWorker @ 0x140603818 (SeQuerySigningPolicyWorker.c)
 *     SepIsMinTCB @ 0x14060D584 (SepIsMinTCB.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        void *a1,
        const UNICODE_STRING *a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  unsigned __int8 v7; // bp
  __int64 v11; // rdx
  unsigned int IsMinTCB; // r14d
  __int64 v13; // rcx
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int (__fastcall *v18)(__int64, __int64); // rax

  v7 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v7 = SeILSigningPolicyRuntime;
  IsMinTCB = SepIsMinTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
  if ( (IsMinTCB & 0x80000000) != 0 )
  {
    IsMinTCB = SeQuerySigningPolicyWorker(a1, (__int64)a2, a3, a4, v7, a5, a6, a7);
    if ( (IsMinTCB & 0x80000000) != 0 )
      return IsMinTCB;
  }
  v13 = (*a7 & 7u) - 1;
  if ( (*a7 & 7) == 1 )
  {
    *a5 |= 0x30u;
  }
  else if ( (*a7 & 7) == 2 )
  {
    *a5 |= 0x10u;
    *a6 |= 0x10u;
  }
  v14 = 8;
  if ( (*a5 & 0xF) == 8 )
    return IsMinTCB;
  if ( !qword_140C1DB20 )
    return IsMinTCB;
  LOBYTE(v11) = 8;
  LOBYTE(v13) = *a5;
  if ( !(unsigned int)qword_140C1DB20(v13, v11)
    || (SeCiDebugOptions & 4) == 0
    && ((SeCiDebugOptions & 2) == 0 || !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent) )
  {
    return IsMinTCB;
  }
  if ( !qword_140C1DB20 || (LOBYTE(v15) = 8, LOBYTE(v16) = v7, !(unsigned int)qword_140C1DB20(v16, v15)) )
  {
    if ( (*a7 & 7) != 0 )
    {
      *a5 = *a5 & 0x30 | 8;
      v18 = (unsigned int (__fastcall *)(__int64, __int64))qword_140C1DB20;
      if ( qword_140C1DB20 )
      {
        LOBYTE(v16) = 8;
        goto LABEL_25;
      }
LABEL_26:
      *a6 = v14 | *a6 & 0x30;
      return IsMinTCB;
    }
  }
  v14 = v7 & 0xF;
  *a5 = v7 & 0xF | *a5 & 0x30;
  v18 = (unsigned int (__fastcall *)(__int64, __int64))qword_140C1DB20;
  if ( !qword_140C1DB20 )
    goto LABEL_26;
  LOBYTE(v16) = v7;
LABEL_25:
  LOBYTE(v15) = *a6;
  if ( !v18(v16, v15) )
    goto LABEL_26;
  return IsMinTCB;
}
