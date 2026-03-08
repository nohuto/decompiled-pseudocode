/*
 * XREFs of ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x1801CA350
 * Callers:
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1801B10B8 (--1CExcludeVisualReference@@QEAA@XZ.c)
 * Callees:
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CExcludeVisualReference::Restore(CExcludeVisualReference *this)
{
  struct CVisual *Visual; // rax
  __int64 v2; // rcx
  __int64 v3; // r8

  Visual = CExcludeVisualReference::GetVisual(this);
  if ( Visual )
  {
    if ( *(_DWORD *)(v2 + 16) )
    {
      *((_BYTE *)Visual + 102) ^= (*((_BYTE *)Visual + 102) ^ (2 * *(_BYTE *)(v2 + 20))) & 2;
      *(_DWORD *)(v3 + 16) = 0;
    }
  }
}
