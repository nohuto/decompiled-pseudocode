/*
 * XREFs of NVMeFreeNamespaceEnumerationContext @ 0x1C001D2A4
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021CA0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreeNamespaceEnumerationContext(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 result; // rax

  if ( a2 )
  {
    if ( a3 )
    {
      v6 = (_QWORD *)(a2 + 8);
      v7 = 255LL;
      do
      {
        if ( *v6 )
          StorPortExtendedFunction(1LL, a1, *v6, a4);
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    return StorPortExtendedFunction(1LL, a1, a2, a4);
  }
  return result;
}
