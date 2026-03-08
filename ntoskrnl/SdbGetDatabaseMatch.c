/*
 * XREFs of SdbGetDatabaseMatch @ 0x14079E090
 * Callers:
 *     PiIsDriverBlocked @ 0x14079DF64 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpSearchDB @ 0x14079F878 (SdbpSearchDB.c)
 *     AslFileMappingDelete @ 0x1407A1D38 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x1407A1D98 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x1407A2D8C (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x1407A3094 (SdbpCreateSearchDBContext.c)
 *     SdbTagIDToTagRef @ 0x1408003AC (SdbTagIDToTagRef.c)
 *     AslFileMappingCreateFromImageView @ 0x140847670 (AslFileMappingCreateFromImageView.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  int v9; // r8d
  __int64 v10; // rdi
  unsigned int v11; // eax
  int v13; // eax
  __int64 v14; // rbx
  int v15; // [rsp+28h] [rbp-D8h]
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v18[28]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v19[32]; // [rsp+B0h] [rbp-50h] BYREF

  memset(&v18[1], 0, 0x64uLL);
  memset(v19, 0, sizeof(v19));
  P = 0LL;
  v8 = 10;
  v16 = 0;
  if ( a4 )
    v8 = 26;
  v18[0] = v8;
  if ( (int)AslFileMappingCreate((unsigned int)&P, a2, -1, 0, 0LL) < 0
    && (!a4 || (int)AslFileMappingCreateFromImageView(&P, a2, a4, a5) < 0) )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_8;
  }
  if ( !(unsigned int)SdbpCreateSearchDBContext(v18, P) )
  {
LABEL_12:
    AslLogCallPrintf(1LL);
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 )
  {
    v11 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 16), v9, (int)v18, v19, v15);
    if ( v11 > 0x10 )
      goto LABEL_16;
    if ( v11 )
      goto LABEL_17;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = SdbpSearchDB(a1, v10, v9, (int)v18, v19, v15);
  if ( v11 > 0x10 )
  {
LABEL_16:
    AslLogCallPrintf(1LL);
    v11 = 16;
    goto LABEL_17;
  }
  if ( v11 )
  {
LABEL_17:
    v13 = v11 - 1;
    v14 = v13;
    if ( v13 < 0 )
      goto LABEL_8;
    while ( (v19[2 * v14 + 1] & 2) != 0 || (unsigned int)SdbTagIDToTagRef(a1, v10, (unsigned int)v19[2 * v14], &v16) )
    {
      if ( --v14 < 0 )
        goto LABEL_8;
    }
    goto LABEL_12;
  }
LABEL_8:
  SdbpReleaseSearchDBContext(v18);
  AslFileMappingDelete(P);
  return v16;
}
