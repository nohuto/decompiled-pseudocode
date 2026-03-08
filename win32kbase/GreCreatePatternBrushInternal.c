/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1C001A060
 * Callers:
 *     GreCreatePatternBrush @ 0x1C0016D80 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1C031D4F4 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C001A160 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001CC00 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001CE8C (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C001D030 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, int a2, int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  struct SURFACE *v8; // rax
  struct SURFACE *v9; // rbx
  int IsMonochrome; // eax
  HBITMAP v11; // rdx
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  LOBYTE(v7) = 5;
  v8 = (struct SURFACE *)HmgShareLockCheck(a1, v7);
  v9 = v8;
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 28) & 0x4000000) != 0 )
    {
      if ( hbmCreateClone(v8, a3 != 0 ? 8 : 0, a3 != 0 ? 8 : 0) )
      {
        v15 = *((_QWORD *)v9 + 16);
        IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v15);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v13, v11, a1, IsMonochrome, 0, 0x40u, a2);
        if ( v13[0] )
        {
          v6 = *(_QWORD *)v13[0];
          v14 = 1;
        }
        BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v13);
      }
    }
    else
    {
      EngSetLastError(0x57u);
    }
    HmgDecrementShareReferenceCountEx(v9, 0LL);
  }
  else
  {
    EngSetLastError(6u);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  return v6;
}
