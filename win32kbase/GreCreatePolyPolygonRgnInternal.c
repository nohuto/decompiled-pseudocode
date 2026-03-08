/*
 * XREFs of GreCreatePolyPolygonRgnInternal @ 0x1C0197C30
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x1C000C360 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C001C658 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     PopThreadGuardedObject @ 0x1C00453C0 (PopThreadGuardedObject.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0EXFORMOBJ@@QEAA@KK@Z @ 0x1C017FB10 (--0EXFORMOBJ@@QEAA@KK@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0180450 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0181920 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0184190 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     bPolyPolygon @ 0x1C019A250 (bPolyPolygon.c)
 */

struct HOBJ__ *__fastcall GreCreatePolyPolygonRgnInternal(struct _POINTL *a1, __int64 a2, int a3, int a4, int a5)
{
  struct HOBJ__ *v5; // rbx
  char v6; // di
  PVOID Entry[2]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v12; // [rsp+50h] [rbp-39h]
  _QWORD v13[4]; // [rsp+98h] [rbp+Fh] BYREF
  int v14; // [rsp+B8h] [rbp+2Fh]

  v5 = 0LL;
  v6 = a4;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v11);
    if ( v12 )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)Entry, 1LL, 8);
      if ( (unsigned int)bPolyPolygon((EPATHOBJ *)v11, (struct EXFORMOBJ *)Entry, a1, a3, a5) )
      {
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)Entry, (struct EPATHOBJ *)v11, v6, 0LL);
        if ( Entry[0] )
        {
          v5 = RGNOBJ::hrgnAssociate((struct OBJECT **)Entry);
          if ( !v5 )
            REGION::vDeleteREGION((unsigned __int64)Entry[0]);
        }
      }
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)v11);
    if ( v14 )
      PopThreadGuardedObject(v13);
  }
  return v5;
}
