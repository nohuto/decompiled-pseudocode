/*
 * XREFs of GreWatchVisRgnChange @ 0x1C02A8B7C
 * Callers:
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156B26 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00A6820 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreWatchVisRgnChange(HDC a1, int a2)
{
  __int64 v3; // rbx
  __int64 *v5; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)&v5, a1);
  if ( v5 )
  {
    if ( a2 )
      *((_DWORD *)v5 + 9) |= 0x20000u;
    else
      *((_DWORD *)v5 + 9) &= ~0x20000u;
    if ( v5 )
    {
      v7 = 0;
      v3 = *v5;
      HmgDecrementShareReferenceCountEx(v5, &v7);
      if ( v7 )
        GrepDeleteDC(v3, 0x2000000LL);
    }
  }
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v6);
}
