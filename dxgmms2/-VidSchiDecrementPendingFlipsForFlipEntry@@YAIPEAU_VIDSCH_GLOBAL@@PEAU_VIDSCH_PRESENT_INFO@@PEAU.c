// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiDecrementPendingFlipsForFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3)
{
  struct _VIDSCH_PRESENT_INFO *v3; // r10
  unsigned int *v4; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  unsigned int v9; // r11d
  bool v10; // zf
  unsigned int v11; // r8d
  char v12; // dl
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // r11d
  int v20; // r11d
  int v21; // eax
  _QWORD v23[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-20h]
  unsigned int v25; // [rsp+44h] [rbp-1Ch]
  int v26; // [rsp+48h] [rbp-18h]
  unsigned int v27; // [rsp+4Ch] [rbp-14h]
  unsigned int v28; // [rsp+50h] [rbp-10h]

  v3 = a2;
  v4 = (unsigned int *)*((_QWORD *)a3 + 147);
  if ( (*((_DWORD *)a3 + 284) & 0x10) != 0 )
    v7 = ((unsigned __int16)*v4 | (unsigned __int16)(*v4 >> 10)) & 0x3FF;
  else
    v7 = (1 << *((_DWORD *)a1 + 38)) - 1;
  if ( *((_BYTE *)a1 + 59) )
  {
    v8 = *v4;
    v9 = *v4 & 0x3FF;
    v23[0] = a1;
    v10 = *((_BYTE *)a1 + 156) == 0;
    v23[1] = v4;
    v24 = v9;
    if ( v10 )
      v11 = 0;
    else
      v11 = (v8 >> 10) & 0x3FF;
    v26 = 0;
    v12 = -1;
    LOBYTE(v13) = -1;
    v25 = v11;
    v10 = !_BitScanForward((unsigned int *)&v14, v9);
    if ( !v10 )
      LOBYTE(v13) = v14;
    v10 = !_BitScanForward((unsigned int *)&v15, v11);
    v13 = (char)v13;
    v27 = (char)v13;
    if ( !v10 )
      v12 = v15;
    v16 = (unsigned int)v12;
    v28 = v16;
    while ( v9 || v11 )
    {
      if ( v13 < (unsigned int)v16 )
        v16 = v13;
      v17 = (unsigned int)v16;
      v18 = 288 * v16;
      v19 = *((_DWORD *)v3 + 72 * v16 + 50);
      if ( !v19 )
        goto LABEL_25;
      v20 = v19 - 1;
      *(_DWORD *)((char *)v3 + v18 + 200) = v20;
      if ( (*((_DWORD *)a3 + 284) & 0x20) != 0 )
      {
        v21 = *(_DWORD *)((char *)v3 + v18 + 204);
        if ( !v21 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 45056LL, a1, v3, (unsigned int)v16);
          __debugbreak();
LABEL_25:
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 45056LL, a1, v3, v17);
          __debugbreak();
          goto LABEL_26;
        }
        *(_DWORD *)((char *)v3 + v18 + 204) = v21 - 1;
      }
      if ( !v20 )
        *((_DWORD *)v3 + 772) &= ~(1 << v16);
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v23);
      v16 = v28;
      v13 = v27;
      v11 = v25;
      v9 = v24;
    }
  }
  else
  {
LABEL_26:
    *((_DWORD *)v3 + 772) &= ~v7;
  }
  return v7;
}
