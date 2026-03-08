/*
 * XREFs of GreValidateVisrgn @ 0x1C004145C
 * Callers:
 *     ReleaseCacheDC @ 0x1C003F210 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0041EF8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00432EC (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0046798 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00DDFD0 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00DE014 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     Feature_3160330556__private_IsEnabledDeviceUsage @ 0x1C00DE090 (Feature_3160330556__private_IsEnabledDeviceUsage.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DE7E0 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DE9A0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 */

void __fastcall GreValidateVisrgn(HDC a1, int a2)
{
  struct REGION **v3; // rbx
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  bool v7; // di
  struct REGION **v8; // rcx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  struct DC *v12[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h]
  char v14; // [rsp+38h] [rbp-18h]
  struct _RECTL v15; // [rsp+40h] [rbp-10h] BYREF
  struct REGION *v16; // [rsp+70h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v12, a1);
  if ( (unsigned int)Feature_3160330556__private_IsEnabledDeviceUsage() )
  {
    v3 = (struct REGION **)v12[0];
    if ( v12[0] )
    {
      v4 = *((_DWORD *)v12[0] + 9);
      v5 = v4 | 0x100000;
      v6 = v4 & 0xFFEFFFFF;
      if ( !a2 )
        v5 = v6;
      *((_DWORD *)v12[0] + 9) = v5;
      DC::AcquireDcVisRgnShared((DC *)v3);
      v7 = GrepValidateVisRgn((struct DC *)v3, v3[142], (struct ERECTL *)&v15);
      if ( v14 )
        GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v13 + 1112));
      if ( !v7 )
      {
        DC::AcquireDcVisRgnExclusive((DC *)v3);
        v16 = v3[142];
        if ( v16 )
          RGNOBJ::vSet((RGNOBJ *)&v16, &v15);
        if ( v14 )
          GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v13 + 1112));
      }
    }
  }
  else
  {
    v8 = (struct REGION **)v12[0];
    if ( v12[0] )
    {
      v9 = *((_DWORD *)v12[0] + 9);
      v10 = v9 | 0x100000;
      v11 = v9 & 0xFFEFFFFF;
      if ( !a2 )
        v10 = v11;
      *((_DWORD *)v12[0] + 9) = v10;
      GrepValidateVisRgn((struct DC *)v8, v8[142]);
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v12);
}
