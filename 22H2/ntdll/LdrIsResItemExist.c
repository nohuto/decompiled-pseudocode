/*
 * XREFs of LdrIsResItemExist @ 0x180034BD4
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180055BD4 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     LdrRscIsTypeExist @ 0x180034C60 (LdrRscIsTypeExist.c)
 */

int __fastcall LdrIsResItemExist(void *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  _DWORD *RcConfig; // rax
  _DWORD *v7; // rbx
  int result; // eax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  RcConfig = LdrpGetRcConfig(a1, (__int64)a2, 1, 1);
  v7 = RcConfig;
  if ( !RcConfig )
    return 0x80000;
  if ( (int)LdrRscIsTypeExist(RcConfig, *a2, a4, &v9) < 0 )
    return 393216;
  result = v9;
  if ( (v7[5] & 0x100) != 0 )
    result = v9 | 0x100000;
  if ( (v7[4] & 0x10) != 0 )
    return result | 0x200000;
  return result;
}
