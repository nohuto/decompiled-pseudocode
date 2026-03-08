/*
 * XREFs of ?AddRef@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C00072E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

__int64 __fastcall FxMemoryObject::AddRef(FxMemoryObject *this, void *Tag, int Line, const char *File)
{
  return FxObject::AddRef((FxMemoryObject *)((char *)this - 104), Tag, Line, File);
}
