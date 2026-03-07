int __fastcall AuthzBasepCopyoutClaimAttributes(unsigned int *a1, _DWORD *a2, size_t a3)
{
  unsigned __int64 v6; // r15
  _DWORD *v7; // r14
  int result; // eax
  int v9; // r10d
  ULONGLONG v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rdi
  _DWORD *i; // r14
  wchar_t *v14; // rbp
  size_t v15; // r9
  size_t v16; // r13
  unsigned __int64 v17; // rbp
  ULONGLONG pullResult; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 && a3 && (v6 = (unsigned __int64)a2 + a3, (_DWORD *)((char *)a2 + a3) >= a2) )
  {
    memset(a2, 0, a3);
    v7 = a2 + 4;
    pullResult = 16LL;
    if ( (unsigned __int64)(a2 + 4) <= v6 )
    {
      result = RtlULongLongMult(0x20uLL, *a1, &pullResult);
      if ( result >= 0 )
      {
        v10 = (ULONGLONG)v7 + pullResult;
        if ( (unsigned __int64)v7 + pullResult <= v6 )
        {
          v11 = (__int64 *)(a1 + 2);
          *a2 = 1;
          a2[1] = v9;
          *((_QWORD *)a2 + 1) = v7;
          v12 = *v11;
          if ( (__int64 *)*v11 == v11 )
            return result;
          for ( i = a2 + 8; ; i += 8 )
          {
            *((_WORD *)i - 4) = *(_WORD *)(v12 + 48);
            v14 = (wchar_t *)((v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
            *i = *(_DWORD *)(v12 + 60);
            *((_WORD *)i - 3) = 0;
            *(i - 1) = *(_DWORD *)(v12 + 52);
            v15 = *(unsigned __int16 *)(v12 + 32);
            v16 = v15 + 2;
            pullResult = v15 + 2;
            if ( (unsigned __int64)v14 + v15 + 2 > v6 )
              break;
            *((_QWORD *)i - 2) = v14;
            RtlStringCbCopyNW(v14, v15 + 2, *(STRSAFE_PCNZWCH *)(v12 + 40), v15);
            v17 = (unsigned __int64)v14 + v16;
            result = AuthzBasepCopyoutClaimAttributeValues(v12, (__int64)(i - 4), v17, v6 - v17, &pullResult);
            if ( result < 0 )
              goto LABEL_16;
            v10 = pullResult + v17;
            v12 = *(_QWORD *)v12;
            if ( (__int64 *)v12 == v11 )
              return result;
          }
        }
        result = -2147483643;
      }
    }
    else
    {
      result = -1073741789;
    }
  }
  else
  {
    result = -1073741811;
  }
LABEL_16:
  if ( a3 >= 0x10 )
    *(_OWORD *)a2 = 0LL;
  return result;
}
