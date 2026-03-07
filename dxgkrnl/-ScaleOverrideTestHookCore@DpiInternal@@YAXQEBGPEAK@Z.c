void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  const wchar_t *v17; // rax
  __int64 v18; // rbx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+B0h] [rbp-50h]
  const wchar_t *v33; // [rsp+B8h] [rbp-48h]
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  __int64 v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  __int128 v40; // [rsp+F0h] [rbp-10h]
  __int128 v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+10h]
  unsigned __int16 v43[16]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int16 v44[80]; // [rsp+140h] [rbp+40h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269LL;
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
      v6 = (v9 + ((unsigned int)v6 >> 2) + 2080 * (_DWORD)v6) ^ (unsigned int)v6;
      --v8;
    }
    while ( v8 );
  }
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v10 = RtlStringCbPrintfW(v43, 0x16uLL, L"%d", (unsigned int)v6);
  if ( v10 < 0 )
  {
    v13 = v10;
    WdLogSingleEntry2(1LL, v10, v6);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return;
    v17 = L"RtlStringCbPrintfW failed with status: 0x%I64x, for HashKey: %d";
LABEL_14:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v15, v14, v16, 0, 2, -1, (__int64)v17, v13, v6, 0LL, 0LL, 0LL);
    return;
  }
  v11 = RtlStringCbPrintfW(
          v44,
          0xA0uLL,
          L"%s\\%s\\%s",
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
          L"Monitors",
          v43);
  if ( v11 < 0 )
  {
    v13 = v11;
    WdLogSingleEntry2(1LL, v11, v6);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return;
    v17 = L"RtlStringCbPrintfW failed with status: 0x%I64x, for full subkey for HashKey: %d";
    goto LABEL_14;
  }
  v22 = 0;
  v23 = 0;
  v26 = v44;
  v24 = 0LL;
  v33 = L"DesktopScaleFactor";
  v25 = 5;
  v34 = &v22;
  v27 = 0LL;
  v36 = &v23;
  v28 = 0;
  v42 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v31 = 0LL;
  v32 = 288;
  v35 = 0x4000000;
  v37 = 4;
  v38 = 0LL;
  v39 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v12 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\", &v24, 0LL, 0LL);
  if ( v12 >= 0 )
  {
    if ( v22 != v23 )
      *(_DWORD *)a2 = v22;
  }
  else if ( v12 != -1073741772 )
  {
    v18 = v12;
    WdLogSingleEntry1(2LL, v12);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v20,
          v19,
          v21,
          0,
          0,
          -1,
          (__int64)L"RtlQueryRegistryValues for scaling overrides failed with unexpected status: 0x%I64x",
          v18,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
