/*
 * XREFs of ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1C0014F3C
 * Callers:
 *     DrvUniformSpaceToPixelSpacePoint @ 0x1C0014F10 (DrvUniformSpaceToPixelSpacePoint.c)
 *     DrvPixelSpaceToUniformSpacePoint @ 0x1C00D8B10 (DrvPixelSpaceToUniformSpacePoint.c)
 * Callees:
 *     DrvIsUniformSpaceMapping @ 0x1C0014FA0 (DrvIsUniformSpaceMapping.c)
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 */

__int64 __fastcall TransformPointWithUniformSpaceMapping(struct _MDEV *a1, int *a2, int *a3, int a4)
{
  unsigned int v8; // ebx
  unsigned int v10; // r9d
  int v11; // esi
  __int64 v12; // r8
  char *v13; // r13
  char *v14; // r14
  int v15; // r9d
  unsigned int v16; // r10d
  int v17; // r11d
  char *v18; // r8
  float v19; // xmm3_4
  __int64 v20; // [rsp+20h] [rbp-38h]

  v8 = 0;
  if ( (unsigned int)DrvIsUniformSpaceMapping(a1) )
  {
    v10 = 0;
    v11 = *a2;
    LODWORD(v20) = *a2;
    HIDWORD(v20) = *a3;
    if ( *((_DWORD *)a1 + 5) )
    {
      v12 = a4 != 0 ? 76LL : 56LL;
      while ( 1 )
      {
        v13 = (char *)a1 + 56 * v10;
        v14 = &v13[v12];
        if ( (unsigned int)PtInRect(&v13[v12], v20) )
          break;
        v10 = v15 + 1;
        if ( v10 >= v16 )
          return v8;
      }
      v8 = 1;
      v18 = &v13[(-(__int64)(a4 != 0) & 0xFFFFFFFFFFFFFFECuLL) + 76];
      v19 = (float)((float)((float)(*((_DWORD *)v18 + 3) - *((_DWORD *)v18 + 1))
                          / (float)(*((_DWORD *)v14 + 3) - *((_DWORD *)v14 + 1)))
                  * (float)(v17 - *((_DWORD *)v14 + 1)))
          + 0.5;
      *a2 = *(_DWORD *)v18
          + (int)(float)((float)((float)((float)(*((_DWORD *)v18 + 2) - *(_DWORD *)v18)
                                       / (float)(*((_DWORD *)v14 + 2) - *(_DWORD *)v14))
                               * (float)(v11 - *(_DWORD *)v14))
                       + 0.5);
      *a3 = *((_DWORD *)v18 + 1) + (int)v19;
    }
  }
  return v8;
}
