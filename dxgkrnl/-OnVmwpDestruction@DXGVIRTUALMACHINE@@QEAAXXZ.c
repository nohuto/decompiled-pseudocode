/*
 * XREFs of ?OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C00559F8
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C033EE68 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::OnVmwpDestruction(DXGVIRTUALMACHINE *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 34);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)this + 34) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 35);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)this + 35) = 0LL;
  }
  DXGVIRTUALMACHINE::DestroyVirtualMachine(this);
}
