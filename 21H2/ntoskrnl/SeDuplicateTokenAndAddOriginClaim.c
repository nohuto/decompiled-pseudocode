/*
 * XREFs of SeDuplicateTokenAndAddOriginClaim @ 0x1409CC1BC
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     SepAddTokenOriginClaim @ 0x1409CC540 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeDuplicateTokenAndAddOriginClaim(__int128 *a1, __int64 a2, unsigned int a3, PVOID *a4)
{
  int v7; // ebx
  PVOID v8; // rcx
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-38h] BYREF
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  __int128 v14; // [rsp+68h] [rbp-18h]

  Object = 0LL;
  v13 = 0;
  v11[1] = 0LL;
  v12 = 0;
  v11[2] = 0LL;
  v11[0] = 48LL;
  v14 = 0LL;
  v7 = SepDuplicateToken(a1, (__int64)v11, 0, 1, 0, 0, 0, (__int64 *)&Object);
  if ( v7 >= 0 )
  {
    v7 = SepAddTokenOriginClaim(a2, a3, Object);
    if ( v7 >= 0 )
    {
      *a4 = Object;
      return (unsigned int)v7;
    }
    v8 = Object;
  }
  else
  {
    v8 = 0LL;
    Object = 0LL;
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v7;
}
