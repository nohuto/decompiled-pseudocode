/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0003E2C
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00057F0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C002B134 (-VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_.c)
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE_ENTRY *a2,
        struct _VIDSCH_VSYNC_COOKIE *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v7; // edx
  int v8; // eax
  int v10; // ebp
  unsigned int v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // ebp
  bool v14; // zf
  int v15; // eax
  char v16; // cl
  char v17; // r8
  char v18; // dl
  _DWORD *v19; // r10
  int v20; // r12d
  __int64 v21; // r13
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  _DWORD *v25; // [rsp+20h] [rbp-48h]
  char v26; // [rsp+80h] [rbp+18h]
  char v27; // [rsp+88h] [rbp+20h]

  v3 = *((_DWORD *)a3 + 24);
  v4 = 0;
  if ( v3 && v3 != *((_DWORD *)a2 + 270) )
    return 0LL;
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 == 10 )
    return VidSchiIsExpectedVSyncCookie2(a1, a2, a3);
  v8 = *((_DWORD *)a2 + 284) & 0x10;
  if ( v7 == 3 )
  {
    if ( !v8 )
    {
      LOBYTE(v4) = *((_QWORD *)a3 + 14) == *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a2 + 147) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 147) + 8LL) + 199) & 0xFFFFFFF8)
                                                     + *((_QWORD *)a2 + 147)
                                                     + 40LL);
      return v4;
    }
    return 0LL;
  }
  if ( v8 )
  {
    v10 = *((_DWORD *)a3 + 25);
    v11 = **((_DWORD **)a2 + 147);
    if ( (v10 & (v11 >> 10) & 0x3FF) == 0 && (v11 & v10 & 0x3FF) == (v11 & 0x3FF) )
    {
      v12 = 1;
      if ( (v11 & 0x3FF) != 0 )
      {
        v13 = *((_DWORD *)a3 + 25) & 0x3FF;
        v14 = !_BitScanForward((unsigned int *)&v15, v13);
        v16 = -1;
        v27 = 0;
        v17 = 0;
        if ( !v14 )
          v16 = v15;
        v26 = 0;
        v18 = 0;
        while ( v13 )
        {
          v19 = (_DWORD *)*((_QWORD *)a2 + 147);
          v20 = 1 << v16;
          if ( (*v19 & (1 << v16) & 0x3FF) != 0 )
          {
            v21 = 5LL * v17;
            if ( *((_QWORD *)a3 + 5 * v17 + 14) != *(_QWORD *)((char *)&v19[16 * (unsigned __int64)(unsigned int)v18
                                                                          + 10]
                                                             + ((8 * v19[2] + 199) & 0xFFFFFFF8) * v19[1]) )
              return 0LL;
            v25 = (_DWORD *)((char *)v19 + ((8 * v19[2] + 199) & 0xFFFFFFF8) * v18 + 160);
            if ( RtlCompareMemory(v25, (char *)a3 + 40 * v17 + 120, 8uLL) != 8 )
              return 0LL;
            if ( RtlCompareMemory(v25 + 2, (char *)a3 + 8 * v21 + 128, 8uLL) != 8 )
              return 0LL;
            v22 = *((_DWORD *)a3 + 2 * v21 + 36);
            v23 = v25[7];
            if ( (((unsigned __int8)v23 ^ *((_BYTE *)a3 + 8 * v21 + 144)) & 1) != 0
              || (((unsigned __int8)v23 ^ (unsigned __int8)v22) & 2) != 0
              || (((unsigned __int8)v23 ^ (unsigned __int8)v22) & 0x18) != 0 )
            {
              return 0LL;
            }
            v17 = v27;
            v18 = ++v26;
          }
          v13 &= ~v20;
          v16 = -1;
          v14 = !_BitScanForward((unsigned int *)&v24, v13);
          if ( !v14 )
            v16 = v24;
          v27 = ++v17;
        }
      }
      return v12;
    }
    return 0LL;
  }
  v12 = 1;
  if ( (*((_DWORD *)a3 + 25) & 0x3FF) != 1
    || *((_QWORD *)a3 + 14) != *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a2 + 147) + 4LL)
                                         * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 147) + 8LL) + 199) & 0xFFFFFFF8)
                                         + *((_QWORD *)a2 + 147)
                                         + 40LL) )
  {
    return 0;
  }
  return v12;
}
