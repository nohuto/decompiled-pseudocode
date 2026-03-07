__int64 __fastcall CBrush::Draw(
        CBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  float width; // xmm0_4
  char *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  char v16; // [rsp+60h] [rbp+18h] BYREF

  width = a3->width;
  v16 = 0;
  if ( width > 0.0 && a3->height > 0.0 )
  {
    v9 = (char *)this - 112;
    if ( (*(unsigned __int8 (__fastcall **)(char *, struct CDrawingContext *, char *))(*((_QWORD *)this - 14) + 288LL))(
           (char *)this - 112,
           a2,
           &v16) )
    {
      if ( !v16 )
      {
        if ( *((_BYTE *)this - 32) )
        {
          if ( !*((_QWORD *)this - 5) )
          {
            v14 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v9 + 320LL))(v9, 0LL);
            v12 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180338CB8, 3u, v14, 0x6Bu, 0LL);
              return v12;
            }
          }
        }
        v10 = CContent::Draw((CBrush *)((char *)this - 16), a2, a3, a4);
        v12 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180338CB8, 3u, v10, 0x6Eu, 0LL);
          return v12;
        }
      }
    }
  }
  return 0;
}
