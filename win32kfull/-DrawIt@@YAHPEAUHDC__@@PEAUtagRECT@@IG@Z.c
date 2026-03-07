__int64 __fastcall DrawIt(HDC a1, struct tagRECT *a2, __int16 a3, unsigned __int16 a4)
{
  LONG top; // r11d
  int v6; // eax
  int v7; // ecx
  int v8; // r9d
  int v10; // r13d
  int v11; // ebp
  int v12; // r15d
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rcx
  unsigned int v16; // r14d
  int v17; // ebp
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _BYTE v22[48]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v23[48]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int16 v24; // [rsp+108h] [rbp+20h] BYREF

  v24 = a4;
  top = a2->top;
  v6 = a2->right - a2->left;
  v7 = v6;
  v8 = a2->bottom - top;
  if ( v6 >= v8 )
    v7 = a2->bottom - top;
  v10 = (v6 - v7) / 2 + a2->left;
  v11 = (v8 - v7) / 2 + top;
  v12 = a3 & 0x100;
  if ( (a3 & 0x100) != 0 )
  {
    v13 = *(unsigned int *)(gpsi + 4648LL);
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v13 = *(unsigned int *)(gpsi + 4672LL);
  }
  else
  {
    v13 = *(unsigned int *)(gpsi + 4640LL);
  }
  v14 = v11 + 1;
  v16 = GreSetTextColor(a1, v13);
  if ( (a3 & 0x300) == 0 )
    v14 = v11;
  v17 = v10 + 1;
  if ( (a3 & 0x300) == 0 )
    v17 = v10;
  v18 = SGDGetSessionState(v15);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v23, *(struct Gre::Full::SESSION_GLOBALS **)(v18 + 32));
  v20 = SGDGetSessionState(v19);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v22, *(struct Gre::Full::SESSION_GLOBALS **)(v20 + 32));
  GreExtTextOutWInternal(a1, v17, v14, 0, 0LL, &v24, 1, 0LL, 0LL, 0, 1025);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v22);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v23);
  if ( v12 )
  {
    GreSetTextColor(a1, *(unsigned int *)(gpsi + 4632LL));
    GreExtTextOutW((__int64)a1, v17 - 1, v14 - 1, 0, 0LL, (__int64)&v24, 1);
  }
  GreSetTextColor(a1, v16);
  return 1LL;
}
