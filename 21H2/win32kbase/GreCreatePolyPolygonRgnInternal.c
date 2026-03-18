/*
 * XREFs of GreCreatePolyPolygonRgnInternal @ 0x1C00CDB30
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x1C00949C0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     bPolyPolygon @ 0x1C0019160 (bPolyPolygon.c)
 *     PopThreadGuardedObject @ 0x1C0023630 (PopThreadGuardedObject.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0032610 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0032680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0090DF0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0097060 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0EXFORMOBJ@@QEAA@KK@Z @ 0x1C00CDC30 (--0EXFORMOBJ@@QEAA@KK@Z.c)
 */

struct HOBJ__ *__fastcall GreCreatePolyPolygonRgnInternal(
        struct _POINTL *a1,
        int *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  struct HOBJ__ *v5; // rbx
  struct _SLIST_ENTRY *v10; // rcx
  struct HOBJ__ *v11; // rax
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-51h] BYREF
  int v14; // [rsp+40h] [rbp-49h]
  char v15[8]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v16; // [rsp+50h] [rbp-39h]
  __int64 v17[4]; // [rsp+98h] [rbp+Fh] BYREF
  int v18; // [rsp+B8h] [rbp+2Fh]

  v5 = 0LL;
  if ( a4 - 1 <= 1 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v15);
    if ( v16 )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)&ListEntry, 1u, 8u);
      if ( (unsigned int)bPolyPolygon((EPATHOBJ *)v15, (struct EXFORMOBJ *)&ListEntry, a1, a2, a3, a5) )
      {
        v14 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&ListEntry, (struct EPATHOBJ *)v15, a4, 0LL);
        v10 = ListEntry;
        if ( ListEntry )
        {
          v11 = RGNOBJ::hrgnAssociate((struct OBJECT **)&ListEntry);
          v10 = ListEntry;
          v5 = v11;
          if ( !v11 )
          {
            REGION::vDeleteREGION(ListEntry);
            v10 = 0LL;
            ListEntry = 0LL;
          }
        }
        if ( v14 == 1 )
          REGION::vDeleteREGION(v10);
      }
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)v15);
    if ( v18 )
      PopThreadGuardedObject(v17);
  }
  return v5;
}
