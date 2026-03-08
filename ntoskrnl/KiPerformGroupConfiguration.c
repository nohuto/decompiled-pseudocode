/*
 * XREFs of KiPerformGroupConfiguration @ 0x140B66804
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     HvlIsSingleGroupRequired @ 0x1403A4F6C (HvlIsSingleGroupRequired.c)
 *     KiFinalizeGroupAssignment @ 0x1403A4FD0 (KiFinalizeGroupAssignment.c)
 *     strstr @ 0x1403D3650 (strstr.c)
 *     KiAssignAllSubNodesToGroup0 @ 0x140B668B4 (KiAssignAllSubNodesToGroup0.c)
 *     KiPerformExplicitGroupAssignment @ 0x140B668F8 (KiPerformExplicitGroupAssignment.c)
 *     KiPopulateSubNodes @ 0x140B66970 (KiPopulateSubNodes.c)
 *     KiPopulateNodeInformation @ 0x140B66BA0 (KiPopulateNodeInformation.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140B929BC (KiPerformAutomaticGroupConfiguration.c)
 */

__int64 __fastcall KiPerformGroupConfiguration(__int64 a1)
{
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v3 = 0;
  KiPopulateNodeInformation(&v4, &v3);
  KiPopulateSubNodes();
  if ( HvlIsSingleGroupRequired() )
  {
LABEL_7:
    KiAssignAllSubNodesToGroup0();
    return KiFinalizeGroupAssignment();
  }
  if ( !(unsigned __int8)KiPerformExplicitGroupAssignment(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 304LL), v3) )
  {
    if ( strstr(*(const char **)(a1 + 216), "MAXGROUP=OFF") )
    {
      KiMaximizeGroupsCreated = 0;
    }
    else if ( strstr(*(const char **)(a1 + 216), "MAXGROUP") )
    {
      KiMaximizeGroupsCreated = 1;
    }
    if ( KiSubNodeCount != 1 && (KiMaximizeGroupsCreated || v4 > KiMaximumGroupSize) )
    {
      KiPerformAutomaticGroupConfiguration();
      return KiFinalizeGroupAssignment();
    }
    goto LABEL_7;
  }
  return KiFinalizeGroupAssignment();
}
