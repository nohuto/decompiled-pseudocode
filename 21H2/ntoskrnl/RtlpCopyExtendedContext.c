/*
 * XREFs of RtlpCopyExtendedContext @ 0x140294DD8
 * Callers:
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 *     RtlCopyExtendedContext @ 0x1405E7C00 (RtlCopyExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x140703290 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x140704E2C (RtlpWriteExtendedContext.c)
 * Callees:
 *     RtlpCopyXStateChunk @ 0x140246EB8 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x140294EBC (RtlpCopyLegacyContext.c)
 *     RtlpValidateContextFlags @ 0x140297F80 (RtlpValidateContextFlags.c)
 *     RtlpCopyKernelCetChunk @ 0x1405E7C54 (RtlpCopyKernelCetChunk.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(char a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rdx
  _DWORD v18[6]; // [rsp+30h] [rbp-18h] BYREF

  v18[0] = 0;
  result = RtlpValidateContextFlags(a4, v18);
  if ( (int)result >= 0 )
  {
    v12 = a2;
    if ( a3 )
      v12 = a3;
    v13 = a5;
    if ( a6 )
      v13 = a6;
    if ( (v18[0] & 1) != 0 )
    {
      v14 = *(int *)(v12 + 8);
      v15 = *(int *)(v13 + 8);
      if ( (_DWORD)v14 != (_DWORD)v15 || *(_DWORD *)(v12 + 12) < *(_DWORD *)(v13 + 12) )
        return 3221225485LL;
      v16 = a5 + v15;
      v17 = v14 + a2;
      LOBYTE(v14) = a1;
      RtlpCopyLegacyContext(v14, v17, a4, v16);
    }
    if ( (v18[0] & 2) == 0 || (result = RtlpCopyXStateChunk(a1, a2, v12, a5, v13), (int)result >= 0) )
    {
      if ( (v18[0] & 4) == 0 )
        return 0LL;
      LOBYTE(v11) = a1;
      result = RtlpCopyKernelCetChunk(v11, a2, v12, a5, v13);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
