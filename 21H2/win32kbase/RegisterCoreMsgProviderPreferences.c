/*
 * XREFs of RegisterCoreMsgProviderPreferences @ 0x1C00534F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C005351C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 */

__int64 __fastcall RegisterCoreMsgProviderPreferences(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  return InputExtensibilityCallout::RegisterCoreMsgProvider(a1, (unsigned int)a1, a2, a3, a4, a5);
}
