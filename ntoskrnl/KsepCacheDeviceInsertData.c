/*
 * XREFs of KsepCacheDeviceInsertData @ 0x140800C10
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x1408012E8 (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140303CA4 (KsepPoolAllocatePaged.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KsepStringDuplicate @ 0x14079E668 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x14079EC60 (KsepStringFree.c)
 */

__int64 __fastcall KsepCacheDeviceInsertData(__int64 a1, _WORD *a2, const void *a3, int a4, unsigned int Size)
{
  _QWORD *Paged; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  void *v12; // rax
  _QWORD *v13; // rcx

  Paged = KsepPoolAllocatePaged(0x30uLL);
  v10 = Paged;
  if ( !Paged )
    return (unsigned int)-1073741801;
  v11 = KsepStringDuplicate((__int64)(Paged + 2), a2);
  if ( v11 < 0 )
  {
LABEL_9:
    KsepStringFree((__int64)(v10 + 2));
    KsepPoolFreePaged((void *)v10[5]);
    KsepPoolFreePaged(v10);
    return (unsigned int)v11;
  }
  v12 = KsepPoolAllocatePaged(Size);
  v10[5] = v12;
  if ( !v12 )
  {
    v11 = -1073741801;
    goto LABEL_9;
  }
  memmove(v12, a3, Size);
  *((_DWORD *)v10 + 9) = a4;
  *((_DWORD *)v10 + 8) = Size;
  v13 = *(_QWORD **)(a1 + 64);
  if ( *v13 != a1 + 56 )
    __fastfail(3u);
  *v10 = a1 + 56;
  v11 = 0;
  v10[1] = v13;
  *v13 = v10;
  *(_QWORD *)(a1 + 64) = v10;
  return (unsigned int)v11;
}
