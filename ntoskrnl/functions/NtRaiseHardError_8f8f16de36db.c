__int64 __fastcall NtRaiseHardError(unsigned int a1, unsigned int a2, int a3, char *a4, unsigned int a5, _DWORD *a6)
{
  __int64 v7; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int i; // eax
  __int64 v13; // r8
  _OWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // edx
  int v19; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-F4h]
  unsigned int v21; // [rsp+48h] [rbp-F0h]
  _QWORD Src[5]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v23[15]; // [rsp+78h] [rbp-C0h] BYREF

  v7 = a2;
  v19 = 0;
  if ( a2 > 5 )
    return 3221225712LL;
  if ( a4 )
  {
    if ( a2 )
      goto LABEL_6;
    return 3221225712LL;
  }
  if ( a2 )
    return 3221225712LL;
LABEL_6:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( a5 > 6 && a5 - 7 >= 2 )
      return 3221225714LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a6;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( a4 )
    {
      v11 = 8LL * a2;
      if ( v11 )
      {
        if ( ((unsigned __int8)a4 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&a4[v11] > 0x7FFFFFFF0000LL || &a4[v11] < a4 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(Src, a4, 8LL * a2);
      memmove(v23, Src, 8 * v7);
      if ( a3 )
      {
        for ( i = 0; ; ++i )
        {
          v20 = i;
          if ( i >= (unsigned int)v7 )
            break;
          if ( _bittest(&a3, i) )
          {
            v13 = i;
            v14 = (_OWORD *)Src[v13];
            if ( ((unsigned __int8)v14 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            v15 = 2LL * i;
            *(_OWORD *)&v23[v15 + 5] = *v14;
            v16 = WORD1(v23[v15 + 5]);
            if ( (_WORD)v16 )
            {
              v17 = v23[v15 + 6];
              if ( v17 + v16 > 0x7FFFFFFF0000LL || v17 + v16 < v17 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v23[v13] = &v23[v15 + 5];
            i = v20;
          }
        }
      }
    }
    v18 = ExpRaiseHardError(a1, v7, a3, Src, (__int64)v23, a5, (unsigned int *)&v19);
    v21 = v18;
    *a6 = v19;
  }
  else
  {
    v18 = ExRaiseHardError(a1, a2, a3, a4, a5, &v19);
    *a6 = v19;
  }
  return v18;
}
