/*
 * XREFs of ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x1801AA754
 * Callers:
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x18002B030 (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListBatchManager::FreeBatchResources(CDrawListBatchManager *this, struct CDrawListEntryBatch *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax

  v4 = *((_DWORD *)a2 + 13);
  if ( *((_DWORD *)a2 + 12) < v4 )
  {
    v5 = 8LL * *((unsigned int *)a2 + 12);
    v6 = v4 - *((_DWORD *)a2 + 12);
    do
    {
      (*(void (__fastcall **)(_QWORD, struct CDrawListEntryBatch *))(**(_QWORD **)(v5 + *(_QWORD *)this) + 48LL))(
        *(_QWORD *)(v5 + *(_QWORD *)this),
        a2);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + *(_QWORD *)this) + 8LL))(*(_QWORD *)(v5 + *(_QWORD *)this));
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  if ( (*((_DWORD *)this + 48))-- == 1 )
  {
    v8 = *((_DWORD *)this + 9);
    if ( v8 <= *((_DWORD *)this + 6) - *((_DWORD *)this + 8) )
      v8 = *((_DWORD *)this + 6) - *((_DWORD *)this + 8);
    *((_DWORD *)this + 9) = v8;
    v9 = *((_DWORD *)this + 19);
    if ( v9 <= *((_DWORD *)this + 16) - *((_DWORD *)this + 18) )
      v9 = *((_DWORD *)this + 16) - *((_DWORD *)this + 18);
    *((_DWORD *)this + 19) = v9;
    v10 = *((_DWORD *)this + 29);
    if ( v10 <= *((_DWORD *)this + 26) - *((_DWORD *)this + 28) )
      v10 = *((_DWORD *)this + 26) - *((_DWORD *)this + 28);
    *((_DWORD *)this + 29) = v10;
    v11 = *((_DWORD *)this + 39);
    if ( v11 <= *((_DWORD *)this + 36) - *((_DWORD *)this + 38) )
      v11 = *((_DWORD *)this + 36) - *((_DWORD *)this + 38);
    *((_DWORD *)this + 39) = v11;
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 8) = 0;
  }
}
