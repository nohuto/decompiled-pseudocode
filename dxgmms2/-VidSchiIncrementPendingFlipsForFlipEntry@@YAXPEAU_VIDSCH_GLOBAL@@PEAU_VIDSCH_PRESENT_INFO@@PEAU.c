void __fastcall VidSchiIncrementPendingFlipsForFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3)
{
  struct _VIDSCH_PRESENT_INFO *v3; // r10
  unsigned int *v4; // rdx
  unsigned int v6; // r9d
  unsigned int v7; // r11d
  unsigned int v8; // r11d
  bool v9; // zf
  unsigned int v10; // r9d
  char v11; // dl
  int v12; // eax
  char v13; // cl
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // edx
  _QWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+30h] [rbp-20h]
  unsigned int v20; // [rsp+34h] [rbp-1Ch]
  int v21; // [rsp+38h] [rbp-18h]
  unsigned int v22; // [rsp+3Ch] [rbp-14h]
  unsigned int v23; // [rsp+40h] [rbp-10h]

  v3 = a2;
  v4 = (unsigned int *)*((_QWORD *)a3 + 147);
  if ( *((_BYTE *)a1 + 59) )
  {
    v6 = *v4;
    v7 = *v4;
    v18[0] = a1;
    v8 = v7 & 0x3FF;
    v18[1] = v4;
    v9 = *((_BYTE *)a1 + 156) == 0;
    v19 = v8;
    if ( v9 )
      v10 = 0;
    else
      v10 = (v6 >> 10) & 0x3FF;
    v21 = 0;
    v11 = -1;
    v9 = !_BitScanForward((unsigned int *)&v12, v8);
    v13 = -1;
    v20 = v10;
    if ( !v9 )
      v13 = v12;
    v14 = v13;
    v9 = !_BitScanForward((unsigned int *)&v15, v10);
    v22 = v13;
    if ( !v9 )
      v11 = v15;
    v16 = (unsigned int)v11;
    v23 = v11;
    while ( v8 || v10 )
    {
      if ( v14 < (unsigned int)v16 )
        v16 = v14;
      ++*((_DWORD *)v3 + 72 * v16 + 50);
      if ( (*((_DWORD *)a3 + 284) & 0x20) != 0 )
        ++*((_DWORD *)v3 + 72 * v16 + 51);
      *((_DWORD *)v3 + 772) |= 1 << v16;
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v18);
      v16 = v23;
      v14 = v22;
      v10 = v20;
      v8 = v19;
    }
  }
  else
  {
    if ( (*((_DWORD *)a3 + 284) & 0x10) != 0 )
      v17 = (*v4 | (*v4 >> 10)) & 0x3FF;
    else
      v17 = (1 << *((_DWORD *)a1 + 38)) - 1;
    *((_DWORD *)v3 + 772) |= v17;
  }
}
