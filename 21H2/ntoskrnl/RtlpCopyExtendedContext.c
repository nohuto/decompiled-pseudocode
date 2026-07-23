/*
 * XREFs of RtlpCopyExtendedContext @ 0x140264850
 * Callers:
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 *     RtlpWriteExtendedContext @ 0x1405F58E8 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x14063CFF0 (RtlpReadExtendedContext.c)
 * Callees:
 *     RtlpCopyLegacyContextX86 @ 0x14023C138 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyXStateChunk @ 0x14023F1A4 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContextAmd64 @ 0x140264D50 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextArm @ 0x14058F774 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x14058F8D4 (RtlpCopyLegacyContextArm64.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  char v9; // bl
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 result; // rax

  if ( (a4 & 0x27FFFF80) != 0x10000
    && (a4 & 0x27FFFFA0) != 0x100000
    && (a4 & 0x7FFFFF0) != 0x200000
    && (a4 & 0x7FFFFE0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v9 = 1;
  if ( (a4 & 0x100040) == 1048640 || (a4 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v9 = 3;
  }
  v10 = a5;
  v11 = a2;
  if ( a3 )
    v11 = a3;
  if ( a6 )
    v10 = a6;
  v12 = *(int *)(v11 + 8);
  v13 = *(int *)(v10 + 8);
  if ( (_DWORD)v12 != (_DWORD)v13 || *(_DWORD *)(v11 + 12) < *(_DWORD *)(v10 + 12) )
    return 3221225485LL;
  v14 = a2 + v12;
  v15 = v13 + a5;
  if ( (a4 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(a1, v14, a4, v15);
  }
  else if ( (a4 & 0x100000) != 0 )
  {
    RtlpCopyLegacyContextAmd64(a1, v14, a4, v15);
  }
  else if ( (a4 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm(a1, v14, a4, v15);
  }
  else if ( (a4 & 0x400000) != 0 )
  {
    RtlpCopyLegacyContextArm64(a1, v14, a4, v15);
  }
  if ( (v9 & 2) == 0 )
    return 0LL;
  result = RtlpCopyXStateChunk(a1, a2, v11, a5, v10);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
