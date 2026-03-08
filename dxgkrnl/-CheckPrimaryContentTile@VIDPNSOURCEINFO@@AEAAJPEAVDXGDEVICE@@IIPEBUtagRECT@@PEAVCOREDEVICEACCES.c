/*
 * XREFs of ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02F222C
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02F235C (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8330 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CE1EC (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentTile(
        VIDPNSOURCEINFO *this,
        struct DXGDEVICE *a2,
        D3DKMT_HANDLE a3,
        unsigned int a4,
        const struct tagRECT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  __int64 v9; // rbp
  __int64 result; // rax
  unsigned int v11; // ebx
  char *pData; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  char *v16; // rdi
  __int64 v17; // r12
  char *v18; // r11
  char *i; // r9
  unsigned int v20; // eax
  struct _D3DKMT_UNLOCK v21; // [rsp+20h] [rbp-58h] BYREF
  struct _D3DKMT_LOCK v22; // [rsp+30h] [rbp-48h] BYREF

  *(_OWORD *)&v22.hDevice = 0LL;
  v22.hAllocation = a3;
  *a7 = 0;
  *a8 = 0;
  v9 = a4;
  memset(&v22.pPages, 0, 32);
  result = DXGDEVICE::Lock(a2, &v22, a6);
  v11 = result;
  if ( (int)result >= 0 )
  {
    pData = (char *)v22.pData;
    v13 = a5->right - a5->left;
    v14 = 0;
    v15 = v13 * (a5->bottom - a5->top);
    v16 = (char *)v22.pData + (unsigned int)(v9 * (a5->bottom - a5->top));
    if ( v22.pData < v16 )
    {
      v17 = v13;
      while ( 1 )
      {
        v18 = &pData[4 * v17];
        for ( i = pData; i < v18; v14 = v20 )
        {
          v20 = v14 + 1;
          if ( (*(_DWORD *)i & 0xFFFFFF) == 0 )
            v20 = v14;
          i += 4;
        }
        if ( v14 > v15 >> 1 )
          break;
        pData += v9;
        if ( pData >= v16 )
          goto LABEL_12;
      }
      v14 = v15;
    }
LABEL_12:
    v21.hDevice = 0;
    *a7 = v15;
    *a8 = v14;
    v21.phAllocations = &v22.hAllocation;
    v21.NumAllocations = 1;
    DXGDEVICE::Unlock(a2, &v21, 0);
    return v11;
  }
  return result;
}
