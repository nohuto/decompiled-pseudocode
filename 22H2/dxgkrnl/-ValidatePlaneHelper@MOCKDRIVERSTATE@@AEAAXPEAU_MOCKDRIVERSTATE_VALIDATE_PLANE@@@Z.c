/*
 * XREFs of ?ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z @ 0x1C0053DA8
 * Callers:
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C0053D74 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00052BC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?QueuePlaneViolationWorkItem@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C0053940 (-QueuePlaneViolationWorkItem@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOC.c)
 *     ?CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C0322C60 (-CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MO.c)
 */

void __fastcall MOCKDRIVERSTATE::ValidatePlaneHelper(DXGADAPTER **this, struct _MOCKDRIVERSTATE_VALIDATE_PLANE *a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  struct _MOCKDRIVERSTATE_PLANE **v4; // r11
  struct _MOCKDRIVERSTATE_PLANE *v5; // r9
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // r9
  __int64 v13; // rdi
  struct _MOCKDRIVERSTATE_PLANE *v14; // [rsp+20h] [rbp-28h]

  if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(this[3]) )
    return;
  v5 = *v4;
  if ( *((_BYTE *)*v4 + 8) )
    return;
  v6 = *(_DWORD *)(v3 + 1672);
  v7 = *(_DWORD *)(v3 + 2760);
  v8 = 0LL;
  if ( !*(_DWORD *)v2 )
    return;
  while ( *(_BYTE *)(v2 + 16) )
  {
    v9 = *((_QWORD *)v5
         + 20 * *(unsigned int *)(*(_QWORD *)(v2 + 24) + 4 * v8)
         + 2 * *(unsigned int *)(*(_QWORD *)(v2 + 32) + 4 * v8)
         + 7);
    if ( v9 && *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * v8) == v9 )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(v2 + 32) + 4 * v8);
      LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4 * v8);
      goto LABEL_8;
    }
LABEL_16:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *(_DWORD *)v2 )
      return;
  }
  v11 = 0LL;
  if ( !v6 )
    goto LABEL_16;
  while ( 1 )
  {
    v10 = 0;
    if ( v7 )
      break;
LABEL_15:
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v6 )
      goto LABEL_16;
  }
  while ( 1 )
  {
    v13 = *((_QWORD *)v5 + 20 * v11 + 2 * v10 + 7);
    if ( v13 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * v8) == v13 )
        break;
    }
    if ( ++v10 >= v7 )
      goto LABEL_15;
  }
LABEL_8:
  v14 = *v4;
  v12 = v4[3];
  if ( *(_BYTE *)(v2 + 56) )
    CreatePlaneLiveDumpAtPassive(v11, v10, (struct _MOCKDRIVERSTATE_VALIDATE_PLANE *)v2, v12, v14);
  else
    QueuePlaneViolationWorkItem(v11, v10, (struct _MOCKDRIVERSTATE_VALIDATE_PLANE *)v2, v12, v14);
}
