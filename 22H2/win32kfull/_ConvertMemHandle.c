/*
 * XREFs of _ConvertMemHandle @ 0x1C012BC90
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C002F6E8 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserConvertMemHandle @ 0x1C012BC20 (NtUserConvertMemHandle.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015C61C (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021EC24 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall ConvertMemHandle(void *Src, size_t Size, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r9d
  __int64 v6; // rax
  _DWORD *v7; // rbx

  v3 = Size;
  v5 = Size + 20;
  if ( (unsigned int)(Size + 20) < 0x18 )
    v5 = 24;
  if ( v5 < (unsigned int)Size )
    return 0LL;
  LOBYTE(a3) = 6;
  v6 = HMAllocObject(0LL, 0LL, a3);
  v7 = (_DWORD *)v6;
  if ( !v6 )
    return 0LL;
  HMLockObject(v6);
  v7[4] = v3;
  memmove(v7 + 5, Src, v3);
  return *(_QWORD *)v7;
}
