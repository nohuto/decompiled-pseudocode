/*
 * XREFs of ?OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0048B74
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0123260 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0284C68 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::OnVmwpDestruction(DXGVIRTUALMACHINE *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 29);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)this + 29) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 30);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)this + 30) = 0LL;
  }
  DXGVIRTUALMACHINE::DestroyVirtualMachine(this);
}
