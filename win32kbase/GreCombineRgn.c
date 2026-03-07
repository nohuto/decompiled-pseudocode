__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  bool v10; // zf
  RGNOBJAPI *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-20h] BYREF

  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 == 5 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a1, 0, 1);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a2, a4 - 4, 0);
      v8 = v20[0];
      v9 = 0;
      if ( v20[0] )
      {
        if ( !v19[0] )
        {
LABEL_9:
          EngSetLastError(6u);
          goto LABEL_10;
        }
        v10 = (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v20, (struct RGNOBJ *)v19) == 0;
        v8 = v20[0];
        if ( !v10 )
        {
          v17 = (v20[0] + 24LL) & -(__int64)(v20[0] != 0LL);
          v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v17);
LABEL_10:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
          v11 = (RGNOBJAPI *)v20;
LABEL_31:
          RGNOBJAPI::~RGNOBJAPI(v11);
          return v9;
        }
      }
      if ( v19[0] && v8 )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( a1 != a2 && a1 != a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a2, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a3, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a1, 0, 1);
      v12 = v21[0];
      v9 = 0;
      if ( v21[0] )
      {
        if ( v19[0] && v20[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v20, (struct RGNOBJ *)v21, (struct RGNOBJ *)v19, a4) )
          {
            v17 = (v20[0] + 24LL) & -(__int64)(v20[0] != 0LL);
            v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v17);
LABEL_23:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
LABEL_30:
            v11 = (RGNOBJAPI *)v21;
            goto LABEL_31;
          }
          v12 = v21[0];
        }
        if ( v12 && v19[0] && v20[0] )
          goto LABEL_23;
      }
      EngSetLastError(6u);
      goto LABEL_23;
    }
    if ( a2 == a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a1, 0, 1);
      v13 = v21[0];
      v9 = 0;
      if ( v21[0] )
      {
        if ( (unsigned int)(a4 - 3) <= 1 )
          RGNOBJ::vSet((RGNOBJ *)v21);
        v17 = (v13 + 24) & -(__int64)(v13 != 0);
        v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v17);
      }
      else
      {
        EngSetLastError(6u);
      }
      goto LABEL_30;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
    v9 = 0;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a2, 0, a1 == a2);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a3, 0, a1 == a3);
    if ( v17 )
    {
      v14 = v20[0];
      if ( !v20[0] )
      {
LABEL_45:
        EngSetLastError(6u);
        goto LABEL_46;
      }
      if ( !v19[0] )
      {
LABEL_43:
        if ( v14 && v19[0] )
          goto LABEL_46;
        goto LABEL_45;
      }
      if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)v20, (struct RGNOBJ *)v19, a4) )
      {
        if ( a1 == a2 )
        {
          if ( !(unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v20, (struct RGNOBJ *)&v17) )
          {
LABEL_46:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
            return v9;
          }
          v15 = v20[0];
        }
        else
        {
          if ( !(unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v19, (struct RGNOBJ *)&v17) )
            goto LABEL_46;
          v15 = v19[0];
        }
        v18 = (v15 + 24) & -(__int64)(v15 != 0);
        v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v18);
        goto LABEL_46;
      }
    }
    v14 = v20[0];
    goto LABEL_43;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
