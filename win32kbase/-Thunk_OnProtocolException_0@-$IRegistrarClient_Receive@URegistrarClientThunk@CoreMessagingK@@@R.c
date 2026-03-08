/*
 * XREFs of ?Thunk_OnProtocolException_0@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@Registrar@CoreUI@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x1C0273F90
 * Callers:
 *     <none>
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0273D34 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall __noreturn Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Thunk_OnProtocolException_0(
        __int64 a1,
        int **a2)
{
  CoreMessagingK::Runtime::BugCheck(1028, **a2, 0LL);
}
