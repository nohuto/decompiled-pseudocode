/*
 * XREFs of ??0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z @ 0x1C000E4DC
 * Callers:
 *     ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C000E060 (-Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0001CF4 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

void __fastcall FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(
        FxMemoryBufferFromLookaside *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxLookasideList *Lookaside,
        unsigned __int64 BufferSize)
{
  FxMemoryObject::FxMemoryObject(this, FxDriverGlobals, ((BufferSize + 15) & 0xFFF0) + 128, BufferSize);
  this->m_pLookaside = Lookaside;
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::AddRef(Lookaside, this, 104, "minkernel\\wdf\\framework\\shared\\core\\fxmemorybufferfromlookaside.cpp");
}
