/*
 * XREFs of ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00B0138
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00897B0 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0089908 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11)
{
  unsigned int v11; // r11d
  VIDMM_GLOBAL *v12; // r13
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdi
  LONGLONG QuadPart; // r15
  LONGLONG v16; // r14
  char *v17; // r12
  char *i; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r9
  struct _DXGK_TRANSFERFLAGS v23; // [rsp+60h] [rbp-48h]
  struct _VIDMM_GLOBAL_ALLOC *v26; // [rsp+C0h] [rbp+18h]

  v26 = a3;
  v11 = a2;
  v12 = this;
  v13 = a5;
  v14 = a4 + a5;
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  if ( a10 )
    v16 = a10->QuadPart;
  else
    v16 = 0LL;
  v17 = (char *)a3 + 184;
  for ( i = (char *)*((_QWORD *)a3 + 23); i != v17; i = *(char **)i )
  {
    v19 = *((_QWORD *)i + 4);
    if ( v14 <= v19 )
      break;
    v20 = v19 + *((_QWORD *)i + 8) - *((_QWORD *)i + 7);
    if ( v13 < v20 )
    {
      v21 = v14;
      if ( v14 > v20 )
        v21 = v19 + *((_QWORD *)i + 8) - *((_QWORD *)i + 7);
      if ( v13 < v19 )
      {
        VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
          this,
          v11,
          (D3DGPU_VIRTUAL_ADDRESS *)a3,
          v19 - v13,
          v13,
          a6,
          QuadPart,
          a8,
          a9,
          v16,
          a11,
          v13 - a5,
          v23,
          0LL);
        v13 = *((_QWORD *)i + 4);
        a3 = v26;
        v19 = v13;
        v11 = a2;
      }
      v22 = v21 - v13;
      v12 = this;
      VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        this,
        v11,
        (D3DGPU_VIRTUAL_ADDRESS *)a3,
        v22,
        v19,
        a6,
        QuadPart,
        a8,
        a9,
        v16,
        a11,
        v19 - a5,
        v23,
        *((_QWORD *)i + 5));
      if ( v14 <= v20 )
        return;
      a3 = v26;
      v13 = v20;
      v11 = a2;
    }
  }
  VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
    v12,
    v11,
    (D3DGPU_VIRTUAL_ADDRESS *)a3,
    v14 - v13,
    v13,
    a6,
    QuadPart,
    a8,
    a9,
    v16,
    a11,
    v13 - a5,
    v23,
    0LL);
}
