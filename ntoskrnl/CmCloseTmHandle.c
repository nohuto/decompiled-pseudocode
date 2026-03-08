/*
 * XREFs of CmCloseTmHandle @ 0x14074C280
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BFA88 (CmpTryToRundownHive.c)
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmCloseTmHandle(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 && (*(_DWORD *)(a1 + 64) == 1 || a2 == 1) )
  {
    result = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}
