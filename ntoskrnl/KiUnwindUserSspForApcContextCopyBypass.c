__int64 __fastcall KiUnwindUserSspForApcContextCopyBypass(__int64 a1)
{
  unsigned int v1; // eax
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  int v9; // edx
  int v10; // ecx
  char *ExtendedFeature2; // rax
  char *v12; // rbx
  unsigned int v13; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp+4h] BYREF
  _DWORD *v15; // [rsp+38h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v15 = 0LL;
  v14 = 0;
  v13 = v1;
  result = RtlpSanitizeContextFlags(&v13, 1);
  if ( (int)result >= 0 )
  {
    v4 = v13;
    if ( (v13 & 0x100040) != 0x100040 )
      return 3221225473LL;
    result = RtlGetExtendedContextLength(v13, (__int64)&v14);
    if ( (int)result >= 0 )
    {
      v5 = v14 + 15LL;
      if ( v5 <= v14 )
        v5 = 0xFFFFFFFFFFFFFF0LL;
      v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
      v7 = alloca(v6);
      v8 = alloca(v6);
      result = RtlInitializeExtendedContext((__int64)&v13, v4, (__int64)&v15);
      if ( (int)result >= 0 )
      {
        LOBYTE(v9) = 1;
        result = RtlpReadExtendedContext(v10, v9, (_DWORD)v15, v4, a1, 0LL);
        if ( (int)result >= 0 )
        {
          ExtendedFeature2 = RtlLocateExtendedFeature2(v15, 0xBu, 0xFFFFF780000003D8uLL, 0LL);
          v12 = ExtendedFeature2;
          if ( ExtendedFeature2 && (*(unsigned int *)((char *)&v13 + SLODWORD(STACK[0x510]) + 1232) & 0x800LL) != 0 )
          {
            *((_QWORD *)ExtendedFeature2 + 1) -= 8LL;
            result = KiVerifyContextXStateCetUEnabled(ExtendedFeature2, (void *)__readmsr(0x6A7u));
            if ( (int)result >= 0 )
            {
              __writemsr(0x6A7u, *((_QWORD *)v12 + 1));
              return 0LL;
            }
            return result;
          }
          return 3221225473LL;
        }
      }
    }
  }
  return result;
}
