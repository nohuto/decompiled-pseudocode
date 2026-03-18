/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1407010C8
 * Callers:
 *     MiCreateNewSection @ 0x1406F914C (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x1406FF0A4 (MiValidateExistingImage.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x140206A00 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(__int64 a1, __int64 a2, __int64 a3, char a4, char *a5)
{
  unsigned int IsUntrustedObject; // esi
  char v6; // bl
  __int64 v7; // rbp
  char v8; // di
  _KPROCESS *Process; // rcx
  char v11; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h] BYREF
  char v14[22]; // [rsp+32h] [rbp-16h] BYREF

  IsUntrustedObject = 0;
  v6 = a3;
  v7 = a1;
  v12 = 0;
  v13 = 0;
  v14[0] = 0;
  if ( qword_140C1B910 )
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64))qword_140C1B910)(a1, a2, a3);
  v8 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v8 = SeILSigningPolicyRuntime;
  if ( v8 == 2 && !(_BYTE)a3 )
  {
    *a5 = 2;
    return IsUntrustedObject;
  }
  if ( (_BYTE)a3 == 2 )
  {
    if ( !v8 )
    {
      *a5 = 0;
      return IsUntrustedObject;
    }
  }
  else if ( !(_BYTE)a3 )
  {
LABEL_7:
    *a5 = v6;
    return IsUntrustedObject;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_7;
  if ( qword_140C1B8E0 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(a1) = a4;
    if ( (unsigned int)qword_140C1B8E0(a1, a2) )
      goto LABEL_7;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 0 || v6 != 6 )
    goto LABEL_7;
  if ( ((__int64)Process[2].ReadyListHead.Blink & 0x800000) != 0 )
    goto LABEL_23;
  if ( !qword_140C1B8D8 )
    return (unsigned int)-1073741823;
  IsUntrustedObject = qword_140C1B8D8(v7, &v12, &v13);
  if ( (IsUntrustedObject & 0x80000000) == 0 )
  {
    if ( !v12 && !v13 )
    {
      IsUntrustedObject = RtlIsUntrustedObject(0LL, v7, v14);
      if ( (IsUntrustedObject & 0x80000000) != 0 )
        return IsUntrustedObject;
      if ( !v14[0] )
      {
        if ( (unsigned __int8)v8 >= 2u )
        {
          v11 = 9;
          if ( v8 != 2 )
            v11 = 6;
          *a5 = v11;
        }
        else
        {
          *a5 = 0;
        }
        return IsUntrustedObject;
      }
    }
LABEL_23:
    *a5 = 6;
  }
  return IsUntrustedObject;
}
