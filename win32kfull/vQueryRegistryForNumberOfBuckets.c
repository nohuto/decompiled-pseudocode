/*
 * XREFs of vQueryRegistryForNumberOfBuckets @ 0x1C03B7BC4
 * Callers:
 *     bInitFontTables @ 0x1C03B7A90 (bInitFontTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall vQueryRegistryForNumberOfBuckets(unsigned int *a1, _DWORD *a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ecx
  bool v6; // sf
  unsigned int v7; // eax
  __int64 result; // rax
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v11; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+78h] [rbp-88h]
  int v15; // [rsp+80h] [rbp-80h]
  const wchar_t *v16; // [rsp+88h] [rbp-78h]
  unsigned int *v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  const wchar_t *v23; // [rsp+C0h] [rbp-40h]
  unsigned int *v24; // [rsp+C8h] [rbp-38h]
  int v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  int v29; // [rsp+F0h] [rbp-10h]
  const wchar_t *v30; // [rsp+F8h] [rbp-8h]
  unsigned int *v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  __int64 v33; // [rsp+110h] [rbp+10h]
  int v34; // [rsp+118h] [rbp+18h]
  __int64 v35; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+128h] [rbp+28h]
  __int64 v37; // [rsp+130h] [rbp+30h]

  QueryTable.Name = L"NumberOfPublicFontFilesAtLastLogOff";
  v11 = 0;
  v9 = 0;
  QueryTable.Flags = 288;
  v15 = 288;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.EntryContext = &v11;
  v18 = 0x4000000;
  v16 = L"NumberOfPublicFontFilesSetByUser";
  v17 = &v9;
  v23 = L"NumberOfDeviceFontFilesAtLastLogOff";
  v24 = &v12;
  v30 = L"NumberOfDeviceFontFilesSetByUser";
  v22 = 288;
  v25 = 0x4000000;
  v29 = 288;
  v32 = 0x4000000;
  v31 = &v10;
  v12 = 0;
  v10 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v14 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v35 = 0LL;
  v36 = 0;
  v37 = 0LL;
  v4 = RtlQueryRegistryValues(3u, L"FontCache", &QueryTable, 0LL, 0LL);
  v5 = v10;
  v6 = v4 < 0;
  v7 = v9;
  if ( !v6 )
  {
    if ( !v9 )
      v7 = v11;
    if ( !v10 )
      v5 = v12;
  }
  if ( v7 >= 0x64 )
  {
    if ( v7 > 0x2710 )
      v7 = 10000;
  }
  else
  {
    v7 = 100;
  }
  *a1 = v7;
  result = 5LL;
  if ( v5 >= 5 )
  {
    result = v5;
    if ( v5 > 0x64 )
      result = 100LL;
  }
  *a2 = result;
  return result;
}
