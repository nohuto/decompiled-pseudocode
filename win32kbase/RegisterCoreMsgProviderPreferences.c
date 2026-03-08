/*
 * XREFs of RegisterCoreMsgProviderPreferences @ 0x1C0098030
 * Callers:
 *     ?Initialize@CActivationObjectManager@@SAJXZ @ 0x1C0096B28 (-Initialize@CActivationObjectManager@@SAJXZ.c)
 *     InitializeInputComponents @ 0x1C009770C (InitializeInputComponents.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C0097A98 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0097C58 (-Initialize@CInputConfig@@SAJXZ.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C009809C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 */

__int64 __fastcall RegisterCoreMsgProviderPreferences(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned int v8; // ebp
  __int64 v9; // rax

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = SGDGetUserSessionState(a1, a2, a3, a4);
  return InputExtensibilityCallout::RegisterCoreMsgProvider(*(_QWORD *)(v9 + 16048), v8, v7, v6, a4, a5);
}
