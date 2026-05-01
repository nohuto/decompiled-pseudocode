/*
 * XREFs of ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180071EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012C50 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002228C (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003BFEC (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180071C40 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

bool __fastcall RmpPolicyFilterActivityHostWithFlags(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // di

  v2 = (char)a2;
  return (((unsigned __int8)a2 & 1) == 0 || (unsigned int)RmpActivityHostIsRevocable(a1))
      && ((v2 & 2) == 0 || (unsigned int)RmpActivityHostGetResourceSetCount(a1, 2) || (*((_BYTE *)a1 + 836) & 1) != 0)
      && ((v2 & 4) == 0 || !RmpActivityHostHasPpleResourceSet(a1))
      && ((v2 & 8) == 0 || RmpPolicyActivityHostIsValidEmptyTarget(a1));
}
