/*
 * XREFs of ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x1C004AF34
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0010D10 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001124C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z @ 0x1C004ADD8 (-VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z.c)
 */

void __fastcall VidSchiUpdateHwPresentTimeForImmediateFlip(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a2,
        unsigned int a3)
{
  unsigned int v4; // eax
  char v5; // bl
  __int64 v8; // rsi
  unsigned int v9; // edx
  unsigned int v10; // r8d
  bool v11; // zf
  unsigned int v12; // edx
  int v13; // r11d
  int v14; // eax
  char v15; // cl
  int v16; // eax
  unsigned int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // r15
  struct _VIDSCH_GLOBAL *v21; // [rsp+28h] [rbp-58h] BYREF
  unsigned int *v22; // [rsp+30h] [rbp-50h]
  unsigned int v23; // [rsp+38h] [rbp-48h]
  unsigned int v24; // [rsp+3Ch] [rbp-44h]
  int v25; // [rsp+40h] [rbp-40h]
  unsigned int v26; // [rsp+44h] [rbp-3Ch]
  unsigned int v27; // [rsp+48h] [rbp-38h]
  unsigned int v28[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+70h] [rbp-10h]

  v30 = 0LL;
  v4 = *((_DWORD *)a1 + 38);
  v5 = -1;
  v8 = *((_QWORD *)a1 + a3 + 400);
  *(_OWORD *)v28 = 0LL;
  v29 = 0LL;
  if ( v4 )
    memset(v28, -1, 4LL * v4);
  v22 = (unsigned int *)*((_QWORD *)a2 + 147);
  v21 = a1;
  v9 = *v22;
  v10 = *v22 & 0x3FF;
  v11 = *((_BYTE *)a1 + 156) == 0;
  v23 = v10;
  if ( v11 )
    v12 = 0;
  else
    v12 = (v9 >> 10) & 0x3FF;
  v13 = 0;
  v24 = v12;
  v11 = !_BitScanForward((unsigned int *)&v14, v10);
  v15 = -1;
  v25 = 0;
  if ( !v11 )
    v15 = v14;
  v11 = !_BitScanForward((unsigned int *)&v16, v12);
  v17 = v15;
  v26 = v15;
  if ( !v11 )
    v5 = v16;
  v18 = (unsigned int)v5;
  v27 = v5;
  while ( v10 || v12 )
  {
    if ( v17 < (unsigned int)v18 )
      v18 = v17;
    v19 = 288 * v18;
    v20 = *(_QWORD *)(v13 * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 147) + 8LL) + 231) & 0xFFFFFFF8)
                    + *((_QWORD *)a2 + 147)
                    + 24LL);
    if ( v20 )
    {
      VidSchiSynchronouslyUpdateFlipQueueLogs(a1, a3, v28, v18);
      if ( *(_QWORD *)(v19 + v8 + 400) == v20 )
        *((_QWORD *)a2 + 163) = *(_QWORD *)(*(_QWORD *)(v19 + v8 + 432)
                                          + 16LL
                                          * ((unsigned int)(*(_DWORD *)(v19 + v8 + 372) + *(_DWORD *)(v19 + v8 + 376)
                                                                                        - 1)
                                           % *(_DWORD *)(v19 + v8 + 372))
                                          + 8);
    }
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v21);
    v12 = v24;
    v10 = v23;
    v18 = v27;
    v17 = v26;
    v13 = v25;
  }
}
