/*
 * XREFs of SeQuerySigningPolicy @ 0x14069CAA0
 * Callers:
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1407CE5D0 (PspCreateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     SepIsMinTCB @ 0x14069CBD4 (SepIsMinTCB.c)
 *     SeQuerySigningPolicyWorker @ 0x1406F2F48 (SeQuerySigningPolicyWorker.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        void *a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int IsMinTCB; // r14d
  __int64 v11; // rcx
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int (__fastcall *v17)(__int64, __int64); // rax

  v7 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v7 = SeILSigningPolicyRuntime;
  IsMinTCB = SepIsMinTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
  if ( (IsMinTCB & 0x80000000) != 0 )
  {
    IsMinTCB = SeQuerySigningPolicyWorker(a1, v7, (__int64)a5, (__int64)a6, (__int64)a7);
    if ( (IsMinTCB & 0x80000000) != 0 )
      return IsMinTCB;
  }
  v11 = (*a7 & 7u) - 1;
  if ( (*a7 & 7) == 1 )
  {
    *a5 |= 0x30u;
  }
  else if ( (*a7 & 7) == 2 )
  {
    *a5 |= 0x10u;
    *a6 |= 0x10u;
  }
  v12 = 8;
  if ( (*a5 & 0xF) == 8 )
    return IsMinTCB;
  if ( !qword_140C1DB20 )
    return IsMinTCB;
  LOBYTE(v8) = 8;
  LOBYTE(v11) = *a5;
  if ( !(unsigned int)qword_140C1DB20(v11, v8, v9)
    || (SeCiDebugOptions & 4) == 0
    && ((SeCiDebugOptions & 2) == 0 || !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent) )
  {
    return IsMinTCB;
  }
  if ( !qword_140C1DB20 || (LOBYTE(v13) = 8, LOBYTE(v14) = v7, !(unsigned int)qword_140C1DB20(v14, v13, v15)) )
  {
    if ( (*a7 & 7) != 0 )
    {
      *a5 = *a5 & 0x30 | 8;
      v17 = (unsigned int (__fastcall *)(__int64, __int64))qword_140C1DB20;
      if ( qword_140C1DB20 )
      {
        LOBYTE(v14) = 8;
        goto LABEL_25;
      }
LABEL_26:
      *a6 = v12 | *a6 & 0x30;
      return IsMinTCB;
    }
  }
  v12 = v7 & 0xF;
  *a5 = v7 & 0xF | *a5 & 0x30;
  v17 = (unsigned int (__fastcall *)(__int64, __int64))qword_140C1DB20;
  if ( !qword_140C1DB20 )
    goto LABEL_26;
  LOBYTE(v14) = v7;
LABEL_25:
  LOBYTE(v13) = *a6;
  if ( !v17(v14, v13) )
    goto LABEL_26;
  return IsMinTCB;
}
