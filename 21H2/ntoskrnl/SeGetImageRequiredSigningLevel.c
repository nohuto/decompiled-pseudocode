/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x140714ACC
 * Callers:
 *     MiCreateNewSection @ 0x1406D2BC0 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x140713E5C (MiValidateExistingImage.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x14035F3B0 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(__int64 a1, __int64 a2, char a3, char a4, char *a5)
{
  unsigned int IsUntrustedObject; // esi
  __int64 v7; // rbp
  char v8; // di
  _KPROCESS *Process; // rcx
  char v10; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h] BYREF
  char v14[22]; // [rsp+32h] [rbp-16h] BYREF

  IsUntrustedObject = 0;
  v12 = 0;
  v13 = 0;
  v7 = a1;
  v14[0] = 0;
  if ( qword_140C1DB30 )
    return (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C1DB30)(a1);
  v8 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v8 = SeILSigningPolicyRuntime;
  if ( v8 == 2 && !a3 )
  {
    *a5 = 2;
    return IsUntrustedObject;
  }
  if ( a3 == 2 )
  {
    if ( !v8 )
    {
      *a5 = 0;
      return IsUntrustedObject;
    }
  }
  else if ( !a3 )
  {
LABEL_31:
    *a5 = a3;
    return IsUntrustedObject;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_31;
  if ( qword_140C1DB00 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(a1) = a4;
    if ( (unsigned int)qword_140C1DB00(a1, a2) )
      goto LABEL_31;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 0 || a3 != 6 )
    goto LABEL_31;
  if ( ((__int64)Process[2].ReadyListHead.Blink & 0x800000) != 0 )
    goto LABEL_18;
  if ( !qword_140C1DAF8 )
    return (unsigned int)-1073741823;
  IsUntrustedObject = qword_140C1DAF8(v7, &v12, &v13);
  if ( (IsUntrustedObject & 0x80000000) != 0 )
    return IsUntrustedObject;
  if ( v12 || v13 )
    goto LABEL_18;
  IsUntrustedObject = RtlIsUntrustedObject(0LL, v7, v14);
  if ( (IsUntrustedObject & 0x80000000) != 0 )
    return IsUntrustedObject;
  if ( v14[0] )
  {
LABEL_18:
    *a5 = 6;
  }
  else if ( (unsigned __int8)v8 < 2u )
  {
    *a5 = 0;
  }
  else
  {
    v10 = 9;
    if ( v8 != 2 )
      v10 = 6;
    *a5 = v10;
  }
  return IsUntrustedObject;
}
