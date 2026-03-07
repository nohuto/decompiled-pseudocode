__int64 IcRemapInputs()
{
  unsigned __int8 i; // si
  __int64 j; // rdi
  unsigned int v2; // r14d
  unsigned int v3; // ebp
  _BYTE *v4; // rbx
  int v5; // edx
  bool v6; // r8
  int v7; // ecx
  int v8; // edx
  __int64 result; // rax

  for ( i = 0; i < 2u; ++i )
  {
    for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
    {
      if ( (*(_DWORD *)(j + 28) & 0x80000004) == 0 )
      {
        v2 = 0;
        v3 = *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) + 1;
        if ( *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) != -1 )
        {
          v4 = (_BYTE *)(j + 225);
          do
          {
            v5 = *(_DWORD *)(v4 - 189);
            if ( !v5 && !*(_DWORD *)(v4 - 193) || *v4 )
              goto LABEL_27;
            v6 = *(_DWORD *)(v4 - 173) != *(_DWORD *)(v4 - 85)
              || *(_DWORD *)(v4 - 165) != *(_DWORD *)(v4 - 77)
              || *(_DWORD *)(v4 - 161) != *(_DWORD *)(v4 - 73)
              || *(_WORD *)(v4 - 145) != *(_WORD *)(v4 - 57)
              || *(_QWORD *)(v4 - 153) != *(_QWORD *)(v4 - 65);
            v7 = *(_DWORD *)(v4 - 193) - *(_DWORD *)(v4 - 185);
            v8 = v5 - *(_DWORD *)(v4 - 181);
            if ( i )
            {
              if ( v8 && (!v7 || v6) )
              {
                result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))HalPrivateDispatchTable[64])(
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           j + 200LL * v2 + 136,
                           1);
                if ( (int)result < 0 )
                  return result;
              }
            }
            else
            {
              if ( v8 )
              {
                if ( !v7 || !v6 )
                  goto LABEL_27;
              }
              else if ( !v7 )
              {
                goto LABEL_27;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))HalPrivateDispatchTable[65])(
                0LL,
                0LL,
                0LL,
                0LL,
                200LL * v2 + j + 48,
                1);
            }
LABEL_27:
            ++v2;
            v4 += 200;
          }
          while ( v2 < v3 );
        }
      }
    }
  }
  return 0LL;
}
