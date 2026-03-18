/*
 * XREFs of GreValidateVisrgn @ 0x1C002BFA8
 * Callers:
 *     ReleaseCacheDC @ 0x1C002A470 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001EEA0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C002BEFC (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002BF28 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D9320 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C00D9428 (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DA978 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DB63C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 */

void __fastcall GreValidateVisrgn(HDC a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // eax
  bool v6; // bl
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-50h]
  char v11; // [rsp+28h] [rbp-48h]
  struct _RECTL v12; // [rsp+30h] [rbp-40h] BYREF
  struct DC *v13[6]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL *v14; // [rsp+90h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v13, a1);
  if ( (unsigned int)Feature_3093221692__private_IsEnabled() )
  {
    if ( v13[0] )
    {
      v3 = *((_DWORD *)v13[0] + 9);
      v4 = v3 | 0x100000;
      v5 = v3 & 0xFFEFFFFF;
      if ( !a2 )
        v4 = v5;
      *((_DWORD *)v13[0] + 9) = v4;
      DC::AcquireDcVisRgnShared(v13[0]);
      v6 = GrepValidateVisRgn(v13[0], *((struct REGION **)v13[0] + 142), (struct ERECTL *)&v12);
      if ( v11 )
        GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v10 + 1112));
      if ( !v6 )
      {
        DC::AcquireDcVisRgnExclusive(v13[0]);
        v14 = (struct _RECTL *)*((_QWORD *)v13[0] + 142);
        if ( v14 )
          RGNOBJ::vSet(&v14, &v12);
        if ( v11 )
          GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v10 + 1112));
      }
    }
  }
  else if ( v13[0] )
  {
    v7 = *((_DWORD *)v13[0] + 9);
    v8 = v7 | 0x100000;
    v9 = v7 & 0xFFEFFFFF;
    if ( !a2 )
      v8 = v9;
    *((_DWORD *)v13[0] + 9) = v8;
    GrepValidateVisRgn(v13[0], *((struct REGION **)v13[0] + 142));
  }
  DCOBJA::~DCOBJA((HDC **)v13);
}
