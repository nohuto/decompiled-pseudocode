__int64 __fastcall VIDMM_PROCESS_HEAP::GetAllocationInfo(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        int *a6)
{
  int v6; // edi
  unsigned __int64 v7; // r14
  void *v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  VIDMM_PROCESS_HEAP *v13; // r10
  int v14; // eax
  int v15; // r8d
  _QWORD *v16; // rax
  __int64 result; // rax

  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v13 = this;
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
LABEL_10:
    v6 = -1071775472;
    goto LABEL_12;
  }
  v7 = *((_QWORD *)a2 + 7);
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    this = (VIDMM_PROCESS_HEAP *)*((unsigned int *)a2 + 6);
    if ( (unsigned int)((_DWORD)this - 3) > 3 )
    {
      v9 = *((_DWORD *)a2 + 4);
      v8 = (void *)*((_QWORD *)a2 + 1);
      goto LABEL_12;
    }
    v14 = (_DWORD)this - 4;
    goto LABEL_5;
  }
  this = (VIDMM_PROCESS_HEAP *)*((_QWORD *)a2 + 1);
  v15 = *((_DWORD *)this + 20);
  if ( (unsigned int)(v15 - 3) <= 3 )
  {
    v14 = v15 - 4;
LABEL_5:
    v9 = (v14 & 0xFFFFFFFD) != 0 ? 1028 : 4;
    v8 = (void *)(*(__int64 (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *, _QWORD, unsigned __int64, int))(*(_QWORD *)v13 + 56LL))(
                   v13,
                   a2,
                   0LL,
                   v7,
                   1);
    if ( v8 )
    {
      v10 = 1;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  v8 = (void *)(*((_QWORD *)a2 + 2) + *((_QWORD *)this + 4));
  v9 = ~((unsigned __int16)*((_DWORD *)this + 16) << 9) & 0x400 | 4;
LABEL_12:
  if ( g_IsInternalReleaseOrDbg )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v16[5] = v9;
    v16[6] = v10;
    v16[7] = v6;
    v16[3] = v8;
    v16[4] = v7;
  }
  result = (unsigned int)v6;
  *a3 = v7;
  *a4 = v8;
  *a5 = v9;
  *a6 = v10;
  return result;
}
