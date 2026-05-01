/*
 * XREFs of ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z @ 0x1800ABBA8
 * Callers:
 *     ?complete@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAXXZ @ 0x1800ABB44 (-complete@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAX.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestCompletionKind@@GPEBD@Z @ 0x1800C0DBC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestCompletionKind@@GPEBD@Z.c)
 * Callees:
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABBD4 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z.c)
 */

__int64 __fastcall tip::details::shared_data<1,0,0>::complete_helper(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 64) |= 0x300u;
  if ( *(_QWORD *)(a1 + 232) )
    return tip::details::shared_data<1,0,0>::complete_helper(a1, 2LL);
  return result;
}
