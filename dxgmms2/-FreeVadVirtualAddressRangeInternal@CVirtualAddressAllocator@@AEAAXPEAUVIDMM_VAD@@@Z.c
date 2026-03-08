/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00897A0
 * Callers:
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0086FD4 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0087938 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0089160 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C009EC00 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00C3074 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00E3514 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001310 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C002FF60 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C0030060 (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0087938 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0088124 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0089A5C (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0E2C (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  struct VIDMM_VAD *v4; // rdi
  __int64 v5; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // r8
  char *v11; // rcx
  char *v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rbx
  unsigned int *v15; // rbx
  char *v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rcx
  char **v20; // rax
  unsigned int v21; // esi
  _QWORD **v22; // r14
  _QWORD *v23; // rcx
  struct _RTL_BALANCED_NODE *v24; // rbx
  struct _RTL_BALANCED_NODE *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  struct VIDMM_VAD **v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+50h] [rbp-48h]
  __int64 v36; // [rsp+A8h] [rbp+10h] BYREF

  v3 = (_QWORD *)((char *)a2 + 56);
  v4 = a2;
  v5 = *((_QWORD *)a2 + 7);
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 )
      goto LABEL_40;
    v30 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v30 != v3 )
      goto LABEL_40;
    *v30 = v5;
    *(_QWORD *)(v5 + 8) = v30;
    *v3 = 0LL;
  }
  v7 = *((unsigned int *)v4 + 18);
  v8 = 0;
  if ( (v7 & 0x7F0) != 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *((_QWORD *)v4 + 3 * v8 + 12);
        if ( (struct VIDMM_VAD *)v9 != (struct VIDMM_VAD *)((char *)v4 + 24 * v8 + 96) )
          break;
        v7 = *((unsigned int *)v4 + 18);
        if ( ++v8 >= ((*((_DWORD *)v4 + 18) >> 4) & 0x7Fu) )
          goto LABEL_5;
      }
      if ( (byte_1C00769C2 & 0x20) != 0 )
        break;
LABEL_39:
      CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct _LIST_ENTRY *)v9, 0, 1);
    }
    v31 = *(_QWORD *)(v9 + 48);
    v32 = (unsigned int)((int)(*(_DWORD *)(v9 + 56) << 28) >> 28);
    if ( (int)v32 >= 1 )
    {
      v32 = (unsigned int)(v32 - 1);
      if ( !(_DWORD)v32 )
      {
LABEL_51:
        LODWORD(v35) = *(_DWORD *)(v9 + 56);
        McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
          v32,
          &EndGpuVirtualAddressRangeMapping,
          (unsigned int)v35,
          this,
          v31,
          *(_QWORD *)(v9 + 64),
          *(_QWORD *)(v9 + 88),
          *(_QWORD *)(v9 + 96),
          *(_QWORD *)(v9 + 80),
          *(_QWORD *)(v9 + 72),
          v35,
          *(_QWORD *)(v9 + 104),
          *(_QWORD *)(v9 + 112));
        goto LABEL_39;
      }
      v32 = (unsigned int)(v32 - 3);
      if ( !(_DWORD)v32 )
      {
        v31 = *(_QWORD *)(v31 + 64);
        goto LABEL_51;
      }
      if ( (_DWORD)v32 == 1 )
      {
        v31 = *(_QWORD *)(v31 + 24);
        goto LABEL_51;
      }
    }
    v31 = 0LL;
    goto LABEL_51;
  }
LABEL_5:
  if ( (byte_1C00769C2 & 0x20) != 0 )
  {
    LODWORD(v34) = v7;
    McTemplateK0pqxx_EtwWriteTransfer(
      v7,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      v34,
      *((_QWORD *)v4 + 3),
      *((_QWORD *)v4 + 4));
  }
  RtlAvlRemoveNode((char *)this + 48, v4);
  *((_DWORD *)v4 + 18) &= 0xFFFFFFF0;
  v11 = (char *)v4 + 80;
  while ( 1 )
  {
    v12 = *(char **)v11;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_40;
    v13 = *(_QWORD *)v12;
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_40;
    *(_QWORD *)v11 = v13;
    *(_QWORD *)(v13 + 8) = v11;
    if ( v12 == v11 )
      break;
    **((_QWORD **)v12 + 2) = 0LL;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
  }
  v14 = (_DWORD *)*((_QWORD *)v4 + 6);
  if ( v14 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v4 + 3) == *((_QWORD *)v14 - 1) && (v14[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v14 - 10));
    *((_QWORD *)v14 - 1) = *((_QWORD *)v4 + 4);
    v28 = *((_QWORD *)v4 + 5);
    if ( *(struct VIDMM_VAD **)(v28 + 8) != (struct VIDMM_VAD *)((char *)v4 + 40) )
      goto LABEL_40;
    v29 = (struct VIDMM_VAD **)*((_QWORD *)v4 + 6);
    if ( *v29 != (struct VIDMM_VAD *)((char *)v4 + 40) )
      goto LABEL_40;
    *v29 = (struct VIDMM_VAD *)v28;
    *(_QWORD *)(v28 + 8) = v29;
    CVirtualAddressAllocator::FreeVad(v4, v28);
    v4 = (struct VIDMM_VAD *)(v14 - 10);
  }
  v15 = (unsigned int *)*((_QWORD *)v4 + 5);
  v16 = (char *)v4 + 40;
  if ( v15 != (unsigned int *)((char *)this + 24) )
  {
    v17 = *((_QWORD *)v15 - 2);
    if ( *((_QWORD *)v4 + 4) == v17 )
    {
      v10 = v15[8];
      if ( (v15[8] & 0xF) == 1 )
      {
        if ( (byte_1C00769C2 & 0x20) != 0 )
        {
          LODWORD(v34) = v15[8];
          McTemplateK0pqxx_EtwWriteTransfer(
            v17,
            &DestroyGpuVirtualAddressRange,
            v10,
            this,
            v34,
            v17,
            *((_QWORD *)v15 - 1));
        }
        RtlAvlRemoveNode((char *)this + 40, v15 - 10);
        v15[8] &= 0xFFFFFFF0;
        *((_QWORD *)v15 - 2) = *((_QWORD *)v4 + 3);
        v19 = *(_QWORD *)v16;
        if ( *(char **)(*(_QWORD *)v16 + 8LL) == v16 )
        {
          v20 = (char **)*((_QWORD *)v4 + 6);
          if ( *v20 == v16 )
          {
            *v20 = (char *)v19;
            v21 = 0;
            *(_QWORD *)(v19 + 8) = v20;
            if ( (*((_DWORD *)v4 + 18) & 0x7F0) != 0 )
            {
              do
              {
                v22 = (_QWORD **)((char *)v4 + 24 * v21 + 96);
                while ( 1 )
                {
                  v23 = *v22;
                  if ( *v22 == v22 )
                    break;
                  if ( (_QWORD **)v23[1] != v22 )
                    goto LABEL_40;
                  v33 = (_QWORD *)*v23;
                  if ( *(_QWORD **)(*v23 + 8LL) != v23 )
                    goto LABEL_40;
                  *v22 = v33;
                  v33[1] = v22;
                  *v23 = 0LL;
                  v23[1] = 0LL;
                  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v23 - 1), v18);
                }
                ++v21;
              }
              while ( v21 < ((*((_DWORD *)v4 + 18) >> 4) & 0x7Fu) );
            }
            operator delete(v4);
            v4 = (struct VIDMM_VAD *)(v15 - 10);
            goto LABEL_26;
          }
        }
LABEL_40:
        __fastfail(3u);
      }
    }
  }
LABEL_26:
  LOBYTE(v10) = 0;
  v24 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  v36 = *((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 3);
  if ( !v24 )
    goto LABEL_33;
  while ( (int)CompareVadSizeAvl(&v36, v24) < 0 )
  {
    v25 = v24->Children[0];
    if ( !v24->Children[0] )
    {
      LOBYTE(v10) = 0;
      goto LABEL_33;
    }
LABEL_29:
    v24 = v25;
  }
  v25 = v24->Children[1];
  if ( v25 )
    goto LABEL_29;
  LOBYTE(v10) = 1;
LABEL_33:
  RtlAvlInsertNodeEx((char *)this + 40, v24, v10, v4);
  v27 = *((_DWORD *)v4 + 18) & 0xFFFFE7F0 | 1;
  *((_DWORD *)v4 + 18) = v27;
  if ( (byte_1C00769C2 & 0x20) != 0 )
  {
    LODWORD(v34) = v27;
    McTemplateK0pqxx_EtwWriteTransfer(
      v27,
      &CreateGpuVirtualAddressRange,
      v26,
      this,
      v34,
      *((_QWORD *)v4 + 3),
      *((_QWORD *)v4 + 4));
  }
}
