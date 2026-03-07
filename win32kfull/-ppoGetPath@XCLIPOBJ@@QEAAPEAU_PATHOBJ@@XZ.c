struct _PATHOBJ *__fastcall XCLIPOBJ::ppoGetPath(XCLIPOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  EPATHOBJ *v5; // rbx
  _BYTE v7[16]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v8[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v9[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v10; // [rsp+B8h] [rbp-48h]

  v5 = (EPATHOBJ *)Win32AllocPool(80LL, 1869639751LL, a3, a4);
  if ( v5 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v8);
    if ( *((_QWORD *)&v8[0] + 1) )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v7, 1u, 8u);
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v9);
      if ( v10
        && RGNOBJ::bCreate((XCLIPOBJ *)((char *)this + 56), (struct EPATHOBJ *)v9, (struct EXFORMOBJ *)v7)
        && (unsigned int)RTP_PATHMEMOBJ::bDiagonalizePath((RTP_PATHMEMOBJ *)v9, (struct EPATHOBJ *)v8) )
      {
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v9);
        *(_OWORD *)v5 = v8[0];
        *((_OWORD *)v5 + 1) = v8[1];
        *((_OWORD *)v5 + 2) = v8[2];
        *((_OWORD *)v5 + 3) = v8[3];
        *((_OWORD *)v5 + 4) = v8[4];
        EPATHOBJ::vLock(v5, **((struct HPATH__ ***)&v8[0] + 1));
        *(_QWORD *)v5 = *(_QWORD *)&v8[0];
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v8);
        return (struct _PATHOBJ *)v5;
      }
      Win32FreePool(v5);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v9);
    }
    else
    {
      Win32FreePool(v5);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v8);
  }
  return 0LL;
}
