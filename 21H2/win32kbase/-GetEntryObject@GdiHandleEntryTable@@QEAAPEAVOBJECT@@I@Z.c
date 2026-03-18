/*
 * XREFs of ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022BD0
 * Callers:
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C001EDC0 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0024DB0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgMarkLazyDelete @ 0x1C0088DC0 (HmgMarkLazyDelete.c)
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
