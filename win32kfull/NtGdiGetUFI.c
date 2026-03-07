__int64 __fastcall NtGdiGetUFI(HDC a1, _QWORD *a2, void *a3, _DWORD *a4, _DWORD *a5, ULONG64 a6)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int UFI; // esi
  _DWORD *v13; // rcx
  _DWORD **v14; // rbx
  char v15; // al
  int v16; // r14d
  size_t v17; // r8
  ULONG64 v18; // rax
  _DWORD *v19; // rcx
  int v21; // [rsp+40h] [rbp-D8h] BYREF
  size_t Size; // [rsp+44h] [rbp-D4h] BYREF
  __int64 v23; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v24[56]; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE Src[80]; // [rsp+90h] [rbp-88h] BYREF

  v23 = 0LL;
  v21 = 0;
  memset_0(Src, 0, 0x48uLL);
  Size = 0LL;
  v11 = SGDGetSessionState(v10);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v24, *(struct Gre::Full::SESSION_GLOBALS **)(v11 + 32));
  UFI = GreGetUFI(a1, &v23, Src, &Size, (_DWORD *)&Size + 1, (Gre::Base *)&v21, 0LL, 11);
  if ( UFI )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v23;
    v13 = (_DWORD *)a6;
    v14 = (_DWORD **)MmUserProbeAddress;
    if ( a6 >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    v15 = v21;
    *v13 = v21;
    if ( (v15 & 2) != 0 && a3 )
    {
      v16 = Size;
      v17 = (unsigned int)Size;
      v18 = (ULONG64)a3 + (unsigned int)Size;
      if ( v18 > MmUserProbeAddress || v18 <= (unsigned __int64)a3 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v14 = (_DWORD **)MmUserProbeAddress;
      }
      memmove(a3, Src, v17);
      if ( a4 >= *v14 )
        a4 = *v14;
      *a4 = v16;
      v19 = a5;
      if ( a5 >= *v14 )
        v19 = *v14;
      *v19 = HIDWORD(Size);
    }
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v24);
  return UFI;
}
