/*
 * XREFs of ??0AutoProviderRegistrar@@QEAA@P6AXXZ0@Z @ 0x18008F2C0
 * Callers:
 *     _dynamic_initializer_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__ @ 0x18000C1B0 (_dynamic_initializer_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__.c)
 * Callees:
 *     AutoRegisterMicrosoft_Windows_Deplorch @ 0x18014DF8C (AutoRegisterMicrosoft_Windows_Deplorch.c)
 */

AutoProviderRegistrar *__fastcall AutoProviderRegistrar::AutoProviderRegistrar(
        AutoProviderRegistrar *this,
        void (*a2)(void),
        void (*a3)(void))
{
  g_ProviderRegistrationMicrosoft_Windows_Deplorch = (__int64)AutoUnregisterMicrosoft_Windows_Deplorch;
  AutoRegisterMicrosoft_Windows_Deplorch(this, a2, a3);
  return (AutoProviderRegistrar *)&g_ProviderRegistrationMicrosoft_Windows_Deplorch;
}
