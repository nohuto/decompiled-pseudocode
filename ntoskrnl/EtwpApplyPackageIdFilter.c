/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x1409F2138
 * Callers:
 *     EtwpApplyScopeFilters @ 0x140695404 (EtwpApplyScopeFilters.c)
 *     EtwpApplyTransientFilters @ 0x1409F2338 (EtwpApplyTransientFilters.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     RtlQueryPackageIdentity @ 0x140298300 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsQueryProcessAttributesByToken @ 0x1406D44E0 (PsQueryProcessAttributesByToken.c)
 */

char __fastcall EtwpApplyPackageIdFilter(__int64 a1, _WORD *a2, _WORD *a3)
{
  char v6; // bl
  ULONG_PTR v8; // r13
  unsigned __int16 v9; // r12
  unsigned int v10; // r15d
  char v11; // r12
  unsigned __int16 v12; // r15
  unsigned int v13; // esi
  char v14; // al
  bool v15; // [rsp+30h] [rbp-D0h] BYREF
  bool v16; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h]
  _QWORD v18[52]; // [rsp+40h] [rbp-C0h] BYREF

  v17 = a1;
  memset(v18, 0, 0x198uLL);
  v6 = 0;
  v15 = 0;
  if ( !a2 && !a3 )
    return 1;
  v8 = PsReferencePrimaryTokenWithTag(*(_QWORD *)(a1 + 80), 0x746C6644u);
  PsQueryProcessAttributesByToken(v8, &v15, &v16);
  if ( v15 )
  {
    v18[0] = 256LL;
    v18[1] = 130LL;
    if ( (int)RtlQueryPackageIdentity(v8, (int)&v18[2], (int)v18, (int)&v18[34], (__int64)&v18[1], 0LL) >= 0 )
    {
      if ( a2 )
      {
        v9 = 0;
        v10 = (v18[0] >> 1) - 1;
        if ( !*a2 )
        {
LABEL_11:
          v11 = 0;
          goto LABEL_13;
        }
        while ( (unsigned __int16)a2[8 * v9 + 4] != v10
             || wcsnicmp(*(const wchar_t **)&a2[8 * v9 + 8], (const wchar_t *)&v18[2], v10) )
        {
          if ( ++v9 >= *a2 )
            goto LABEL_11;
        }
      }
      v11 = 1;
LABEL_13:
      if ( a3 )
      {
        v12 = 0;
        v13 = (v18[1] >> 1) - 1;
        if ( !*a3 )
        {
LABEL_18:
          v14 = 0;
          goto LABEL_20;
        }
        while ( (unsigned __int16)a3[8 * v12 + 4] != v13
             || wcsnicmp(*(const wchar_t **)&a3[8 * v12 + 8], (const wchar_t *)&v18[34], v13) )
        {
          if ( ++v12 >= *a3 )
            goto LABEL_18;
        }
      }
      v14 = 1;
LABEL_20:
      if ( v11 )
      {
        if ( v14 )
          v6 = 1;
      }
    }
  }
  ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(v17 + 80) + 1208LL), v8, 0x746C6644u);
  return v6;
}
