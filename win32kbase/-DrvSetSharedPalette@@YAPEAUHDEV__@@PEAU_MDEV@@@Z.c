/*
 * XREFs of ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C018EB0C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C0046970 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 */

__int64 __fastcall DrvSetSharedPalette(struct _MDEV *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  unsigned int v4; // ebp
  __int64 i; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  int *v8; // rcx

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2140LL) & 0x100) != 0 )
    v2 = *(_QWORD *)(v1 + 1776);
  v4 = 0;
  for ( i = v1 & -(__int64)((*(_DWORD *)(*(_QWORD *)a1 + 2140LL) & 0x100) != 0); v4 < *((_DWORD *)a1 + 5); ++v4 )
  {
    v6 = *((_QWORD *)a1 + 7 * v4 + 5);
    if ( (*(_DWORD *)(v6 + 2140) & 0x100) != 0 )
    {
      *(_QWORD *)(v6 + 1736) = MulSetPalette;
      if ( v2 )
      {
        v7 = *(_QWORD *)(v6 + 1776);
        if ( v7 != v2 )
        {
          v8 = *(int **)(v7 + 120);
          if ( v8 != (int *)v7 )
            HmgDecrementShareReferenceCountEx(v8, 0LL);
          HmgIncrementShareReferenceCount((int *)v2);
          *(_DWORD *)(v7 + 28) = *(_DWORD *)(v2 + 28);
          *(_QWORD *)(v7 + 112) = *(_QWORD *)(v2 + 112);
          *(_QWORD *)(v7 + 120) = v2;
        }
      }
      else
      {
        v2 = *(_QWORD *)(v6 + 1776);
        i = v6;
      }
    }
  }
  return i;
}
