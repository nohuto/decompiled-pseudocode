/*
 * XREFs of PopPluginQuerySocSubsystemCount @ 0x140983554
 * Callers:
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140981C30 (PopFxInitializeSocSubsystemStaticInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginQuerySocSubsystemCount(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // r8d

  result = PopFxProcessorPlugin;
  if ( PopFxProcessorPlugin )
  {
    result = (*(__int64 (__fastcall **)(__int64))(PopFxProcessorPlugin + 96))(36LL);
    if ( (_BYTE)result )
    {
      v4 = *(_DWORD *)(a2 + 4);
      if ( v4 - 1 > 0x3E7 )
        PopFxBugCheck(0x706uLL, 0x24uLL, 0x53436F75uLL, v4);
    }
  }
  return result;
}
