/*
 * XREFs of ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18002BC14
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C0C0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023290 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002BAF4 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18002C094 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetBackgroundColor(CText *this, int a2)
{
  int v2; // edx
  __int64 v3; // rax

  v2 = a2 & 0xFFFFFF;
  if ( *((_DWORD *)this + 103) != v2 )
  {
    v3 = *(_QWORD *)this;
    *((_DWORD *)this + 103) = v2;
    (*(void (__fastcall **)(CText *, __int64))(v3 + 24))(this, 4096LL);
  }
}
