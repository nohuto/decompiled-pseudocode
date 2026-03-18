/*
 * XREFs of ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0024F28
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0172AF0 (DxgkSetDisplayMode.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019E2B8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01A4774 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     DxgkEscape @ 0x1C01B43F0 (DxgkEscape.c)
 *     DxgkCheckOcclusion @ 0x1C01E1460 (DxgkCheckOcclusion.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C02D52A0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0307E5C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGUSERCRIT::~DXGUSERCRIT(DXGUSERCRIT *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 16) = 0;
    (*(void (**)(void))(*(_QWORD *)(v1 + 88) + 40LL))();
  }
}
