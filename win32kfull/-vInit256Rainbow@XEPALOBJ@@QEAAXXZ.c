void __fastcall XEPALOBJ::vInit256Rainbow(XEPALOBJ *this)
{
  char v1; // dl
  char v2; // r8
  char v3; // r11
  __int64 v4; // r9
  __int64 v6; // r10
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int64 v11; // rsi
  Gre::Base *v12; // rax
  __int64 v13; // rcx
  Gre::Base *v14; // rdi
  int v15; // [rsp+38h] [rbp+10h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  HIBYTE(v15) = 0;
  v4 = 0LL;
  v6 = 256LL;
  do
  {
    LOBYTE(v15) = v3;
    BYTE1(v15) = v2;
    BYTE2(v15) = v1;
    *(_DWORD *)(v4 + *(_QWORD *)(*(_QWORD *)this + 112LL)) = v15;
    v3 += 32;
    if ( !v3 )
    {
      v2 += 32;
      if ( !v2 )
        v1 += 64;
    }
    v4 += 4LL;
    --v6;
  }
  while ( v6 );
  XEPALOBJ::vInit256Default(this);
  v8 = Gre::Base::Globals(v7);
  v11 = *((_QWORD *)v8 + 492);
  if ( v11 )
    goto LABEL_10;
  v12 = (Gre::Base *)Win32AllocPool(0x8000LL, 1650946631LL, v9, v10);
  v13 = *(_QWORD *)this;
  v14 = v12;
  if ( v12 )
  {
    MakeITable(v12, *(struct RGBX **)(v13 + 112), 256);
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 492, (signed __int64)v14, 0LL);
    if ( v11 )
      Win32FreePool(v14);
    else
      v11 = (signed __int64)v14;
LABEL_10:
    *(_DWORD *)(*(_QWORD *)this + 36LL) = XEPALOBJ::ulTime(this);
    *(_QWORD *)(*(_QWORD *)this + 104LL) = v11;
    return;
  }
  *(_QWORD *)(v13 + 104) = 0LL;
}
