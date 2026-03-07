__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, int a2, int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  struct SURFACE *v8; // rax
  struct SURFACE *v9; // rbx
  int IsMonochrome; // eax
  HBITMAP v11; // rdx
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  LOBYTE(v7) = 5;
  v8 = (struct SURFACE *)HmgShareLockCheck(a1, v7);
  v9 = v8;
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 28) & 0x4000000) != 0 )
    {
      if ( hbmCreateClone(v8, a3 != 0 ? 8 : 0, a3 != 0 ? 8 : 0) )
      {
        v15 = *((_QWORD *)v9 + 16);
        IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v15);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v13, v11, a1, IsMonochrome, 0, 0x40u, a2);
        if ( v13[0] )
        {
          v6 = *(_QWORD *)v13[0];
          v14 = 1;
        }
        BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v13);
      }
    }
    else
    {
      EngSetLastError(0x57u);
    }
    HmgDecrementShareReferenceCountEx(v9, 0LL);
  }
  else
  {
    EngSetLastError(6u);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  return v6;
}
