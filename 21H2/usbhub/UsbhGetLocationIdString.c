/*
 * XREFs of UsbhGetLocationIdString @ 0x1C004FDBC
 * Callers:
 *     UsbhCreatePdo @ 0x1C0052C50 (UsbhCreatePdo.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     Short2Bcd @ 0x1C004E4A4 (Short2Bcd.c)
 *     UsbhMakeId @ 0x1C0050478 (UsbhMakeId.c)
 */

__int64 __fastcall UsbhGetLocationIdString(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  _DWORD *v7; // rax
  __int16 v8; // bp
  unsigned __int16 v9; // di
  __int64 Pool2; // rax
  unsigned int v11; // ebx
  _WORD *v12; // rcx
  __int64 Id; // rax
  int v14; // ecx
  int v16; // [rsp+60h] [rbp+18h] BYREF

  LOWORD(v16) = a3;
  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  v8 = Short2Bcd(*((_WORD *)v7 + 688));
  v9 = Short2Bcd(*((_WORD *)v6 + 714));
  Pool2 = ExAllocatePool2(64LL, 20LL, 1112885333LL);
  v11 = 0;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v12 = (_WORD *)Pool2;
  v16 = 20;
  *(_OWORD *)Pool2 = *(_OWORD *)L"Port_#nnnn";
  for ( *(_DWORD *)(Pool2 + 16) = *(_DWORD *)L"nn"; *v12 != 110; ++v12 )
    ;
  *v12 = (v9 >> 12) + 48;
  v12[1] = (HIBYTE(v9) & 0xF) + 48;
  v12[3] = (v9 & 0xF) + 48;
  v12[2] = ((unsigned __int8)v9 >> 4) + 48;
  Id = UsbhMakeId(1, (unsigned int)L".Hub_#nnnn", Pool2, (unsigned int)&v16, 1, 4, v8, 0LL);
  if ( Id )
  {
    v14 = v16;
    *(_QWORD *)(a4 + 8) = Id;
    *(_WORD *)a4 = 1033;
    *(_DWORD *)(a4 + 4) = v14;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v11;
}
