__int64 __fastcall RtlEnumerateBoundaryDescriptorEntries(
        _DWORD *a1,
        unsigned int (__fastcall *a2)(_DWORD *, __int64),
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rbx
  int v9; // r12d
  void *v10; // rcx
  int v11; // r15d
  int v12; // r14d
  __int64 v13; // r8
  char *v14; // rbp

  v3 = (unsigned int)a1[2];
  v4 = a3;
  if ( (unsigned int)v3 >= 0x10 && *a1 == 1 )
  {
    v7 = (unsigned __int64)a1 + v3;
    if ( (_DWORD *)((char *)a1 + v3) >= a1 )
    {
      v8 = a1 + 4;
      v9 = 0;
      v10 = a1 + 6;
      v11 = 0;
      v12 = 0;
      if ( (unsigned __int64)v10 >= v7 )
      {
LABEL_18:
        if ( a1[1] == v12 )
          return 0LL;
      }
      else
      {
        while ( 1 )
        {
          v13 = (unsigned int)v8[1];
          ++v12;
          if ( (unsigned int)v13 < 8 )
            break;
          v14 = (char *)v8 + v13;
          if ( (_DWORD *)((char *)v8 + v13) < v8 || (unsigned __int64)v14 > v7 )
            break;
          if ( *v8 == 1 )
          {
            if ( (unsigned int)++v11 > 1 )
              return 3221225661LL;
          }
          else
          {
            if ( *v8 != 2 )
            {
              if ( *v8 != 3 )
                return 3221225485LL;
              if ( (unsigned int)++v9 > 1 )
                return 3221226026LL;
            }
            if ( !(unsigned __int8)RtlpValidateSidBuffer(v10) )
              return 3221225485LL;
            v4 = a3;
          }
          if ( a2 && !a2(v8, v4) )
            goto LABEL_18;
          v8 = (_DWORD *)((unsigned __int64)(v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v10 = v8 + 2;
          if ( (unsigned __int64)(v8 + 2) >= v7 )
            goto LABEL_18;
          v4 = a3;
        }
      }
    }
  }
  return 3221225485LL;
}
