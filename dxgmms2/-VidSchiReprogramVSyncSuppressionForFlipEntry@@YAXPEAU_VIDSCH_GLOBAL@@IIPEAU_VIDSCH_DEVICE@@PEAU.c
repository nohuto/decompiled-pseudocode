void __fastcall VidSchiReprogramVSyncSuppressionForFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        struct _VIDSCH_DEVICE *a4,
        struct VIDSCH_FLIP_QUEUE *a5,
        unsigned __int64 a6,
        bool a7,
        unsigned int *a8)
{
  __int64 v10; // r10
  unsigned int i; // ecx
  __int64 v12; // r9
  unsigned int v13; // r8d
  int v14; // eax
  int v15; // ebx
  __int64 v16; // r9
  unsigned __int64 v17; // r9

  *a8 = 0;
  if ( *((_BYTE *)a1 + 59) )
  {
    v10 = *((_QWORD *)a1 + a2 + 400) + 288LL * a3;
    for ( i = *((_DWORD *)a5 + 17); i != *((_DWORD *)a5 + 14); i = ((_BYTE)i + 1) & 0x3F )
    {
      v12 = 1384LL * i;
      v13 = *(_DWORD *)((char *)a5 + v12 + 1172);
      if ( v13 <= 0xC )
      {
        v14 = 4673;
        if ( _bittest(&v14, v13) )
          continue;
      }
      v15 = *(_DWORD *)((char *)a5 + v12 + 1256);
      if ( (v15 & 0x20) != 0 && *(_DWORD *)((char *)a5 + v12 + 1176) == a6 )
      {
        if ( ((v15 & 0x80000) == 0) != a7 )
        {
          *(_DWORD *)((char *)a5 + v12 + 1256) = v15 & 0xFFF7FFFF | (!a7 << 19);
          if ( ((!a7 << 19) & 0x80000) == 0 )
          {
            if ( v13 == 5 || v13 == 15 )
            {
              v16 = *(_QWORD *)((char *)a5 + v12 + 1296);
              *a8 = 1;
              if ( ((*(_DWORD *)v16 | (*(_DWORD *)v16 >> 10)) & 0x3FF) != 0 )
              {
                v17 = *(_QWORD *)(v16 + 24);
                if ( v17 )
                {
                  if ( v17 < *(_QWORD *)(v10 + 424) )
                    VidSchiSetInterruptTargetPresentId(a1, a2, a3, v17, 0, 0);
                }
              }
            }
            else
            {
              *a8 = 2;
            }
          }
        }
        return;
      }
    }
  }
}
