void __fastcall VidSchiReleaseFlipFencesReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  unsigned int v4; // r9d
  bool v5; // zf
  unsigned int v7; // r8d
  __int64 v8; // rdx
  int v9; // eax
  char v10; // cl
  unsigned int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // r14d
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdi
  char *v17; // rcx
  char *v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+30h] [rbp-20h]
  unsigned int v21; // [rsp+34h] [rbp-1Ch]
  int v22; // [rsp+38h] [rbp-18h]
  unsigned int v23; // [rsp+3Ch] [rbp-14h]
  unsigned int v24; // [rsp+40h] [rbp-10h]

  v2 = *(_DWORD *)a2;
  v3 = *(_DWORD *)a2;
  v19[0] = a1;
  v4 = v3 & 0x3FF;
  v19[1] = a2;
  v5 = *((_BYTE *)a1 + 156) == 0;
  v20 = v4;
  if ( v5 )
    v7 = 0;
  else
    v7 = (v2 >> 10) & 0x3FF;
  v22 = 0;
  v8 = 0xFFFFFFFFLL;
  v5 = !_BitScanForward((unsigned int *)&v9, v4);
  v10 = -1;
  v21 = v7;
  if ( !v5 )
    v10 = v9;
  v5 = !_BitScanForward(&v11, v7);
  v12 = v10;
  v23 = v10;
  if ( !v5 )
    v8 = v11;
  v13 = (char)v8;
  v24 = (char)v8;
  while ( v4 || v7 )
  {
    v14 = v13;
    if ( v12 < v13 )
      v14 = v12;
    v15 = v14 * ((8 * *((_DWORD *)a2 + 2) + 231) & 0xFFFFFFF8);
    v16 = (unsigned int)v15;
    v17 = *(char **)((char *)a2 + v15 + 208);
    if ( v17 )
    {
      VidSchiReleaseSyncObjectReference(v17, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v8);
      *(_QWORD *)((char *)a2 + v16 + 208) = 0LL;
    }
    v18 = *(char **)((char *)a2 + v16 + 224);
    if ( v18 )
    {
      if ( v12 < v13 )
      {
        VidSchiReleaseSyncObjectReference(v18, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v8);
        *(_QWORD *)((char *)a2 + v16 + 224) = 0LL;
      }
    }
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v19);
    v7 = v21;
    v13 = v24;
    v12 = v23;
    v4 = v20;
  }
}
