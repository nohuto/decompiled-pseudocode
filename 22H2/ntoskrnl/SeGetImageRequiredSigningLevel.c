/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x14066B068
 * Callers:
 *     MiValidateExistingImage @ 0x14066A3F8 (MiValidateExistingImage.c)
 *     MiCreateNewSection @ 0x140700490 (MiCreateNewSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x1402FA190 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(PVOID Object, __int64 a2, char a3, char a4, char *a5)
{
  unsigned int v5; // esi
  PVOID v7; // rbp
  char v8; // di
  _KPROCESS *Process; // rcx
  char v10; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h] BYREF
  BOOLEAN IsUntrustedObject[22]; // [rsp+32h] [rbp-16h] BYREF

  v5 = 0;
  v12 = 0;
  v13 = 0;
  v7 = Object;
  IsUntrustedObject[0] = 0;
  if ( qword_140C1DB50 )
    return (unsigned int)((__int64 (__fastcall *)(PVOID))qword_140C1DB50)(Object);
  v8 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v8 = SeILSigningPolicyRuntime;
  if ( v8 == 2 && !a3 )
  {
    *a5 = 2;
    return v5;
  }
  if ( a3 == 2 )
  {
    if ( !v8 )
    {
      *a5 = 0;
      return v5;
    }
  }
  else if ( !a3 )
  {
LABEL_31:
    *a5 = a3;
    return v5;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_31;
  if ( qword_140C1DB20 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(Object) = a4;
    if ( (unsigned int)qword_140C1DB20(Object, a2) )
      goto LABEL_31;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 0 || a3 != 6 )
    goto LABEL_31;
  if ( ((__int64)Process[2].ReadyListHead.Blink & 0x800000) != 0 )
    goto LABEL_18;
  if ( !qword_140C1DB18 )
    return (unsigned int)-1073741823;
  v5 = qword_140C1DB18(v7, &v12, &v13);
  if ( (v5 & 0x80000000) != 0 )
    return v5;
  if ( v12 || v13 )
    goto LABEL_18;
  v5 = RtlIsUntrustedObject(0LL, v7, IsUntrustedObject);
  if ( (v5 & 0x80000000) != 0 )
    return v5;
  if ( IsUntrustedObject[0] )
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
  return v5;
}
