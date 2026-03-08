/*
 * XREFs of RtlFindHotPatchInformation @ 0x140A7383C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x140A334F8 (MiCaptureHotPatchInfo.c)
 *     MiMapAndApplyPatchInSession @ 0x140A37338 (MiMapAndApplyPatchInSession.c)
 *     MiOpenHotPatchFile @ 0x140A376D4 (MiOpenHotPatchFile.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x14035E850 (RtlImageNtHeaderEx.c)
 *     RtlFindHotPatchBase @ 0x140A7380C (RtlFindHotPatchBase.c)
 */

__int64 __fastcall RtlFindHotPatchInformation(unsigned __int64 a1)
{
  unsigned int *v2; // rdi
  unsigned int *v3; // rsi
  __int64 v4; // r14
  int v5; // edx
  __int16 v6; // bx
  unsigned int *v7; // rcx
  unsigned int v8; // eax
  bool v9; // cf
  char *v10; // rdx
  __int64 v11; // r10
  unsigned int v12; // r8d
  unsigned int *v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  __int64 v18; // r9
  unsigned int v20; // [rsp+48h] [rbp+10h] BYREF
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  v20 = 0;
  v21 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v21);
  v4 = v21;
  LOBYTE(v5) = 1;
  v6 = *(_WORD *)(v21 + 4);
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(a1, v5, 10, (int)&v20);
  if ( !v7 )
    return 0LL;
  if ( v6 == -31132 || v6 == -21916 )
  {
    v8 = v20;
    if ( v20 <= 4 )
      return 0LL;
    v3 = v7;
    if ( v20 != *v7 )
      return 0LL;
    v9 = v20 < 0xF4;
  }
  else
  {
    if ( v6 != 332 )
      return 0LL;
    v8 = v20;
    if ( v20 <= 4 )
      return 0LL;
    v2 = v7;
    if ( v20 == 64 )
      v8 = *v7;
    if ( v8 != *v7 )
      return 0LL;
    v9 = v8 < 0x98;
  }
  if ( v9 )
    return 0LL;
  v10 = (char *)v7 + v8;
  if ( v10 < (char *)v7 )
    return 0LL;
  v11 = *(unsigned int *)(v4 + 80);
  if ( (unsigned __int64)v7 >= v11 + a1 || (unsigned __int64)v10 > v11 + a1 )
    return 0LL;
  v12 = v6 == -31132 || v6 == -21916 ? v3[60] : v2[37];
  if ( v12 >= 0xFFFFFFF8 || v12 == 0 || v12 + 8 > (unsigned int)v11 )
    return 0LL;
  v13 = (unsigned int *)(a1 + v12);
  switch ( *v13 )
  {
    case 1u:
      v14 = 20;
      break;
    case 2u:
      v14 = 24;
      break;
    case 3u:
      v14 = 28;
      break;
    default:
      return 0LL;
  }
  v15 = v13[1];
  if ( v15 >= v14 )
  {
    if ( v13[2] )
    {
      if ( v15 + v12 > v15 && v15 + v12 <= (unsigned int)v11 )
      {
        v16 = v13[4];
        if ( v16 <= 0x3FFFFFF9 )
        {
          v17 = 4 * v16 + v13[3];
          if ( v17 > 4 * v16 && v17 <= v15 && v16 == 1 && RtlFindHotPatchBase(v13) )
            return v18;
        }
      }
    }
  }
  return 0LL;
}
