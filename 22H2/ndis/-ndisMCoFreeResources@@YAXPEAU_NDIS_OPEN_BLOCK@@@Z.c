/*
 * XREFs of ?ndisMCoFreeResources@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00B675C
 * Callers:
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01397E4 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMCoFreeResources(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_AF_LIST **p_CallMgrAfList; // rbx
  struct _NDIS_OPEN_BLOCK **v3; // rcx

  p_CallMgrAfList = &a1->MiniportHandle->CallMgrAfList;
  while ( 1 )
  {
    v3 = (struct _NDIS_OPEN_BLOCK **)*p_CallMgrAfList;
    if ( !*p_CallMgrAfList )
      break;
    if ( v3[1] == a1 )
    {
      *p_CallMgrAfList = (_NDIS_AF_LIST *)*v3;
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      p_CallMgrAfList = (_NDIS_AF_LIST **)*p_CallMgrAfList;
    }
  }
}
