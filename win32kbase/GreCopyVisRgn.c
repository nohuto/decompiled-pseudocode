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
