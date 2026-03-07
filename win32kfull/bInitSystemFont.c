__int64 __fastcall bInitSystemFont(unsigned __int16 *a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rdi
  unsigned int i; // r9d
  __int64 v10; // rax
  __int64 v11; // r11
  int v12; // edx
  Gre::Base *v13; // rax
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  struct PFF *v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD Src[6]; // [rsp+60h] [rbp-A0h] BYREF
  char v19; // [rsp+7Ah] [rbp-86h]

  v4 = 0;
  v15 = 0;
  memset_0(Src, 0, 0x1A4uLL);
  if ( a1 )
  {
    if ( *a1 )
    {
      if ( a2 )
      {
        v16 = 0LL;
        v6 = *(_QWORD *)(SGDGetSessionState(v5) + 32);
        v17 = *(_QWORD *)(v6 + 20272);
        if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v17, a1, &v15, 2u, &v16, 0LL, 0) )
        {
          if ( v15 && v16 )
          {
            v7 = 0x7FFFFFFF;
            v8 = 0LL;
            for ( i = 0; i < v15; ++i )
            {
              v10 = *((_QWORD *)v16 + i + 27);
              if ( v10 )
              {
                v11 = *(_QWORD *)(v10 + 32);
                if ( (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
                {
                  v8 = *((_QWORD *)v16 + i + 27);
                  goto LABEL_15;
                }
                v12 = a2 - *(__int16 *)(v11 + 62) - *(__int16 *)(v11 + 60);
                if ( v12 >= 0 && v12 < v7 )
                {
                  v7 = a2 - *(__int16 *)(v11 + 62) - *(__int16 *)(v11 + 60);
                  v8 = *((_QWORD *)v16 + i + 27);
                  if ( !v12 )
                    goto LABEL_15;
                }
              }
            }
            if ( !v8 )
              return v4;
LABEL_15:
            vIFIMetricsToEnumLogFontExDvW((__int64)Src, *(struct _IFIMETRICS **)(v8 + 32));
            if ( (*(_DWORD *)(*(_QWORD *)(v8 + 32) + 48LL) & 0x3000010) != 0 )
            {
              Src[0] = a2;
              Src[1] = 0;
            }
            *(_QWORD *)(v6 + 19504) = v8;
            v19 = 2;
            v13 = hfontCreate(Src, 1, 2, 0LL, 0x48u);
            return (unsigned int)bSetStockFont(v13, 13, 0);
          }
        }
      }
    }
  }
  return v4;
}
