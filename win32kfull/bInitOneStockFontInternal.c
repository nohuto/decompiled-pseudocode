__int64 __fastcall bInitOneStockFontInternal(unsigned __int16 *a1, int a2, int a3, int a4)
{
  unsigned int v4; // edi
  __int64 v9; // r14
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // r15
  __int64 v12; // rbx
  Gre::Base *v13; // rax
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  struct PFF *v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD Src[5]; // [rsp+60h] [rbp-A0h] BYREF
  char v19; // [rsp+77h] [rbp-89h]
  char v20; // [rsp+7Ah] [rbp-86h]

  v4 = 0;
  v15 = 0;
  v16 = 0LL;
  v9 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v17 = *(_QWORD *)(v9 + 20272);
  v11 = Gre::Base::Globals(v10);
  memset_0(Src, 0, 0x1A4uLL);
  if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v17, a1, &v15, 2u, &v16, 0LL, 0) )
  {
    if ( v15 )
    {
      if ( v16 )
      {
        v12 = *((_QWORD *)v16 + 27);
        if ( v12 )
        {
          vIFIMetricsToEnumLogFontExDvW((__int64)Src, *(struct _IFIMETRICS **)(v12 + 32));
          if ( a3 == 13 )
          {
            *(_QWORD *)(v9 + 19504) = v12;
            v19 = *((_BYTE *)v11 + 168);
          }
          v20 = 2;
          v13 = hfontCreate(Src, a2, 2, 0LL, 0x48u);
          return (unsigned int)bSetStockFont(v13, a3, a4);
        }
      }
    }
  }
  return v4;
}
