/*
 * XREFs of ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02BA248
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02BA390 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010C850 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0152CF0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
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
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  __int64 result; // rax
  unsigned int v12; // ebx
  char *pData; // rdx
  __int64 v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  char *v17; // rbp
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r10
  char *v20; // r11
  bool v21; // zf
  unsigned int v22; // eax
  struct _D3DKMT_UNLOCK v23; // [rsp+20h] [rbp-68h] BYREF
  struct _D3DKMT_LOCK v24; // [rsp+30h] [rbp-58h] BYREF

  *(_OWORD *)&v24.hDevice = 0LL;
  v24.hAllocation = a3;
  v9 = 0LL;
  *a7 = 0;
  *a8 = 0;
  v10 = a4;
  memset(&v24.pPages, 0, 32);
  result = DXGDEVICE::Lock(a2, &v24, a6);
  v12 = result;
  if ( (int)result >= 0 )
  {
    pData = (char *)v24.pData;
    v14 = (unsigned int)(a5->right - a5->left);
    v15 = 0;
    v16 = v14 * (a5->bottom - a5->top);
    v17 = (char *)v24.pData + (unsigned int)(v10 * (a5->bottom - a5->top));
    if ( v24.pData < v17 )
    {
      v18 = (unsigned int)v14;
      v14 = v16 >> 1;
      while ( 1 )
      {
        v19 = v18;
        v20 = pData;
        if ( pData > &pData[4 * v18] )
          v19 = 0LL;
        if ( v19 )
        {
          do
          {
            v21 = (*(_DWORD *)v20 & 0xFFFFFF) == 0;
            v22 = v15 + 1;
            v20 += 4;
            if ( v21 )
              v22 = v15;
            ++v9;
            v15 = v22;
          }
          while ( v9 < v19 );
        }
        if ( v15 > (unsigned int)v14 )
          break;
        pData += v10;
        v9 = 0LL;
        if ( pData >= v17 )
          goto LABEL_14;
      }
      v15 = v16;
    }
LABEL_14:
    *a7 = v16;
    *a8 = v15;
    v23.phAllocations = &v24.hAllocation;
    v23.hDevice = 0;
    v23.NumAllocations = 1;
    DXGDEVICE::Unlock(a2, &v23, 0LL, v14);
    return v12;
  }
  return result;
}
