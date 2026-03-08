/*
 * XREFs of SeQuerySigningPolicy @ 0x14070DD2C
 * Callers:
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140858F60 (PspCreateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     SeQuerySigningPolicyWorker @ 0x14070BBF8 (SeQuerySigningPolicyWorker.c)
 *     SepIsMinTCB @ 0x14070E10C (SepIsMinTCB.c)
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
  int IsMinTCB; // r13d
  __int64 v13; // rcx
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int (__fastcall *v18)(__int64, __int64); // rax

  v7 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v7 = SeILSigningPolicyRuntime;
  IsMinTCB = SepIsMinTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
  if ( IsMinTCB >= 0 || (IsMinTCB = SeQuerySigningPolicyWorker(a1, (__int64)a2, a3, a4, v7, a5, a6, a7), IsMinTCB >= 0) )
  {
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
    if ( (*a5 & 0xF) != 8 )
    {
      if ( qword_140C37600 )
      {
        LOBYTE(v11) = 8;
        LOBYTE(v13) = *a5;
        if ( (unsigned int)qword_140C37600(v13, v11) )
        {
          if ( (SeCiDebugOptions & 4) != 0
            || (SeCiDebugOptions & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          {
            if ( qword_140C37600 && (LOBYTE(v15) = 8, LOBYTE(v16) = v7, (unsigned int)qword_140C37600(v16, v15))
              || (*a7 & 7) == 0 )
            {
              v14 = v7 & 0xF;
              *a5 = v7 & 0xF | *a5 & 0x30;
              v18 = (unsigned int (__fastcall *)(__int64, __int64))qword_140C37600;
              if ( !qword_140C37600 )
                goto LABEL_22;
              LOBYTE(v16) = v7;
            }
            else
            {
              *a5 = *a5 & 0x30 | 8;
              v18 = (unsigned int (__fastcall *)(__int64, __int64))qword_140C37600;
              if ( !qword_140C37600 )
              {
LABEL_22:
                *a6 = v14 | *a6 & 0x30;
                return (unsigned int)IsMinTCB;
              }
              LOBYTE(v16) = 8;
            }
            LOBYTE(v15) = *a6;
            if ( !v18(v16, v15) )
              goto LABEL_22;
          }
        }
      }
    }
  }
  return (unsigned int)IsMinTCB;
}
