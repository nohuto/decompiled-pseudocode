/*
 * XREFs of GreValidateVisrgn @ 0x1C0038E40
 * Callers:
 *     ReleaseCacheDC @ 0x1C0037B20 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C003CAC0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0035D50 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0038DB0 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0038DDC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005DD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00C85B8 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00CA238 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB878 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 */

void __fastcall GreValidateVisrgn(HDC a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // eax
  bool v6; // bl
  __int64 v7; // [rsp+20h] [rbp-50h]
  char v8; // [rsp+28h] [rbp-48h]
  struct _RECTL v9; // [rsp+30h] [rbp-40h] BYREF
  DC *v10[6]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL *v11; // [rsp+90h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v10, a1);
  if ( v10[0] )
  {
    v3 = *((_DWORD *)v10[0] + 9);
    v4 = v3 | 0x100000;
    v5 = v3 & 0xFFEFFFFF;
    if ( !a2 )
      v4 = v5;
    *((_DWORD *)v10[0] + 9) = v4;
    DC::AcquireDcVisRgnShared(v10[0]);
    v6 = GrepValidateVisRgn(v10[0], *((struct REGION **)v10[0] + 143), (struct ERECTL *)&v9);
    if ( v8 )
      CPushLock::ReleaseLock((CPushLock *)(v7 + 1112));
    if ( !v6 )
    {
      DC::AcquireDcVisRgnExclusive(v10[0]);
      v11 = (struct _RECTL *)*((_QWORD *)v10[0] + 143);
      if ( v11 )
        RGNOBJ::vSet(&v11, &v9);
      if ( v8 )
        CPushLock::ReleaseLock((CPushLock *)(v7 + 1112));
    }
  }
  DCOBJA::~DCOBJA((HDC **)v10);
}
