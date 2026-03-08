/*
 * XREFs of ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x1C0049770
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0010D10 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001124C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A448 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 */

void __fastcall VidSchiKeepInterruptTargetEnabledForFlip(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a2,
        struct _VIDSCH_PRESENT_INFO *a3)
{
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  bool v8; // zf
  unsigned int v9; // r9d
  int v10; // esi
  int v11; // eax
  char v12; // dl
  char v13; // cl
  int v14; // eax
  unsigned int v15; // r11d
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  struct _VIDSCH_GLOBAL *v18; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v19; // [rsp+38h] [rbp-28h]
  unsigned int v20; // [rsp+40h] [rbp-20h]
  unsigned int v21; // [rsp+44h] [rbp-1Ch]
  int v22; // [rsp+48h] [rbp-18h]
  unsigned int v23; // [rsp+4Ch] [rbp-14h]
  unsigned int v24; // [rsp+50h] [rbp-10h]

  v19 = (unsigned int *)*((_QWORD *)a2 + 147);
  v18 = a1;
  v6 = *v19;
  v7 = *v19 & 0x3FF;
  v8 = *((_BYTE *)a1 + 156) == 0;
  v20 = v7;
  if ( v8 )
    v9 = 0;
  else
    v9 = (v6 >> 10) & 0x3FF;
  v10 = 0;
  v21 = v9;
  v8 = !_BitScanForward((unsigned int *)&v11, v7);
  v12 = -1;
  v22 = 0;
  v13 = -1;
  if ( !v8 )
    v13 = v11;
  v8 = !_BitScanForward((unsigned int *)&v14, v9);
  v15 = v13;
  v23 = v13;
  if ( !v8 )
    v12 = v14;
  v16 = (unsigned int)v12;
  v24 = v12;
  while ( v7 || v9 )
  {
    if ( v15 < (unsigned int)v16 )
      v16 = v15;
    v17 = *(_QWORD *)(v10 * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 147) + 8LL) + 231) & 0xFFFFFFF8)
                    + *((_QWORD *)a2 + 147)
                    + 24LL);
    if ( v17 )
    {
      if ( *((_QWORD *)a3 + 36 * v16 + 53) >= v17 )
        VidSchiSetInterruptTargetPresentId(a1, *((_DWORD *)a3 + 6), v16, 0LL, 0, 0);
    }
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v18);
    v16 = v24;
    v15 = v23;
    v10 = v22;
    v9 = v21;
    v7 = v20;
  }
}
