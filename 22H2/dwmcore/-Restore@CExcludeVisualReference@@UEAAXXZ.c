/*
 * XREFs of ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x180173F70
 * Callers:
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800E4E34 (--1CExcludeVisualReference@@QEAA@XZ.c)
 *     ?Restore@CCursorVisualReference@@UEAAXXZ @ 0x180174030 (-Restore@CCursorVisualReference@@UEAAXXZ.c)
 * Callees:
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E5388 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CExcludeVisualReference::Restore(CExcludeVisualReference *this)
{
  struct CVisual *Visual; // rax
  __int64 v2; // rcx

  Visual = CExcludeVisualReference::GetVisual(this);
  if ( Visual )
  {
    if ( *(_DWORD *)(v2 + 16) )
    {
      *((_BYTE *)Visual + 94) ^= (*((_BYTE *)Visual + 94) ^ (4 * *(_BYTE *)(v2 + 20))) & 4;
      *(_DWORD *)(v2 + 16) = 0;
    }
  }
}
