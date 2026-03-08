/*
 * XREFs of MiAllocateInPageSupport @ 0x14028A6A0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiGetInPageSupportBlock @ 0x14028A054 (MiGetInPageSupportBlock.c)
 */

PSLIST_ENTRY __fastcall MiAllocateInPageSupport(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  PSLIST_ENTRY result; // rax
  struct _SLIST_ENTRY *v13; // rsi
  __int64 v14; // rax

  if ( a4 )
    v8 = *a4;
  else
    v8 = 0LL;
  v9 = *a3;
  if ( *a3 > 0x100 )
  {
    *a3 = 256;
    v9 = 256;
  }
  v10 = a2 | 1;
  if ( v9 <= 0x10 )
    v10 = a2;
  v11 = v10;
  if ( a4 )
    v11 = v10 | 4;
  result = MiGetInPageSupportBlock(v11, a5);
  if ( !result )
  {
    if ( a4 )
    {
      MiUnlockProtoPoolPage(v8, 0x11u);
    }
    else
    {
      if ( (v10 & 1) == 0 )
        return 0LL;
      v10 &= ~1u;
      *a3 = 16;
    }
    v13 = MiGetInPageSupportBlock(v10, a5);
    if ( !v13 )
    {
      if ( (v10 & 1) == 0 )
        return v13;
      *a3 = 16;
      v13 = MiGetInPageSupportBlock(v10 & 0xFFFFFFFE, a5);
      if ( !v13 )
        return 0LL;
    }
    if ( !a4 )
      return v13;
    v14 = MiLockProtoPoolPage(a1, 0LL);
    if ( v14 )
    {
      *a4 = v14;
      return v13;
    }
    MiFreeInPageSupportBlock(v13);
    return 0LL;
  }
  return result;
}
