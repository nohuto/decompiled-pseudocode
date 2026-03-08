/*
 * XREFs of GreSetLWContentOwner @ 0x1C02D71EC
 * Callers:
 *     ChangeWindowBitmapOwner @ 0x1C01BDDD4 (ChangeWindowBitmapOwner.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C000A650 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0018890 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0019198 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002D7C8 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     GreSetBitmapContentOwner @ 0x1C00DFBB4 (GreSetBitmapContentOwner.c)
 */

__int64 __fastcall GreSetLWContentOwner(Gre::Base *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  __int64 v7; // rcx
  HSEMAPHORE v8; // rdx
  Gre::Base *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v17 = a2;
  v5 = 0;
  v6 = Gre::Base::Globals(a1);
  UserGetHDEV(v7);
  v8 = (HSEMAPHORE)*((_QWORD *)v6 + 9);
  LODWORD(v17) = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v16, v8, 1);
  if ( IsDwmActive(v9) )
  {
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v18, (HWND)a1);
    v10 = v18;
    if ( v18 )
    {
      v11 = *(_QWORD *)(v18 + 144);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 184);
        v5 = 1;
        v13 = v12 - 24;
        v14 = -v12;
        if ( (v13 & -(__int64)(v14 != 0)) != 0 )
          v5 = GreSetBitmapContentOwner(*(_QWORD *)(v13 & -(__int64)(v14 != 0)), -1LL, a3);
      }
      if ( v10 )
        DEC_SHARE_REF_CNT(v10);
    }
  }
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v16);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v17);
  return v5;
}
