__int64 __fastcall PspWow64GetContextThread(__int64 a1, unsigned int *a2, int a3, char a4)
{
  __int64 v8; // rdx
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  __int64 result; // rax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  void *v14; // rsp
  unsigned int *v15; // r15
  int v16; // ecx
  __int64 v17; // r13
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  void *v21; // rsp
  int v22; // r9d
  int v23; // ecx
  _DWORD *v24; // r10
  int v25; // [rsp+20h] [rbp-30h]
  int v26; // [rsp+28h] [rbp-28h]
  _BYTE v27[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v28; // [rsp+54h] [rbp+4h] BYREF
  _DWORD v29[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v30; // [rsp+60h] [rbp+10h] BYREF
  __int64 v31; // [rsp+68h] [rbp+18h] BYREF
  __int64 v32; // [rsp+70h] [rbp+20h]
  int v33[4]; // [rsp+78h] [rbp+28h] BYREF
  __int128 v34; // [rsp+88h] [rbp+38h]
  _BYTE v35[720]; // [rsp+A0h] [rbp+50h] BYREF

  v32 = a1;
  v31 = 0LL;
  memset(v35, 0, 0x2CCuLL);
  v29[0] = 0;
  v30 = 0LL;
  v27[0] = 0;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  if ( a3 != 716 )
    return 3221225476LL;
  v9 = *(_QWORD *)(a1 + 544);
  if ( !*(_QWORD *)(v9 + 1408) || *(_WORD *)(v9 + 2412) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a2;
    v28 = *(_DWORD *)v10;
  }
  else
  {
    v28 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v28, v8);
  if ( (int)result >= 0 )
  {
    v12 = v28;
    if ( !a4 )
    {
      v15 = a2;
      v17 = (__int64)(a2 + 179);
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea(v9, v25, v26, 0LL, (__int64)v27);
      if ( (int)result >= 0 )
      {
        if ( v27[0] && (v12 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431LL, (__int64)v29);
          if ( (int)result >= 0 )
          {
            v18 = v29[0] + 15LL;
            if ( v18 <= v29[0] )
              v18 = 0xFFFFFFFFFFFFFF0LL;
            v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
            v20 = alloca(v19);
            v21 = alloca(v19);
            result = RtlInitializeExtendedContext((__int64)v27, 0x4010001Fu, (__int64)&v31);
            if ( (int)result >= 0 )
            {
              if ( (v12 & 0x10040) == 0x10040 )
              {
                v33[2] |= 0x100040u;
                v24 = (_DWORD *)v31;
                *(_QWORD *)(v31 + 16) = *(_QWORD *)(v17 + 16);
                v24[4] += v17 - (_DWORD)v24;
                v24[1] = v24[4] + v24[5] - *v24;
              }
              LOBYTE(v22) = 1;
              result = PspGetContextThreadInternal(v32, (unsigned int)v27, 0, v22, 1);
              if ( (int)result >= 0 )
              {
                if ( v27[0] )
                  result = RtlCopyContext(v15, *v15, v35);
                else
                  result = RtlpWow64GetContextOnAmd64(v35, v27, v15);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v23, (int)a2 + 716, (unsigned int)v33, v12, v17);
                    v29[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v28, (__int64)v29);
    if ( (int)result >= 0 )
    {
      v13 = v29[0] + 15LL;
      if ( v13 <= v29[0] )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
      v15 = (unsigned int *)v27;
      memset(v27, 0, v29[0]);
      result = RtlInitializeExtendedContext((__int64)v27, v12, (__int64)&v30);
      if ( (int)result >= 0 )
      {
        v17 = v30;
        result = RtlpReadExtendedContext(v16, 0, v30, v12, (__int64)a2, (__int64)v33);
        if ( (int)result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
