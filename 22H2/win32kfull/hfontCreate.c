/*
 * XREFs of hfontCreate @ 0x1C00BBBA0
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C00B9E30 (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1C00F7A30 (NtGdiHfontCreate.c)
 *     bInitStockFontsInternal @ 0x1C0392344 (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C0392720 (bInitOneStockFontInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C03929F0 (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C039434C (bInitSystemFont.c)
 * Callees:
 *     cCapString @ 0x1C00BBAF4 (cCapString.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00BCC18 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026CE38 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall hfontCreate(WCHAR *Src, int a2, int a3, __int64 a4, unsigned int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // esi
  WCHAR *Object; // rax
  WCHAR *v12; // rbx
  struct HOBJ__ *v13; // rdi
  _BYTE v15[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  if ( !Src )
    return 0LL;
  v9 = *((_DWORD *)Src + 88);
  if ( v9 > 0x10 )
    return 0LL;
  v10 = 4 * v9 + 356;
  Object = (WCHAR *)AllocateObject(4 * v9 + 632, 10LL, 0LL);
  v12 = Object;
  if ( !Object )
    return 0LL;
  *((_DWORD *)Object + 6) = a2;
  *((_DWORD *)Object + 7) = a3;
  *((_DWORD *)Object + 68) = v10;
  memmove(Object + 138, Src, v10);
  *((_DWORD *)v12 + 8) = 0;
  *((_DWORD *)v12 + 9) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  cCapString(v12 + 104, Src + 14, 32);
  *((_DWORD *)Src + 3) = lNormAngle(*((unsigned int *)Src + 3));
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v15);
  v13 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v15, (struct OBJECT *)v12, 0xAu, a5);
  if ( !v13 )
  {
    FreeObject(v12, 10LL);
    if ( v16 )
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
    return 0LL;
  }
  *(_QWORD *)(HmgPentryFromPobj(v12) + 16) = a4;
  if ( v16 )
    _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  return v13;
}
