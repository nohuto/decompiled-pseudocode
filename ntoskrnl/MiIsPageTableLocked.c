/*
 * XREFs of MiIsPageTableLocked @ 0x1402F2A4C
 * Callers:
 *     MiResetAccessBitPte @ 0x140325D60 (MiResetAccessBitPte.c)
 *     MiAgePte @ 0x1403260A0 (MiAgePte.c)
 *     MiWalkVaCheckCommon @ 0x140349290 (MiWalkVaCheckCommon.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x140290838 (MiGetPageTableLockBuffer.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiShouldLockPteDirectly @ 0x140346F34 (MiShouldLockPteDirectly.c)
 */

_BOOL8 __fastcall MiIsPageTableLocked(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8
  char v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 PageTableLockBuffer; // rax
  _QWORD *v9; // rax
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v12 = 0;
  v4 = v2 & 7;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v4 )
    {
      if ( v4 == 7 )
      {
        v9 = &unk_140C66E80;
      }
      else
      {
        v9 = &unk_140C66E78;
        if ( v4 != 5 )
          v9 = &unk_140C66E90;
      }
    }
    else
    {
      v9 = (_QWORD *)(a1 + 176);
    }
    v10 = *v9 == 0LL;
    return !v10;
  }
  if ( !v4 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v11 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624);
    if ( v11 )
    {
      v10 = *(_DWORD *)(v11 + 4 * ((a2 >> 3) & 0x1FF)) == 0;
      return !v10;
    }
  }
  if ( (unsigned int)MiShouldLockPteDirectly(a1) )
  {
    PageTableLockBuffer = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v5) >> 60;
  }
  else
  {
    PageTableLockBuffer = (unsigned __int64)MiGetPageTableLockBuffer(v6, v5, &v12);
    LODWORD(PageTableLockBuffer) = *(_DWORD *)PageTableLockBuffer >> v12;
  }
  return PageTableLockBuffer & 1;
}
