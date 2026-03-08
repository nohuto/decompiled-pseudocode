/*
 * XREFs of ??1CFrameInfo@@QEAA@XZ @ 0x1801EE660
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x18004D0C8 (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 */

void __fastcall CFrameInfo::~CFrameInfo(CFrameInfo *this)
{
  CFrameInfo::ReleaseResponses(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 176);
}
