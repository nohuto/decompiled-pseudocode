__int64 __fastcall SepCaptureUnicodeStringArray(ULONGLONG a1, unsigned int a2, char a3, ULONGLONG *a4)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned int v8; // edx
  unsigned int v9; // r14d
  __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned __int16 *v12; // r15
  unsigned int v13; // r8d
  _QWORD *Pool2; // rax
  _QWORD *v15; // r14
  char *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  void *Src; // [rsp+80h] [rbp+8h] BYREF
  char v20; // [rsp+90h] [rbp+18h]
  ULONGLONG *v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v20 = a3;
  v5 = a2;
  v6 = 0;
  Src = 0LL;
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( !a2 )
      return 0LL;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
  {
    *a4 = a1;
    return 0LL;
  }
  result = SeCaptureUnicodeStringStructures(a1, a2, a3, &Src);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)(16 * v5) > 0xFFFFFFFF )
      v8 = -1;
    else
      v8 = 16 * v5;
    if ( (unsigned __int64)(16 * v5) <= 0xFFFFFFFF )
    {
      if ( ((v8 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < v8 )
      {
        if ( a3 == 1 && Src )
          ExFreePoolWithTag(Src, 0);
        return 3221225621LL;
      }
      else
      {
        v10 = (v8 + 1) & 0xFFFFFFFE;
        v11 = 0;
        v12 = (unsigned __int16 *)Src;
        while ( v11 < (unsigned int)v5 )
        {
          v13 = v10 + *((unsigned __int16 *)Src + 8 * v11);
          if ( v13 < (unsigned int)v10 )
          {
            v10 = 0xFFFFFFFFLL;
            v9 = -1073741675;
          }
          else
          {
            v10 = v13;
            v9 = 0;
          }
          if ( (v9 & 0x80000000) != 0 )
          {
            if ( a3 == 1 && Src )
            {
              ExFreePoolWithTag(Src, 0);
              return v9;
            }
            return v9;
          }
          ++v11;
        }
        Pool2 = (_QWORD *)ExAllocatePool2(256LL, v10, 1950442835LL);
        v15 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v12, 16 * v5);
          v16 = (char *)(((unsigned __int64)&v15[2 * v5] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
          while ( v6 < (unsigned int)v5 )
          {
            v17 = v12[8 * v6];
            if ( (_WORD)v17 )
            {
              v18 = *(_QWORD *)&v12[8 * v6 + 4];
              if ( (v18 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v18 + v17 > 0x7FFFFFFF0000LL || v18 + v17 < v18 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove(v16, *(const void **)&v12[8 * v6 + 4], v12[8 * v6]);
            v15[2 * v6 + 1] = v16;
            WORD1(v15[2 * v6]) = v15[2 * v6];
            v16 += v12[8 * v6++];
          }
          if ( a3 == 1 && v12 )
            ExFreePoolWithTag(v12, 0);
          *v21 = (ULONGLONG)v15;
          return 0LL;
        }
        if ( a3 == 1 && v12 )
          ExFreePoolWithTag(v12, 0);
        return 3221225626LL;
      }
    }
    else
    {
      v9 = -1073741675;
      if ( a3 == 1 )
      {
        if ( Src )
          ExFreePoolWithTag(Src, 0);
      }
      return v9;
    }
  }
  return result;
}
