/*
 * XREFs of ObInitializeFastReference @ 0x14070A3AC
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140709ED0 (PspInitializeProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x14083FBD8 (SeAssignPrimaryToken.c)
 *     PspLocateSystemDll @ 0x14084AE64 (PspLocateSystemDll.c)
 *     SepInitializationPhase0 @ 0x140B48678 (SepInitializationPhase0.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140352120 (ObpIncrPointerCountEx.c)
 */

__int64 __fastcall ObInitializeFastReference(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    ObpIncrPointerCountEx((volatile signed __int64 *)(a2 - 48), 15);
  result = (a2 + 15) & -(__int64)(a2 != 0);
  *a1 = result;
  return result;
}
