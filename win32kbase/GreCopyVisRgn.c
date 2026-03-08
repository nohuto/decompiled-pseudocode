/*
 * XREFs of GreCopyVisRgn @ 0x1C003CF00
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0041EF8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00434E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0046798 (--1DCOBJA@@QEAA@XZ.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C004832C (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005173C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00DE014 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DE7E0 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

__int64 __fastcall GreCopyVisRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // edi
  DC *v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-40h]
  char v7; // [rsp+28h] [rbp-38h]
  DC *v8[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v8, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, a2, 0, 0);
  v4 = v8[0];
  if ( v8[0] && v9[0] )
  {
    DC::AcquireDcVisRgnShared(v8[0]);
    v10 = *((_QWORD *)v4 + 142);
    if ( v10 && (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v9, (struct RGNOBJ *)&v10) )
    {
      v10 = (v9[0] + 24LL) & -(__int64)(v9[0] != 0LL);
      v3 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v10);
    }
    if ( v7 )
      GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v6 + 1112));
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
  DCOBJA::~DCOBJA((DCOBJA *)v8);
  return v3;
}
