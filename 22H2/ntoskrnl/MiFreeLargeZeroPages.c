/*
 * XREFs of MiFreeLargeZeroPages @ 0x14027D9D4
 * Callers:
 *     MiCleanupPageTablePages @ 0x14027D96C (MiCleanupPageTablePages.c)
 *     MiPfnRangeIsZero @ 0x1403B9588 (MiPfnRangeIsZero.c)
 *     MiCreateLargePfnList @ 0x14055DE3C (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x14061C968 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiUpdateLargePageBitMap @ 0x140280710 (MiUpdateLargePageBitMap.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(int a1, char *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebp
  char *v6; // r14
  _QWORD **v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  _QWORD *v12; // rsi
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]

  result = 0LL;
  v14 = 0LL;
  v4 = 0;
  v13 = 0LL;
  v6 = (char *)((char *)MiLargePageSizes - a2);
  v7 = (_QWORD **)a2;
  do
  {
    while ( 1 )
    {
      v12 = *v7;
      if ( !*v7 )
        break;
      *v7 = (_QWORD *)*v12;
      if ( v4 == 3 )
      {
        result = MiReleaseFreshPage(v12);
      }
      else
      {
        MiUpdateLargePageBitMap(a1, (__int64)(v12 + 0xB000000000LL) / 48, *(_QWORD **)((char *)v7 + (_QWORD)v6), 0, 1);
        v11 = MiLockPageInline(v12, v9, v10);
        *(_QWORD *)&v13 = (__int64)(v12 + 0xB000000000LL) / 48;
        *((_QWORD *)&v13 + 1) = a3;
        v14 = v11;
        result = MiInsertLargePageInNodeList(&v13);
      }
    }
    ++v4;
    ++v7;
  }
  while ( v4 < 4 );
  return result;
}
