/*
 * XREFs of ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0216A04
 * Callers:
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x1C0216988 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C030E394 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01DC800 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C01DD9F0 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C030E1D8 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::AddEntry(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        int a3,
        char a4)
{
  _DWORD *Buffer; // rax
  unsigned int v9; // esi
  unsigned int v10; // r10d
  unsigned int v11; // ebp
  char *v12; // rbx
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rbx
  int v14; // ecx
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *result; // rax

  if ( !*(_QWORD *)((char *)this + 60) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer((const void **)this + 6, 0x80u, 0);
    if ( !Buffer )
      return 0LL;
    Buffer[1] = -1;
    *Buffer = -1;
    Buffer[2] = -1;
    Buffer[3] = Buffer[3] & 0xFFFFFFFC | 1;
    *((_DWORD *)this + 16) = 1;
    memset(Buffer + 4, 0, 0x70uLL);
  }
  v9 = (unsigned int)AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  v11 = 1 << *((_DWORD *)this + 17);
  if ( v9 > v11 )
  {
    v9 = 1 << *((_DWORD *)this + 17);
  }
  else if ( v9 != v11 )
  {
    if ( v10 == v9 )
    {
      if ( v9 + 8 < v11 )
        v11 = v9 + 8;
      v12 = (char *)AUTOEXPANDALLOCATION::GetBuffer((const void **)this + 6, 16 * v11, 1);
      memset(&v12[16 * v9 + 16], 0, 16LL * (v11 - v9 - 1));
    }
    else
    {
      v12 = (char *)*((_QWORD *)this + 6);
    }
    Entry = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)&v12[16 * *((unsigned int *)this + 16)];
    goto LABEL_9;
  }
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, v10 % v9, 0, 0LL, 0LL);
  if ( Entry )
  {
LABEL_9:
    v14 = *((_DWORD *)Entry + 3) | 1;
    *((_DWORD *)Entry + 3) = v14;
    *(struct _LUID *)Entry = *a2;
    *((_DWORD *)Entry + 2) = a3;
    *((_DWORD *)Entry + 3) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(2 * a4)) & 2;
    result = Entry;
    ++*((_DWORD *)this + 16);
    return result;
  }
  return 0LL;
}
