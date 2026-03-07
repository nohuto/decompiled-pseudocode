__int64 __fastcall DC::iSetMetaRgn(DC *this)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v4; // r9
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp+20h] BYREF
  __int64 v8; // [rsp+48h] [rbp+28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_QWORD *)this + 20);
  if ( *((_QWORD *)this + 21) )
  {
    v7 = *((_QWORD *)this + 21);
    if ( v2 )
    {
      v9 = v2;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
      if ( v8 )
      {
        v5 = RGNOBJ::iCombine((RGNOBJ *)&v8, (struct RGNOBJ *)&v7, (struct RGNOBJ *)&v9, 1);
        if ( v5 )
        {
          ++*(_DWORD *)(v8 + 76);
          *((_QWORD *)this + 21) = v8;
          if ( !--*(_DWORD *)(v7 + 76) )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
          v6 = v9;
          *((_QWORD *)this + 20) = 0LL;
          --*(_DWORD *)(v6 + 76);
          if ( !*(_DWORD *)(v9 + 76) )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
          DC::vReleaseRao(this);
        }
        else
        {
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
        }
        return v5;
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      return RGNOBJ::iComplexity((RGNOBJ *)&v7);
    }
  }
  else if ( v2 )
  {
    v7 = *((_QWORD *)this + 20);
    result = RGNOBJ::iComplexity((RGNOBJ *)&v7);
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = v4;
  }
  else
  {
    return 2LL;
  }
  return result;
}
