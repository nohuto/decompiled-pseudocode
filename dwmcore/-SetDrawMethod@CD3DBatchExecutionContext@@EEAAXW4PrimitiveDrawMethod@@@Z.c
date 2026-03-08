/*
 * XREFs of ?SetDrawMethod@CD3DBatchExecutionContext@@EEAAXW4PrimitiveDrawMethod@@@Z @ 0x1800DAB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x1800DABCC (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::SetDrawMethod(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = 0LL;
  result = 4096LL;
  if ( a2 == 2 )
    v4 = 4096LL;
  if ( a2 != *(_BYTE *)(a1 + 82) )
  {
    LODWORD(v4) = v4 | 0x200;
    if ( a2 == 2 || *(_BYTE *)(a1 + 82) == 2 )
      v4 = (unsigned int)v4 | 0x80000000;
  }
  if ( (_DWORD)v4 )
    result = CD3DBatchExecutionContext::Flush(a1, v4);
  *(_BYTE *)(a1 + 82) = a2;
  return result;
}
