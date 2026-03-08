/*
 * XREFs of PopCompressHiberBlocks @ 0x140A9EE04
 * Callers:
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopGetNextTable @ 0x14058C744 (PopGetNextTable.c)
 *     PopAddPagesToCompressedPageSet @ 0x140A9E7C4 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x140A9EFB4 (PopCountDataAsProduced.c)
 */

__int64 __fastcall PopCompressHiberBlocks(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v7; // edi
  const void *v8; // r9
  const void *v9; // rax
  unsigned int v10[4]; // [rsp+40h] [rbp-168h] BYREF
  _QWORD v11[22]; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v12[128]; // [rsp+100h] [rbp-A8h] BYREF

  memset(v11, 0, sizeof(v11));
  v10[0] = 0;
  while ( 1 )
  {
    result = PopGetNextTable(a1, v10, (__int64)v12, (__int64)v11, a3, *(_QWORD *)(a2 + 8));
    v7 = result;
    if ( !result )
      break;
    v8 = (const void *)v11[3];
    *(_QWORD *)(a2 + 56) += result;
    v9 = PopAddPagesToCompressedPageSet(a1, a2, v10, v8, a3, result, 0LL);
    PopCountDataAsProduced(a2, v9, v10, v12, v7, 0);
  }
  return result;
}
