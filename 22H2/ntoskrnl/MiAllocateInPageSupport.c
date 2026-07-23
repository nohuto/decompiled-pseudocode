/*
 * XREFs of MiAllocateInPageSupport @ 0x14029A230
 * Callers:
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiGetInPageSupportBlock @ 0x14023E894 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x14027CF5C (MiFreeInPageSupportBlock.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 */

PSLIST_ENTRY __fastcall MiAllocateInPageSupport(__int64 a1, char a2, unsigned int *a3, __int64 *a4)
{
  __int64 v7; // rdi
  unsigned int v8; // eax
  char v9; // bl
  char v10; // cl
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *v12; // rdi
  __int64 v13; // rax

  if ( a4 )
    v7 = *a4;
  else
    v7 = 0LL;
  v8 = *a3;
  if ( *a3 > 0x100 )
  {
    *a3 = 256;
    v8 = 256;
  }
  v9 = a2 | 1;
  if ( v8 <= 0x10 )
    v9 = a2;
  v10 = v9;
  if ( a4 )
    v10 = v9 | 4;
  result = MiGetInPageSupportBlock(v10);
  if ( !result )
  {
    if ( a4 )
    {
      MiUnlockProtoPoolPage(v7, 0x11u);
    }
    else
    {
      if ( (v9 & 1) == 0 )
        return 0LL;
      v9 &= ~1u;
      *a3 = 16;
    }
    v12 = MiGetInPageSupportBlock(v9);
    if ( v12 )
      goto LABEL_15;
    if ( (v9 & 1) == 0 )
      return v12;
    *a3 = 16;
    v12 = MiGetInPageSupportBlock(v9 & 0xFE);
    if ( v12 )
    {
LABEL_15:
      if ( a4 )
      {
        v13 = MiLockProtoPoolPage(a1, 0LL);
        if ( !v13 )
        {
          MiFreeInPageSupportBlock(v12);
          return 0LL;
        }
        *a4 = v13;
      }
      return v12;
    }
    return 0LL;
  }
  return result;
}
