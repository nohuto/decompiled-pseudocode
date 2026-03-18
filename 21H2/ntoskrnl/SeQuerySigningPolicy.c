/*
 * XREFs of SeQuerySigningPolicy @ 0x14066F4C0
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x14085DACC (PspCreateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     SepIsMinTCB @ 0x14066F678 (SepIsMinTCB.c)
 *     SeQuerySigningPolicyWorker @ 0x1406718F8 (SeQuerySigningPolicyWorker.c)
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
  int IsMinTCB; // r13d
  __int64 v10; // rcx
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int (__fastcall *v15)(__int64, __int64); // rax

  v7 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v7 = SeILSigningPolicyRuntime;
  IsMinTCB = SepIsMinTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
  if ( IsMinTCB >= 0
    || (IsMinTCB = SeQuerySigningPolicyWorker(a1, v7, (__int64)a5, (__int64)a6, (__int64)a7), IsMinTCB >= 0) )
  {
    v10 = (*a7 & 7u) - 1;
    if ( (*a7 & 7) == 1 )
    {
      *a5 |= 0x30u;
    }
    else if ( (*a7 & 7) == 2 )
    {
      *a5 |= 0x10u;
      *a6 |= 0x10u;
    }
    v11 = 8;
    if ( (*a5 & 0xF) != 8 )
    {
      if ( qword_140C1B8E0 )
      {
        LOBYTE(v8) = 8;
        LOBYTE(v10) = *a5;
        if ( (unsigned int)qword_140C1B8E0(v10, v8) )
        {
          if ( (SeCiDebugOptions & 4) != 0
            || (SeCiDebugOptions & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          {
            if ( qword_140C1B8E0 && (LOBYTE(v12) = 8, LOBYTE(v13) = v7, (unsigned int)qword_140C1B8E0(v13, v12))
              || (*a7 & 7) == 0 )
            {
              v11 = v7 & 0xF;
              *a5 = v7 & 0xF | *a5 & 0x30;
              v15 = (unsigned int (__fastcall *)(__int64, __int64))qword_140C1B8E0;
              if ( !qword_140C1B8E0 )
                goto LABEL_22;
              LOBYTE(v13) = v7;
            }
            else
            {
              *a5 = *a5 & 0x30 | 8;
              v15 = (unsigned int (__fastcall *)(__int64, __int64))qword_140C1B8E0;
              if ( !qword_140C1B8E0 )
              {
LABEL_22:
                *a6 = v11 | *a6 & 0x30;
                return (unsigned int)IsMinTCB;
              }
              LOBYTE(v13) = 8;
            }
            LOBYTE(v12) = *a6;
            if ( !v15(v13, v12) )
              goto LABEL_22;
          }
        }
      }
    }
  }
  return (unsigned int)IsMinTCB;
}
