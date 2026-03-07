struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockAndRange(VIDMM_RECYCLE_HEAP_MGR **this)
{
  unsigned __int64 SmallAllocationSize; // rax
  char v3; // dl
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  unsigned __int8 v5; // r9
  unsigned __int64 SmallAllocationBlockSize; // r10
  unsigned __int64 *BlockForType; // rax
  __int64 v8; // rdi
  struct VIDMM_RECYCLE_RANGE *Range; // rbx
  __int64 v10; // r9
  _QWORD *Multirange; // rax
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                          (VIDMM_RECYCLE_HEAP_MGR *)this,
                          (unsigned int)(*(_DWORD *)this - 5) <= 1);
  if ( SmallAllocationSize > SmallAllocationBlockSize )
    SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(v4, v3);
  BlockForType = (unsigned __int64 *)VIDMM_RECYCLE_HEAP::CreateBlockForType(v4, SmallAllocationBlockSize, v5);
  v8 = (__int64)BlockForType;
  if ( !BlockForType )
    return 0LL;
  Range = VIDMM_RECYCLE_HEAP_MGR::CreateRange(
            this[1],
            (struct VIDMM_RECYCLE_BLOCK *)BlockForType,
            BlockForType[5],
            BlockForType[6]);
  if ( !Range )
  {
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v8);
    return 0LL;
  }
  if ( (unsigned int)(*(_DWORD *)this - 3) <= 3 || (unsigned int)(*(_DWORD *)this - 9) <= 1 )
    *((_DWORD *)Range + 20) = 1;
  *((_QWORD *)Range + 16) = v8 + 72;
  *((_QWORD *)Range + 15) = v8 + 72;
  v10 = *(_QWORD *)(v8 + 40);
  *(_QWORD *)(v8 + 80) = (char *)Range + 120;
  *(_QWORD *)(v8 + 72) = (char *)Range + 120;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange((__int64)this[1], 0, v8, v10, *(_QWORD *)(v8 + 48));
  v12 = Multirange;
  if ( !Multirange )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(this[1], Range);
    return 0LL;
  }
  Multirange[8] = Range;
  Multirange[9] = Range;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD **)(v8 + 32), 2, (__int64)Multirange);
  *((_QWORD *)Range + 17) = v12;
  if ( (byte_1C00769C2 & 2) != 0 )
    McTemplateK0pppppppqq_EtwWriteTransfer(
      v14,
      v13,
      v15,
      **((_QWORD **)this[1] + 1),
      Range,
      v8,
      *(_QWORD *)(v8 + 56),
      this,
      *((_QWORD *)Range + 4),
      *((_QWORD *)Range + 5),
      *(_DWORD *)this,
      *((_DWORD *)Range + 16));
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v12;
}
