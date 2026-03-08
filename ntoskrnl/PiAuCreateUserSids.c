/*
 * XREFs of PiAuCreateUserSids @ 0x140B5B564
 * Callers:
 *     PiAuCreateSecurityObjects @ 0x140B5A978 (PiAuCreateSecurityObjects.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
 *     PiAuAllocateAndInitializeSid @ 0x14081E100 (PiAuAllocateAndInitializeSid.c)
 */

__int64 __fastcall PiAuCreateUserSids(PVOID *a1)
{
  int v2; // ebx
  PSID *v3; // rsi
  PSID *v4; // rsi
  PSID *v5; // rsi
  PSID *v6; // rsi
  PSID *v7; // rsi
  PSID *v8; // rsi
  BOOLEAN valid; // al
  unsigned int v10; // ecx
  struct _SID_IDENTIFIER_AUTHORITY v12; // [rsp+60h] [rbp+40h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v13; // [rsp+68h] [rbp+48h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v14; // [rsp+70h] [rbp+50h] BYREF

  *(_WORD *)&v12.Value[4] = 1280;
  *(_DWORD *)v12.Value = 0;
  *(_DWORD *)v13.Value = 0;
  *(_WORD *)&v13.Value[4] = 256;
  *(_DWORD *)v14.Value = 0;
  *(_WORD *)&v14.Value[4] = 3840;
  memset(a1, 0, 0x40uLL);
  v2 = PiAuAllocateAndInitializeSid(a1, &v12, 1u);
  if ( v2 >= 0 )
  {
    *((_DWORD *)*a1 + 2) = 18;
    if ( !RtlValidSid(*a1) )
      return (unsigned int)-1073741595;
    v3 = a1 + 1;
    v2 = PiAuAllocateAndInitializeSid(a1 + 1, &v13, 1u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v3 + 2) = 0;
    if ( !RtlValidSid(*v3) )
      return (unsigned int)-1073741595;
    v4 = a1 + 2;
    v2 = PiAuAllocateAndInitializeSid(a1 + 2, &v12, 2u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v4 + 2) = 32;
    *((_DWORD *)*v4 + 3) = 544;
    if ( !RtlValidSid(*v4) )
      return (unsigned int)-1073741595;
    v5 = a1 + 3;
    v2 = PiAuAllocateAndInitializeSid(a1 + 3, &v12, 1u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v5 + 2) = 2;
    if ( !RtlValidSid(*v5) )
      return (unsigned int)-1073741595;
    v6 = a1 + 4;
    v2 = PiAuAllocateAndInitializeSid(a1 + 4, &v12, 2u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v6 + 2) = 32;
    *((_DWORD *)*v6 + 3) = 545;
    if ( !RtlValidSid(*v6) )
      return (unsigned int)-1073741595;
    v7 = a1 + 5;
    v2 = PiAuAllocateAndInitializeSid(a1 + 5, &v12, 1u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v7 + 2) = 19;
    if ( !RtlValidSid(*v7) )
      return (unsigned int)-1073741595;
    v8 = a1 + 6;
    v2 = PiAuAllocateAndInitializeSid(a1 + 6, &v12, 1u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v8 + 2) = 20;
    if ( !RtlValidSid(*v8) )
      return (unsigned int)-1073741595;
    v2 = PiAuAllocateAndInitializeSid(a1 + 7, &v14, 2u);
    if ( v2 >= 0 )
    {
      *((_DWORD *)a1[7] + 2) = 2;
      *((_DWORD *)a1[7] + 3) = 1;
      valid = RtlValidSid(a1[7]);
      v10 = v2;
      if ( !valid )
        return (unsigned int)-1073741595;
      return v10;
    }
  }
  return (unsigned int)v2;
}
