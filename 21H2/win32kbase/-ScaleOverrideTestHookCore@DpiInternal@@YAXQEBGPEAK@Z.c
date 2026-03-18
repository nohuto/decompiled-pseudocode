/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C00D2B40
 * Callers:
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00D2A8C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00AB000 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  NTSTATUS v12; // eax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+80h] [rbp-80h]
  const wchar_t *v18; // [rsp+88h] [rbp-78h]
  int *v19; // [rsp+90h] [rbp-70h]
  int v20; // [rsp+98h] [rbp-68h]
  int *v21; // [rsp+A0h] [rbp-60h]
  int v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  __int128 v25; // [rsp+C0h] [rbp-40h]
  __int128 v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-20h]
  unsigned __int16 v28[16]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v29[80]; // [rsp+110h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269;
  do
    ++v4;
  while ( *((_WORD *)this + v4) );
  v7 = 2 * v4;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (DpiInternal *)((char *)v5 + 1);
      v6 ^= v9 + (v6 >> 2) + 2080 * v6;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6 & 0x7FFFFFFF;
  v11 = RtlStringCbPrintfW(v28, 0x16uLL, L"%d", v10);
  if ( v11 < 0
    || (v11 = RtlStringCbPrintfW(
                v29,
                0xA0uLL,
                L"%s\\%s\\%s",
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
                L"Monitors",
                v28),
        v11 < 0) )
  {
    WdLogSingleEntry2(1LL, v11, v10);
  }
  else
  {
    v13 = 0;
    v14 = 0;
    QueryTable.Name = v29;
    QueryTable.QueryRoutine = 0LL;
    v18 = L"DesktopScaleFactor";
    QueryTable.Flags = 5;
    v19 = &v13;
    QueryTable.EntryContext = 0LL;
    v21 = &v14;
    QueryTable.DefaultType = 0;
    v27 = 0LL;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 0;
    v16 = 0LL;
    v17 = 288;
    v20 = 0x4000000;
    v22 = 4;
    v23 = 0LL;
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    v12 = RtlQueryRegistryValues(0, L"\\Registry\\Machine\\", &QueryTable, 0LL, 0LL);
    if ( v12 >= 0 )
    {
      if ( v13 != v14 )
        *(_DWORD *)a2 = v13;
    }
    else if ( v12 != -1073741772 )
    {
      WdLogSingleEntry1(2LL, v12);
    }
  }
}
