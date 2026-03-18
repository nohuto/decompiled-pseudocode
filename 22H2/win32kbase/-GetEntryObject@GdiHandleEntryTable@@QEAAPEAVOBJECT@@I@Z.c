/*
 * XREFs of ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0044280
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C003FBE0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0045AA0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 * Callees:
 *     <none>
 */

struct OBJECT *__fastcall GdiHandleEntryTable::GetEntryObject(GdiHandleEntryTable *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 5) )
    return 0LL;
  else
    return *(struct OBJECT **)(*(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)a2 >> 8))
                             + 16LL * (unsigned __int8)a2
                             + 8);
}
