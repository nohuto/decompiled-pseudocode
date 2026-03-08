/*
 * XREFs of ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C032FBA4
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C032F0F0 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     McTemplateK0pqppqq_EtwWriteTransfer @ 0x1C0053DF0 (McTemplateK0pqppqq_EtwWriteTransfer.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01DC800 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0336940 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_RGNS *a5)
{
  struct _D3DKMT_PRESENT_RGNS *v5; // rbx
  __int64 v7; // r15
  __int64 v9; // r12
  UINT MoveRectCount; // edx
  unsigned int v12; // r13d
  const RECT *pDirtyRects; // rbp
  UINT v14; // esi
  RECT *Buffer; // rax
  UINT v16; // r8d
  RECT *i; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  DXGCONTEXT **v20; // r8
  struct DXGHWQUEUE **v21; // rdx
  unsigned int v22; // ebx
  struct _D3DKMT_PRESENT_RGNS **v23; // rax
  struct _D3DKMT_PRESENT_RGNS *v24; // rcx
  struct DXGCONTEXT **v25; // [rsp+20h] [rbp-58h]
  struct tagRECT *v26; // [rsp+38h] [rbp-40h]
  struct COREDEVICEACCESS *v27; // [rsp+40h] [rbp-38h]

  v5 = a5;
  v7 = a4;
  v9 = a3;
  if ( !a5 )
    return 0LL;
  MoveRectCount = a5->MoveRectCount;
  v12 = a5->DirtyRectCount + MoveRectCount;
  if ( MoveRectCount )
  {
    v14 = 16 * a5->DirtyRectCount;
    Buffer = (RECT *)AUTOEXPANDALLOCATION::GetBuffer(*((const void ***)a2 + 6), v14 + 16 * MoveRectCount, 0);
    pDirtyRects = Buffer;
    if ( !Buffer )
    {
      WdLogSingleEntry1(6LL, 1879LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to expand temp buffer for submitting presents.",
        1879LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    memmove(Buffer, v5->pDirtyRects, v14);
    v16 = 0;
    for ( i = (RECT *)&pDirtyRects[v5->DirtyRectCount]; v16 < v5->MoveRectCount; ++i )
    {
      v18 = v16++;
      *i = v5->pMoveRects[v18].DestRect;
    }
  }
  else
  {
    pDirtyRects = a5->pDirtyRects;
  }
  v19 = *((_QWORD *)a2 + 7);
  v20 = (DXGCONTEXT **)((char *)a2 + 8);
  a5 = 0LL;
  v21 = 0LL;
  if ( v19 )
  {
    v21 = *(struct DXGHWQUEUE ***)(v19 + 1504);
  }
  else if ( (*((_DWORD *)*v20 + 101) & 0x10) != 0 )
  {
    v23 = (struct _D3DKMT_PRESENT_RGNS **)((char *)*v20 + 408);
    v24 = 0LL;
    if ( *v23 != (struct _D3DKMT_PRESENT_RGNS *)v23 )
      v24 = *v23;
    v21 = (struct DXGHWQUEUE **)&a5;
    a5 = v24;
    if ( *((_DWORD *)a2 + 8) )
    {
      v22 = -1073741811;
      goto LABEL_12;
    }
  }
  v22 = DXGCONTEXT::Blt(
          *v20,
          v9,
          v7,
          *((_DWORD *)a2 + 8),
          *((struct DXGCONTEXT ***)a2 + 8),
          0LL,
          v12,
          pDirtyRects,
          0LL,
          v21);
LABEL_12:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v27) = v22;
    LODWORD(v26) = v12;
    LODWORD(v25) = *((_DWORD *)this + 11);
    McTemplateK0pqppqq_EtwWriteTransfer((unsigned int)v25, (__int64)v21, (__int64)v20, this, v25, v9, v7, v26, v27);
  }
  return v22;
}
