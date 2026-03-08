/*
 * XREFs of ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02C95C8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

void __fastcall DxgFreeDiagnosticInfoArgs(struct _DXGKARG_COLLECTDIAGNOSTICINFO *a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = (void *)*((_QWORD *)a1 + 28);
    if ( v2 )
      operator delete(v2);
    operator delete(a1);
  }
}
