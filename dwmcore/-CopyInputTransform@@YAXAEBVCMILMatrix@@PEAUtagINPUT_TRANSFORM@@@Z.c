/*
 * XREFs of ?CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800E3E38
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180032400 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E820 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CopyInputTransform(const struct CMILMatrix *a1, struct tagINPUT_TRANSFORM *a2)
{
  *(_DWORD *)a2 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 1) = *((_DWORD *)a1 + 1);
  *((_DWORD *)a2 + 2) = *((_DWORD *)a1 + 2);
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 3);
  *((_DWORD *)a2 + 4) = *((_DWORD *)a1 + 4);
  *((_DWORD *)a2 + 5) = *((_DWORD *)a1 + 5);
  *((_DWORD *)a2 + 6) = *((_DWORD *)a1 + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)a1 + 7);
  *((_DWORD *)a2 + 8) = *((_DWORD *)a1 + 8);
  *((_DWORD *)a2 + 9) = *((_DWORD *)a1 + 9);
  *((_DWORD *)a2 + 10) = *((_DWORD *)a1 + 10);
  *((_DWORD *)a2 + 11) = *((_DWORD *)a1 + 11);
  *((_DWORD *)a2 + 12) = *((_DWORD *)a1 + 12);
  *((_DWORD *)a2 + 13) = *((_DWORD *)a1 + 13);
  *((_DWORD *)a2 + 14) = *((_DWORD *)a1 + 14);
  *((_DWORD *)a2 + 15) = *((_DWORD *)a1 + 15);
}
