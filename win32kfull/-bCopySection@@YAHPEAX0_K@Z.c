/*
 * XREFs of ?bCopySection@@YAHPEAX0_K@Z @ 0x1C028D690
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C011CC6C (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028D380 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall bCopySection(void *a1, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  int v6; // r14d
  int v7; // r15d
  bool v8; // zf
  __int64 v9; // r12
  unsigned __int64 v10; // rsi
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  size_t v16; // rax
  size_t v17; // rcx
  size_t v18; // rsi
  void *v19; // r12
  __int64 v20; // rax
  void *v21; // r12
  __int64 v22; // rax
  void *v24; // [rsp+58h] [rbp-70h] BYREF
  void *Src; // [rsp+60h] [rbp-68h] BYREF
  size_t v26; // [rsp+68h] [rbp-60h] BYREF
  size_t v27; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-40h]

  v3 = a3;
  v4 = a3;
  v30 = a3;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v4 == 0;
    if ( !v4 )
      break;
    v9 = v4;
    if ( v4 > 0x10000 )
      v9 = 0x10000LL;
    v10 = v3 - v4;
    v28 = v3 - v4;
    v29 = v3 - v4;
    v24 = 0LL;
    Src = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    CurrentProcess = PsGetCurrentProcess(0x10000LL, a2, a3);
    if ( (int)MmMapViewOfSection(a1, CurrentProcess, &v24, 0LL, v9, &v28, &v26, 2, 0x400000, 4) < 0 )
    {
      v24 = 0LL;
      v26 = 0LL;
    }
    if ( v26 )
    {
      v13 = PsGetCurrentProcess(v12, a2, a3);
      if ( (int)MmMapViewOfSection(a2, v13, &Src, 0LL, v9, &v29, &v27, 2, 0x400000, 2) < 0 )
      {
        Src = 0LL;
        v27 = 0LL;
      }
    }
    if ( v26 && v27 )
    {
      v14 = v10 - v28;
      v15 = v10 - v29;
      v24 = (char *)v24 + v14;
      Src = (char *)Src + v15;
      if ( v26 <= v14 )
        v16 = 0LL;
      else
        v16 = v26 - v14;
      v26 = v16;
      if ( v27 <= v15 )
        v17 = 0LL;
      else
        v17 = v27 - v15;
      v27 = v17;
      if ( v16 >= v17 )
        v16 = v17;
      v18 = v4;
      if ( v16 < v4 )
        v18 = v16;
      memmove(v24, Src, v18);
    }
    else
    {
      v18 = 0LL;
    }
    v19 = v24;
    if ( v24 )
    {
      v20 = PsGetCurrentProcess(v12, a2, a3);
      if ( (int)MmUnmapViewOfSection(v20, v19) < 0 )
        v6 = 1;
    }
    v21 = Src;
    if ( Src )
    {
      v22 = PsGetCurrentProcess(v12, a2, a3);
      if ( (int)MmUnmapViewOfSection(v22, v21) < 0 )
        v7 = 1;
    }
    if ( !v18 || v6 == 1 || v7 == 1 )
    {
      v8 = v4 == 0;
      break;
    }
    v4 -= v18;
    v30 = v4;
    v3 = a3;
  }
  LOBYTE(v5) = v8;
  return v5;
}
