void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  NTSTATUS v11; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+80h] [rbp-80h]
  const wchar_t *v17; // [rsp+88h] [rbp-78h]
  int *v18; // [rsp+90h] [rbp-70h]
  int v19; // [rsp+98h] [rbp-68h]
  int *v20; // [rsp+A0h] [rbp-60h]
  int v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  __int128 v24; // [rsp+C0h] [rbp-40h]
  __int128 v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+E0h] [rbp-20h]
  unsigned __int16 v27[16]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v28[80]; // [rsp+110h] [rbp+10h] BYREF

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
  v10 = RtlStringCbPrintfW(v27, 0x16uLL, L"%d", v6 & 0x7FFFFFFF);
  if ( v10 < 0
    || (v10 = RtlStringCbPrintfW(
                v28,
                0xA0uLL,
                L"%s\\%s\\%s",
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
                L"Monitors",
                v27),
        v10 < 0) )
  {
    WdLogSingleEntry2(1LL, v10);
  }
  else
  {
    v12 = 0;
    v13 = 0;
    QueryTable.Name = v28;
    QueryTable.QueryRoutine = 0LL;
    v17 = L"DesktopScaleFactor";
    QueryTable.Flags = 5;
    v18 = &v12;
    QueryTable.EntryContext = 0LL;
    v20 = &v13;
    QueryTable.DefaultType = 0;
    v26 = 0LL;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 0;
    v15 = 0LL;
    v16 = 288;
    v19 = 0x4000000;
    v21 = 4;
    v22 = 0LL;
    v23 = 0;
    v24 = 0LL;
    v25 = 0LL;
    v11 = RtlQueryRegistryValues(0, L"\\Registry\\Machine\\", &QueryTable, 0LL, 0LL);
    if ( v11 >= 0 )
    {
      if ( v12 != v13 )
        *(_DWORD *)a2 = v12;
    }
    else if ( v11 != -1073741772 )
    {
      WdLogSingleEntry1(2LL, v11);
    }
  }
}
