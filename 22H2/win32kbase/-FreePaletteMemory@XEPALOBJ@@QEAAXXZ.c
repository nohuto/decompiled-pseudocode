/*
 * XREFs of ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00C955C
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C002B990 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     HmgFree @ 0x1C007C860 (HmgFree.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0081D30 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00C95E0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C013E8C0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?FreeType@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0081F14 (-FreeType@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall XEPALOBJ::FreePaletteMemory(struct _SLIST_ENTRY **this)
{
  __int64 Next; // rcx
  unsigned __int8 *v3; // rcx

  Next = (__int64)(*this)[8].Next;
  if ( Next )
    Win32FreePool(Next);
  v3 = gpTypeIsolation[1];
  if ( v3 )
    NSInstrumentation::CLookAsideTypeIsolation<36864,144>::FreeType((__int64)v3, *this);
  *this = 0LL;
}
