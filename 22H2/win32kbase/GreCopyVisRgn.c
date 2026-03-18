/*
 * XREFs of GreCopyVisRgn @ 0x1C005BA60
 * Callers:
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C0044530 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C007DB80 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00D28F8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

__int64 __fastcall GreCopyVisRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // edi
  __int64 v5; // [rsp+20h] [rbp-29h]
  char v6; // [rsp+28h] [rbp-21h]
  DC *v7[6]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v8[8]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v9; // [rsp+C0h] [rbp+77h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a2, 0, 0);
  if ( v7[0] && v8[0] )
  {
    DC::AcquireDcVisRgnShared(v7[0]);
    v9 = *((_QWORD *)v7[0] + 142);
    if ( v9 && (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v8, (struct RGNOBJ *)&v9) )
    {
      v9 = (v8[0] + 24LL) & -(__int64)(v8[0] != 0LL);
      v3 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v9);
    }
    if ( v6 )
      CPushLock::ReleaseLock((CPushLock *)(v5 + 1112));
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
  DCOBJA::~DCOBJA((HDC **)v7);
  return v3;
}
