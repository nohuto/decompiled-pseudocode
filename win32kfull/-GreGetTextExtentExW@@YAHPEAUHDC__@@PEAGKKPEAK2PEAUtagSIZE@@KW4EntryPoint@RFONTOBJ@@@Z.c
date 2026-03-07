__int64 __fastcall GreGetTextExtentExW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        struct tagSIZE *a7,
        char a8,
        int a9)
{
  unsigned int v9; // r15d
  int *v10; // rbx
  int *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // eax
  Gre::Base *v18; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v19; // [rsp+98h] [rbp-78h]
  _DWORD v20[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v21[2]; // [rsp+A8h] [rbp-68h] BYREF
  _BYTE v22[24]; // [rsp+B8h] [rbp-58h] BYREF
  _BYTE v23[320]; // [rsp+D0h] [rbp-40h] BYREF
  char v24; // [rsp+210h] [rbp+100h] BYREF

  v9 = 0;
  v10 = a6;
  v19 = a4;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v21, a1);
      if ( v21[0] )
      {
        v20[0] = a9;
        v20[1] = *(unsigned __int16 *)(v21[0] + 12LL);
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v22, (struct XDCOBJ *)v21, 516);
        v18 = 0LL;
        if ( (unsigned int)RFONTOBJ::bInit(
                             &v18,
                             (struct XDCOBJ *)v21,
                             0,
                             2 * (a8 & 1u) + 2,
                             (const struct RFONTOBJ::Tag *)v20) )
          GreAcquireSemaphore(*((_QWORD *)v18 + 63));
        if ( v18 )
        {
          if ( (*((_DWORD *)v18 + 21) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v18, a2, a3);
          v13 = 0LL;
          if ( !a6 && a5 )
          {
            if ( a3 <= 0x28 )
            {
              v10 = (int *)&v24;
            }
            else
            {
              if ( !(4 * a3) || (v13 = (int *)Win32AllocPoolZInit(4 * a3, 1954051143LL)) == 0LL )
                EngSetLastError(8u);
              v10 = v13;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v23,
            a2,
            a3,
            (struct XDCOBJ *)v21,
            (struct RFONTOBJ *)&v18,
            (struct EXFORMOBJ *)v22,
            0LL,
            0,
            *(_DWORD *)(v21[0] + 1756LL),
            *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 280LL),
            *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 284LL),
            *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 288LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v23[232] & 4) != 0 && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v23, (struct RFONTOBJ *)&v18, 0, a7) )
          {
            if ( a5 && v10 )
            {
              v16 = 0;
              do
              {
                if ( *v10 > v19 )
                  break;
                ++v16;
                ++v10;
              }
              while ( v16 < a3 );
              *a5 = v16;
            }
            v9 = 1;
          }
          if ( v13 )
            Win32FreePool(v13);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v23, v14, v15);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
      }
      else
      {
        EngSetLastError(6u);
      }
      if ( v21[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v21);
      return v9;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return 1LL;
    }
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
