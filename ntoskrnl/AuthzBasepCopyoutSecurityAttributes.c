NTSTATUS __fastcall AuthzBasepCopyoutSecurityAttributes(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        size_t Size)
{
  size_t v5; // r12
  unsigned int v6; // r15d
  _DWORD *v10; // r13
  unsigned __int64 v11; // rbp
  unsigned int v12; // r11d
  NTSTATUS result; // eax
  __int64 v14; // r10
  int v15; // r11d
  char *v16; // rdi
  _DWORD *i; // r14
  __int64 *SecurityAttribute; // r13
  ULONGLONG v19; // r8
  char *v20; // rcx
  char *v21; // rdi
  _QWORD *v22; // r13
  _QWORD *v23; // r14
  _DWORD *j; // r15
  char *v25; // rcx
  ULONGLONG v26; // r8
  char *v27; // rdi
  ULONGLONG pullResult; // [rsp+98h] [rbp+20h] BYREF

  v5 = Size;
  v6 = 0;
  v10 = a1;
  if ( a4 && Size && (v11 = (unsigned __int64)a4 + Size, (_DWORD *)((char *)a4 + Size) >= a4) )
  {
    memset(a4, 0, Size);
    pullResult = 16LL;
    if ( (unsigned __int64)(a4 + 4) > v11 )
    {
      result = -1073741789;
    }
    else
    {
      v12 = a3;
      if ( !a2 )
        v12 = *v10;
      result = RtlULongLongMult(0x28uLL, v12, &pullResult);
      if ( result >= 0 )
      {
        v16 = (char *)(v14 + pullResult);
        if ( v14 + pullResult <= v11 )
        {
          *a4 = 1;
          a4[1] = v15;
          *((_QWORD *)a4 + 1) = v14;
          if ( a2 )
          {
            if ( !a3 )
              return result;
            for ( i = (_DWORD *)(v14 + 24); ; i += 10 )
            {
              SecurityAttribute = AuthzBasepFindSecurityAttribute(
                                    (__int64)v10,
                                    (const UNICODE_STRING *)(a2 + 16LL * v6));
              if ( !SecurityAttribute )
                break;
              *((_WORD *)i - 4) = *((_WORD *)SecurityAttribute + 24);
              *i = *((_DWORD *)SecurityAttribute + 15);
              *((_WORD *)i - 3) = 0;
              *(i - 1) = *((_DWORD *)SecurityAttribute + 13);
              v19 = *((unsigned __int16 *)SecurityAttribute + 16);
              v20 = (char *)((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
              pullResult = v19;
              v21 = &v20[v19];
              if ( (unsigned __int64)&v20[v19] > v11 )
                goto LABEL_24;
              *((_WORD *)i - 12) = v19;
              *((_WORD *)i - 11) = v19;
              *((_QWORD *)i - 2) = v20;
              memmove(v20, (const void *)SecurityAttribute[5], v19);
              result = AuthzBasepCopyoutSecurityAttributeValues(
                         (_DWORD)SecurityAttribute,
                         (int)i - 24,
                         (_DWORD)v21,
                         (int)v11 - (int)v21,
                         (__int64)&pullResult);
              if ( result < 0 )
                goto LABEL_27;
              v16 = &v21[pullResult];
              ++v6;
              v10 = a1;
              if ( v6 >= a3 )
                return result;
            }
            result = -1073741275;
            goto LABEL_27;
          }
          v22 = v10 + 2;
          v23 = (_QWORD *)*v22;
          if ( (_QWORD *)*v22 == v22 )
            return result;
          for ( j = (_DWORD *)(v14 + 24); ; j += 10 )
          {
            *((_WORD *)j - 4) = *((_WORD *)v23 + 24);
            v25 = (char *)((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
            *j = *((_DWORD *)v23 + 15);
            *((_WORD *)j - 3) = 0;
            *(j - 1) = *((_DWORD *)v23 + 13);
            v26 = *((unsigned __int16 *)v23 + 16);
            pullResult = v26;
            v27 = &v25[v26];
            if ( (unsigned __int64)&v25[v26] > v11 )
              break;
            *((_WORD *)j - 12) = v26;
            *((_WORD *)j - 11) = v26;
            *((_QWORD *)j - 2) = v25;
            memmove(v25, (const void *)v23[5], v26);
            result = AuthzBasepCopyoutSecurityAttributeValues(
                       (_DWORD)v23,
                       (int)j - 24,
                       (_DWORD)v27,
                       (int)v11 - (int)v27,
                       (__int64)&pullResult);
            if ( result < 0 )
              goto LABEL_27;
            v16 = &v27[pullResult];
            v23 = (_QWORD *)*v23;
            if ( v23 == v22 )
              return result;
          }
        }
LABEL_24:
        result = -2147483643;
      }
    }
  }
  else
  {
    result = -1073741811;
  }
LABEL_27:
  if ( v5 >= 0x10 )
    *(_OWORD *)a4 = 0LL;
  return result;
}
