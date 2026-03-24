/*
 * XREFs of MiInitializeVadSecuring @ 0x140A92310
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiGenerateSecureCookie @ 0x1407D3188 (MiGenerateSecureCookie.c)
 */

__int64 MiInitializeVadSecuring()
{
  __int64 result; // rax

  result = MiGenerateSecureCookie();
  qword_140C4DE50 = result;
  return result;
}
