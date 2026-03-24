/*
 * XREFs of ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0095BEC
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0094AA8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001668 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C0017700 (DpiGetPnpRegistryKeyName.c)
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 */

void __fastcall VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(VIDMM_GLOBAL *this, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v3; // r14
  __int64 v4; // rcx
  const UNICODE_STRING *v5; // rdx
  unsigned int v6; // esi
  WCHAR *v7; // rdi
  unsigned int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T v11; // rax
  WCHAR *v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  PCUNICODE_STRING Source; // [rsp+40h] [rbp-C0h]
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  void *v19; // [rsp+60h] [rbp-A0h]
  _BYTE v20[256]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v21; // [rsp+168h] [rbp+68h]
  __int64 v22; // [rsp+170h] [rbp+70h] BYREF
  int v23; // [rsp+178h] [rbp+78h]
  const wchar_t *v24; // [rsp+180h] [rbp+80h]
  unsigned int *v25; // [rsp+188h] [rbp+88h]
  int v26; // [rsp+190h] [rbp+90h]
  int *v27; // [rsp+198h] [rbp+98h]
  int v28; // [rsp+1A0h] [rbp+A0h]
  __int64 v29; // [rsp+1A8h] [rbp+A8h]
  int v30; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v31; // [rsp+1B8h] [rbp+B8h]
  unsigned int *v32; // [rsp+1C0h] [rbp+C0h]
  int v33; // [rsp+1C8h] [rbp+C8h]
  int *v34; // [rsp+1D0h] [rbp+D0h]
  int v35; // [rsp+1D8h] [rbp+D8h]
  __int128 v36; // [rsp+1E0h] [rbp+E0h]
  __int128 v37; // [rsp+1F0h] [rbp+F0h]
  __int128 v38; // [rsp+200h] [rbp+100h]
  __int64 v39; // [rsp+210h] [rbp+110h]

  v2 = 0;
  v3 = (unsigned __int64 *)(*((_QWORD *)this + 5027) + 1584LL * a2);
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2584LL) + 360LL * a2 + 8);
  Source = 0LL;
  DpiGetPnpRegistryKeyName(v4);
  v5 = 0LL;
  v6 = (MEMORY[0] >> 1) + 16;
  v19 = 0LL;
  v21 = 0;
  if ( v6 > 0x80 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 2 )
    {
      v7 = 0LL;
      goto LABEL_5;
    }
    v11 = 2LL * v6;
    if ( !is_mul_ok(v6, 2uLL) )
      v11 = -1LL;
    v12 = (WCHAR *)operator new[](v11, 0x4B677844u, PagedPool);
    v5 = Source;
    v7 = v12;
    v19 = v12;
  }
  else
  {
    v7 = (WCHAR *)v20;
    v19 = v20;
  }
  v21 = v6;
  if ( v7 )
  {
    *(&Destination.MaximumLength + 2) = 0;
    *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(2 * v6);
    Destination.Buffer = v7;
    Destination.Length = 0;
    RtlAppendUnicodeStringToString(&Destination, v5);
    RtlAppendUnicodeToString(&Destination, L"\\MemoryManager");
  }
LABEL_5:
  v15 = 0;
  v8 = 0;
  v13 = 0;
  v16 = 0;
  v14 = 0;
  if ( v7 )
  {
    v22 = 0LL;
    v28 = 4;
    v35 = 4;
    v23 = 288;
    v26 = 67108868;
    v24 = L"MaxLocalSegmentSize";
    v30 = 288;
    v25 = &v13;
    v33 = 67108868;
    v27 = &v15;
    v29 = 0LL;
    v31 = L"MaxNonLocalSegmentSize";
    v32 = &v14;
    v34 = &v16;
    v39 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    RtlQueryRegistryValuesEx(0LL, v7, &v22, 0LL, 0LL);
    v8 = v14;
    v2 = v13;
  }
  v9 = (unsigned __int64)v8 << 20;
  v10 = (unsigned __int64)v2 << 20;
  if ( v10 - 1 <= 0xFFFFFFF )
    v10 = 0x10000000LL;
  *v3 = v10;
  if ( v9 - 1 <= 0x1FFFFFFF )
    v9 = 0x20000000LL;
  v3[1] = v9;
  if ( v19 != v20 )
    operator delete(v19);
}
