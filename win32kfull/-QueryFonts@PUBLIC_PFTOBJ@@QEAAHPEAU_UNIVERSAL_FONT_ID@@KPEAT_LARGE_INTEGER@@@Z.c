__int64 __fastcall PUBLIC_PFTOBJ::QueryFonts(
        PUBLIC_PFTOBJ *this,
        struct _UNIVERSAL_FONT_ID *a2,
        unsigned int a3,
        union _LARGE_INTEGER *a4)
{
  int v4; // ebx
  unsigned int v5; // edi
  Gre::Base *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 *i; // r8
  __int64 j; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  *a4 = *(union _LARGE_INTEGER *)((char *)this + 8);
  v10 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  if ( a2 && a3 )
  {
    v16 = *((_QWORD *)Gre::Base::Globals(v9) + 6);
    GreAcquireSemaphore(v16);
    if ( *(_DWORD *)(v10 + 23648) == 2 )
    {
      v5 = 1;
      *(_QWORD *)a2 = *(_QWORD *)(v10 + 23648);
    }
    v11 = *(_QWORD *)this;
    for ( i = (__int64 *)(*(_QWORD *)this + 40LL);
          (unsigned __int64)i < v11 + 8 * (unsigned __int64)*(unsigned int *)(v11 + 24) + 40 && v5 < a3;
          ++i )
    {
      for ( j = *i; j && v5 < a3; j = *(_QWORD *)(j + 8) )
      {
        if ( (*(_DWORD *)(j + 52) & 0x20) == 0 )
        {
          v14 = v5++;
          *((_DWORD *)a2 + 2 * v14 + 1) = 1;
          *((_DWORD *)a2 + 2 * v14) = *(_DWORD *)(j + 136);
        }
      }
      v11 = *(_QWORD *)this;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    return v5;
  }
  else
  {
    LOBYTE(v4) = *(_DWORD *)(v10 + 23648) == 2;
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 28LL) + v4);
  }
}
