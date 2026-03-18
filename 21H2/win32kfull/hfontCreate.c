/*
 * XREFs of hfontCreate @ 0x1C0013DE0
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C00131E4 (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1C00DF210 (NtGdiHfontCreate.c)
 *     bInitStockFontsInternal @ 0x1C0390308 (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C03906EC (bInitOneStockFontInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C03909E0 (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C039242C (bInitSystemFont.c)
 * Callees:
 *     cCapString @ 0x1C0014ABC (cCapString.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0022858 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026B168 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall hfontCreate(_DWORD *Src, int a2, int a3, __int64 a4, unsigned int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // ebp
  _DWORD *Object; // rax
  struct OBJECT *v12; // rbx
  struct HOBJ__ *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v17; // rbx
  __int64 ProcessWow64Process; // rax
  __int64 v19; // rdx
  int v20; // ecx
  _BYTE v22[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]

  if ( !Src )
    return 0LL;
  v9 = Src[88];
  if ( v9 > 0x10 )
    return 0LL;
  v10 = 4 * v9 + 356;
  Object = (_DWORD *)AllocateObject(4 * v9 + 632, 10LL);
  v12 = (struct OBJECT *)Object;
  if ( !Object )
    return 0LL;
  Object[6] = a2;
  Object[7] = a3;
  Object[68] = v10;
  memmove(Object + 69, Src, v10);
  *((_DWORD *)v12 + 8) = 0;
  *((_DWORD *)v12 + 9) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  cCapString((char *)v12 + 208, Src + 7, 32LL);
  Src[3] = lNormAngle((unsigned int)Src[3]);
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
  v13 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v22, v12, 0xAu, a5);
  if ( !v13 )
  {
    FreeObject(v12, 10LL);
    if ( v23 )
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v22);
    return 0LL;
  }
  v14 = HmgPentryFromPobj(v12);
  if ( a4 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
    v17 = CurrentProcessWin32Process;
    if ( !CurrentProcessWin32Process )
      KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
    ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
    v19 = *((unsigned int *)v17 + 73);
    v20 = *((_DWORD *)v17 + 73);
    if ( ProcessWow64Process )
      v15 = (unsigned int)__ROR4__(a4 ^ v19, v20 & 0x1F);
    else
      v15 = __ROR8__(a4 ^ v19, v20 & 0x3F);
  }
  else
  {
    v15 = 0LL;
  }
  *(_QWORD *)(v14 + 16) = v15;
  if ( v23 )
    _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v22);
  return v13;
}
