/*
 * XREFs of ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x1802020F4
 * Callers:
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180207474 (--1CDrawListEntryBatch@@EEAA@XZ.c)
 * Callees:
 *     ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000D9E0 (-ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_de.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801FBED8 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 */

void __fastcall CDrawListBatchManager::FreeBatchResources(CDrawListBatchManager *this, struct CDrawListEntryBatch *a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  CBatchCommand *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 13);
  if ( *((_DWORD *)a2 + 12) < v3 )
  {
    v4 = v3 - *((_DWORD *)a2 + 12);
    v5 = 8LL * *((unsigned int *)a2 + 12);
    do
    {
      v10 = *(CBatchCommand **)(v5 + *(_QWORD *)this);
      CDrawListBatchManager::ReturnBatchCommand((__int64)this, &v10);
      if ( v10 )
        CBatchCommand::`scalar deleting destructor'(v10);
      v5 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  if ( (*((_DWORD *)this + 38))-- == 1 )
  {
    v7 = *((_DWORD *)this + 9);
    if ( v7 <= *((_DWORD *)this + 6) - *((_DWORD *)this + 8) )
      v7 = *((_DWORD *)this + 6) - *((_DWORD *)this + 8);
    *((_DWORD *)this + 9) = v7;
    v8 = *((_DWORD *)this + 19);
    if ( v8 <= *((_DWORD *)this + 16) - *((_DWORD *)this + 18) )
      v8 = *((_DWORD *)this + 16) - *((_DWORD *)this + 18);
    *((_DWORD *)this + 19) = v8;
    v9 = *((_DWORD *)this + 29);
    if ( v9 <= *((_DWORD *)this + 26) - *((_DWORD *)this + 28) )
      v9 = *((_DWORD *)this + 26) - *((_DWORD *)this + 28);
    *((_DWORD *)this + 29) = v9;
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 8) = 0;
  }
}
