/*
 * XREFs of ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C0269F60
 * Callers:
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0186198 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C026A0F4 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 * Callees:
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C016D968 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::FindEntry(
        DXGADAPTERSOURCEHASH *this,
        __int64 a2,
        int a3,
        const struct _LUID *a4,
        unsigned int *a5)
{
  unsigned int ActualBufferSize; // eax
  _QWORD *v7; // rdx
  _DWORD *v8; // r9
  unsigned int v9; // r11d
  __int64 v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v16; // r10d
  _DWORD *v17; // rbx
  int v18; // ecx
  unsigned int v19; // r11d
  unsigned int v20; // eax
  unsigned int v21; // ecx
  _DWORD *v22; // rax

  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40));
  v11 = *(unsigned int *)(v10 + 60);
  v12 = ActualBufferSize >> 4;
  v13 = v9;
  if ( ActualBufferSize >> 4 > 1 << v11 )
    v12 = 1 << v11;
  if ( v9 >= v12 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v7);
    *(_QWORD *)(v14 + 32) = v12;
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdAssertion(v14);
    return 0LL;
  }
  v16 = 0;
  v17 = (_DWORD *)(*v7 + 16LL * v9);
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v18 = v17[3] & 1 ^ (a3 == 0);
    if ( v8 && (*v8 != *v17 || v8[1] != v17[1]) )
      v18 = 0;
    if ( a5 && *a5 != v17[2] )
      v18 = 0;
    if ( v18 )
      break;
    v19 = v9 + 1;
    ++v16;
    v20 = 0;
    v21 = v19;
    if ( v19 != v12 )
      v20 = v19;
    v9 = v20;
    v22 = v17 + 4;
    v17 = (_DWORD *)*v7;
    if ( v21 != v12 )
      v17 = v22;
    if ( v16 >= v12 )
      return 0LL;
  }
  return (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)v17;
}
