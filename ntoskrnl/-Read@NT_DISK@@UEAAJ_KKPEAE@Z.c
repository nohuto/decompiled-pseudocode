/*
 * XREFs of ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14093D500
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     IoSynchronousCallDriver @ 0x1402E9470 (IoSynchronousCallDriver.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     IoBuildAsynchronousFsdRequest @ 0x14036D3B0 (IoBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall NT_DISK::Read(PDEVICE_OBJECT *this, LARGE_INTEGER a2, ULONG a3, unsigned __int8 *a4)
{
  PIRP v5; // rax
  IRP *v6; // rbx
  unsigned int v7; // edi
  LARGE_INTEGER v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v5 = IoBuildAsynchronousFsdRequest(3u, this[49], a4, a3, &v9, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v5->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    v7 = IoSynchronousCallDriver(this[49], v5);
    MmUnlockPages(v6->MdlAddress);
    IoFreeMdl(v6->MdlAddress);
    IoFreeIrp(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
