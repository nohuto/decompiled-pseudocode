/*
 * XREFs of SdbGetDatabaseMatch @ 0x14077E808
 * Callers:
 *     PiIsDriverBlocked @ 0x14077E4C4 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SdbpReleaseSearchDBContext @ 0x140754DBC (SdbpReleaseSearchDBContext.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslFileMappingDelete @ 0x140756528 (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x140758BB8 (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x14075B000 (SdbpCreateSearchDBContext.c)
 *     SdbpSearchDB @ 0x14077E974 (SdbpSearchDB.c)
 *     AslFileMappingCreateFromImageView @ 0x1407B3938 (AslFileMappingCreateFromImageView.c)
 *     SdbTagIDToTagRef @ 0x1407CD6D0 (SdbTagIDToTagRef.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  unsigned int v9; // eax
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v15[14]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v16[32]; // [rsp+B0h] [rbp-50h] BYREF

  memset((char *)v15 + 4, 0, 0x64uLL);
  memset(v16, 0, sizeof(v16));
  P = 0LL;
  v8 = 10;
  v13 = 0;
  if ( a4 )
    v8 = 26;
  LODWORD(v15[0]) = v8;
  if ( (int)AslFileMappingCreate((__int64 *)&P, a2, (void *)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL) < 0
    && (!a4 || (int)AslFileMappingCreateFromImageView(&P, a2, a4, a5) < 0) )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_8;
  }
  if ( !(unsigned int)SdbpCreateSearchDBContext(v15, (const wchar_t **)P) )
  {
LABEL_18:
    AslLogCallPrintf(1LL);
    goto LABEL_8;
  }
  v9 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 8), v16);
  if ( v9 > 0x10 )
  {
    AslLogCallPrintf(1LL);
    v9 = 16;
  }
  if ( v9 )
  {
    v11 = v9 - 1;
    v12 = v11;
    if ( v11 >= 0 )
    {
      while ( (v16[2 * v12 + 1] & 2) != 0
           || (unsigned int)SdbTagIDToTagRef(a1, *(_QWORD *)(a1 + 8), (unsigned int)v16[2 * v12], &v13) )
      {
        if ( --v12 < 0 )
          goto LABEL_8;
      }
      goto LABEL_18;
    }
  }
LABEL_8:
  SdbpReleaseSearchDBContext(v15);
  AslFileMappingDelete((PVOID *)P);
  return v13;
}
