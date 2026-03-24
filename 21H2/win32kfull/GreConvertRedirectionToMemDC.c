/*
 * XREFs of GreConvertRedirectionToMemDC @ 0x1C02A0C9C
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00F2570 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x1C015B5D4 (UpdateSpriteArea.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00F2958 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreConvertRedirectionToMemDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 *v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)&v8, a1);
  v4 = (__int64 *)v8;
  if ( v8 )
  {
    if ( !*(_DWORD *)(v8 + 32) )
    {
      v5 = *(_QWORD *)(v8 + 48);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 2128) & 0x400) != 0 )
        {
          *(_DWORD *)(v8 + 36) &= ~0x4000u;
          v3 = 1;
          *(_DWORD *)(v8 + 36) &= ~1u;
          *(_DWORD *)(v8 + 32) = 1;
          if ( a2 )
            *(_DWORD *)(*(_QWORD *)(v8 + 496) + 112LL) &= ~0x800u;
          v4 = (__int64 *)v8;
        }
      }
    }
    if ( v4 )
    {
      v10 = 0;
      v6 = *v4;
      HmgDecrementShareReferenceCountEx(v4, &v10);
      if ( v10 )
        bDeleteDCInternalEx(v6, 0LL);
    }
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v9);
  return v3;
}
