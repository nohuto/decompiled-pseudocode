/*
 * XREFs of _anonymous_namespace_::ResetInteractionOutput @ 0x180039D10
 * Callers:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x180039CE0 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x180280E50 (-GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::ResetInteractionOutput(__int64 a1, char a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 56) &= ~1u;
  result = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 1065353216;
  if ( !a2 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 20) = 0LL;
    *(_QWORD *)(a1 + 28) = 0LL;
    *(_QWORD *)(a1 + 36) = 0LL;
    *(_DWORD *)(a1 + 44) = 0;
  }
  return result;
}
