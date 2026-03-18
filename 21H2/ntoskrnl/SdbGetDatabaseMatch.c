/*
 * XREFs of SdbGetDatabaseMatch @ 0x14075E2D8
 * Callers:
 *     PiIsDriverBlocked @ 0x14075E568 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpCreateSearchDBContext @ 0x14075B270 (SdbpCreateSearchDBContext.c)
 *     SdbpSearchDB @ 0x14075BB10 (SdbpSearchDB.c)
 *     AslFileMappingCreate @ 0x14075E160 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x14075E448 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x14075E4A8 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreateFromImageView @ 0x140842D98 (AslFileMappingCreateFromImageView.c)
 *     SdbTagIDToTagRef @ 0x14085CF70 (SdbTagIDToTagRef.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // eax
  int v11; // ebx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // [rsp+28h] [rbp-D8h]
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v18[96]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19[32]; // [rsp+A0h] [rbp-60h] BYREF

  memset(&v18[4], 0, 0x5CuLL);
  memset(v19, 0, sizeof(v19));
  P = 0LL;
  v8 = 10;
  v16 = 0;
  if ( a4 )
    v8 = 26;
  *(_DWORD *)v18 = v8;
  if ( (int)AslFileMappingCreate((wchar_t ***)&P, a2, (void *)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL) < 0
    && (!a4 || (int)AslFileMappingCreateFromImageView(&P, a2, a4, a5) < 0) )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_7;
  }
  if ( !(unsigned int)SdbpCreateSearchDBContext(v18, (const wchar_t **)P) )
    goto LABEL_19;
  v10 = SdbpSearchDB(a1, *(void **)(a1 + 8), v9, (__int64)v18, v19, v15);
  v11 = 16;
  if ( v10 > 0x10 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_11;
  }
  v11 = v10;
  if ( v10 )
  {
LABEL_11:
    v13 = v11 - 1;
    v14 = v11 - 1;
    if ( v13 < 0 )
      goto LABEL_7;
    while ( (v19[2 * v14 + 1] & 2) != 0 || (unsigned int)SdbTagIDToTagRef(a1, *(_QWORD *)(a1 + 8), v19[2 * v14], &v16) )
    {
      if ( --v14 < 0 )
        goto LABEL_7;
    }
LABEL_19:
    AslLogCallPrintf(1LL);
  }
LABEL_7:
  SdbpReleaseSearchDBContext(v18);
  AslFileMappingDelete(P);
  return v16;
}
