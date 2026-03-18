/*
 * XREFs of ?AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C0055950
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C004ECBC (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestOutputBuffer::AddRef(
        FxRequestOutputBuffer *this,
        __int64 Tag,
        unsigned __int8 Line,
        const char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-17], Tag, Line);
  return 2LL;
}
