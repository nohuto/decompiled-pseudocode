/*
 * XREFs of ?ReleaseOverride@FxObject@@UEAAKGPEAXJPEBD@Z @ 0x1C001BBF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxObject::ReleaseOverride(
        FxObject *this,
        unsigned __int16 Offset,
        void *Tag,
        unsigned int Line,
        const char *File)
{
  return ((__int64 (__fastcall *)(FxObject *, void *, _QWORD, const char *))this->Release)(this, Tag, Line, File);
}
