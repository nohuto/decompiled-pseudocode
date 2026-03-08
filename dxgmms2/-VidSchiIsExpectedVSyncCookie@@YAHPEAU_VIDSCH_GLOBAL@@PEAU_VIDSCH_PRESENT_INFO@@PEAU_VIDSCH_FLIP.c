/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C000BD30
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0009880 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4)
{
  int v4; // eax
  int v7; // eax
  _DWORD *v8; // r11
  unsigned int v9; // eax
  unsigned int v10; // ebx
  bool v11; // zf
  int v12; // r9d
  char v13; // r8
  __int64 v14; // rcx
  int v16; // ecx
  _DWORD *v17; // r8
  int v18; // r14d
  unsigned int v19; // ebp
  unsigned int v20; // r14d
  int v21; // eax
  char v22; // cl
  char v23; // dl
  char v24; // r12
  int v25; // r15d
  unsigned int v26; // r11d
  char *v27; // r9
  _DWORD *v28; // r13
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  __int64 v32; // [rsp+20h] [rbp-48h]
  char i; // [rsp+78h] [rbp+10h]
  char *v34; // [rsp+88h] [rbp+20h]

  v4 = *((_DWORD *)a4 + 29);
  if ( v4 && v4 != *((_DWORD *)a3 + 270) )
    return 0LL;
  v7 = *((_DWORD *)a4 + 4);
  if ( v7 != 10 )
  {
    v16 = *((_DWORD *)a3 + 284) & 0x10;
    if ( v7 == 3 )
    {
      if ( !v16 )
        return *((_QWORD *)a4 + 16) == *(_QWORD *)(*((_QWORD *)a3 + 147)
                                                 + *(_DWORD *)(*((_QWORD *)a3 + 147) + 4LL)
                                                 * ((8 * *(_DWORD *)(*((_QWORD *)a3 + 147) + 8LL) + 231) & 0xFFFFFFF8)
                                                 + 40LL);
      return 0LL;
    }
    if ( v16 )
    {
      v17 = (_DWORD *)*((_QWORD *)a3 + 147);
      v18 = *((_DWORD *)a4 + 30);
      if ( (v18 & (*v17 >> 10) & 0x3FF) != 0
        || ((unsigned __int16)v18 & (unsigned __int16)*v17 & 0x3FF) != (*v17 & 0x3FF) )
      {
        return 0LL;
      }
      v19 = 1;
      if ( (*v17 & 0x3FF) != 0 )
      {
        v20 = *((_DWORD *)a4 + 30) & 0x3FF;
        v11 = !_BitScanForward((unsigned int *)&v21, v20);
        v22 = -1;
        if ( !v11 )
          v22 = v21;
        v23 = 0;
        v24 = 0;
        for ( i = 0; v20; i = v23 )
        {
          v25 = 1 << v22;
          if ( ((1 << v22) & *v17 & 0x3FF) != 0 )
          {
            v26 = (8 * v17[2] + 231) & 0xFFFFFFF8;
            v32 = v23;
            v27 = (char *)a4 + 40 * v23;
            v34 = v27;
            if ( *((_QWORD *)v27 + 16) != *(_QWORD *)((char *)&v17[16 * (unsigned __int64)(unsigned int)v24 + 10]
                                                    + v17[1] * v26) )
              return 0LL;
            v28 = (_DWORD *)((char *)v17 + v26 * v24);
            if ( RtlCompareMemory(v28 + 40, v27 + 136, 8uLL) != 8 )
              return 0LL;
            if ( RtlCompareMemory(v28 + 42, v34 + 144, 8uLL) != 8 )
              return 0LL;
            v29 = v28[47];
            v30 = *((_DWORD *)a4 + 10 * v32 + 40);
            if ( (((unsigned __int8)v30 ^ *((_BYTE *)v28 + 188)) & 1) != 0
              || (((unsigned __int8)v30 ^ (unsigned __int8)v29) & 2) != 0
              || (((unsigned __int8)v30 ^ (unsigned __int8)v29) & 0x18) != 0 )
            {
              return 0LL;
            }
            v17 = (_DWORD *)*((_QWORD *)a3 + 147);
            ++v24;
            v23 = i;
          }
          v20 &= ~v25;
          v22 = -1;
          v11 = !_BitScanForward((unsigned int *)&v31, v20);
          if ( !v11 )
            v22 = v31;
          ++v23;
        }
      }
    }
    else
    {
      return (*((_DWORD *)a4 + 30) & 0x3FF) == 1
          && *((_QWORD *)a4 + 16) == *(_QWORD *)(*((_QWORD *)a3 + 147)
                                               + *(_DWORD *)(*((_QWORD *)a3 + 147) + 4LL)
                                               * ((8 * *(_DWORD *)(*((_QWORD *)a3 + 147) + 8LL) + 231) & 0xFFFFFFF8)
                                               + 40LL);
    }
    return v19;
  }
  v8 = (_DWORD *)*((_QWORD *)a3 + 147);
  if ( (*((_DWORD *)a3 + 284) & 0x10) != 0 )
    v9 = ((unsigned __int16)*v8 | (unsigned __int16)(*v8 >> 10)) & 0x3FF;
  else
    v9 = (1 << *((_DWORD *)a1 + 38)) - 1;
  v10 = 0;
  v11 = !_BitScanForward((unsigned int *)&v12, v9);
  if ( v11 )
    LOBYTE(v12) = -1;
  v13 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)((char *)v8 + ((8 * v8[2] + 231) & 0xFFFFFFF8) * v13 + 24);
      if ( v14 )
      {
        if ( v14 != *((_QWORD *)a4 + 2 * (char)v12 + 16) )
          break;
      }
      v9 &= ~(1 << v12);
      v11 = !_BitScanForward((unsigned int *)&v12, v9);
      if ( v11 )
        LOBYTE(v12) = -1;
      ++v13;
      if ( !v9 )
        return 1;
    }
  }
  else
  {
    return 1;
  }
  return v10;
}
