/*
 * XREFs of sub_18013B62C @ 0x18013B62C
 * Callers:
 *     sub_18013AD18 @ 0x18013AD18 (sub_18013AD18.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_1800F3B8C @ 0x1800F3B8C (sub_1800F3B8C.c)
 *     sub_180138F94 @ 0x180138F94 (sub_180138F94.c)
 *     sub_180139BF8 @ 0x180139BF8 (sub_180139BF8.c)
 *     sub_180139C34 @ 0x180139C34 (sub_180139C34.c)
 *     sub_18013A388 @ 0x18013A388 (sub_18013A388.c)
 *     sub_18013A8AC @ 0x18013A8AC (sub_18013A8AC.c)
 *     sub_18013A944 @ 0x18013A944 (sub_18013A944.c)
 *     sub_18013AF20 @ 0x18013AF20 (sub_18013AF20.c)
 *     sub_18013B9B4 @ 0x18013B9B4 (sub_18013B9B4.c)
 */

__int64 __fastcall sub_18013B62C(unsigned int *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 *v5; // r15
  unsigned int *v6; // r14
  int v7; // r13d
  __int64 *v8; // rax
  __int64 *v9; // rsi
  int v10; // edi
  int v11; // r9d
  const wchar_t *v12; // rcx
  __int64 i; // rax
  ATL::CAtlException *v15; // rbx
  ATL::CAtlException *v16; // rbx
  int v17; // [rsp+30h] [rbp-2C8h] BYREF
  int v18; // [rsp+34h] [rbp-2C4h] BYREF
  wchar_t *v19; // [rsp+38h] [rbp-2C0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-2B8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-2B0h]
  __int64 *v22; // [rsp+50h] [rbp-2A8h] BYREF
  unsigned int *v23; // [rsp+58h] [rbp-2A0h]
  __int64 *v24; // [rsp+60h] [rbp-298h]
  __int64 v25; // [rsp+70h] [rbp-288h]
  __int64 v26; // [rsp+80h] [rbp-278h]
  ATL::CAtlException *v27; // [rsp+90h] [rbp-268h] BYREF
  ATL::CAtlException *v28; // [rsp+98h] [rbp-260h] BYREF
  _DWORD v29[132]; // [rsp+A0h] [rbp-258h] BYREF

  v4 = a4;
  v21 = a3;
  v5 = a2;
  v6 = a1;
  v23 = a1;
  v24 = a2;
  v25 = a3;
  v26 = a4;
  sub_1800F3B8C((__int64)L"Parsing resource consumer");
  v18 = 1;
  v7 = 0;
  v19 = 0LL;
  v8 = (__int64 *)sub_180055F40(0x30uLL);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    *((_DWORD *)v8 + 10) = 10;
  }
  else
  {
    v9 = 0LL;
  }
  v22 = v9;
  if ( v9 )
  {
    v10 = sub_18013A8AC(v6, (__int64)v5, (__int64)L"ConsumerInfo");
    if ( v10 >= 0 )
    {
      v10 = sub_18013AF20(v6, v5, &v19);
      if ( v10 >= 0 )
      {
        if ( sub_180139BF8(v4, (__int64 *)&v19, &v20) )
        {
          v10 = -2147024713;
          sub_1800F3AD4((__int64)L"Repeated resource consumer declaration in XML not allowed");
        }
        else
        {
          v10 = 0;
        }
      }
    }
  }
  else
  {
    v10 = -2147024882;
  }
  while ( v10 >= 0 )
  {
    if ( !v18 )
    {
      if ( v7 )
      {
        try
        {
          v10 = 0;
          sub_18013A388(v4, (__int64 *)&v19, &v22);
        }
        catch ( ATL::CAtlException *v28 )
        {
          v16 = v28;
          if ( *(_DWORD *)v28 == -1073741571 )
            o__resetstkoflw();
          return *(unsigned int *)v16;
        }
      }
      else
      {
        return (unsigned int)-2147024809;
      }
      return (unsigned int)v10;
    }
    v10 = sub_18013A944(v6, (__int64)v5, (__int64)L"Resource", (__int64)L"ResourceConsumer", 0, &v18);
    if ( v10 >= 0 )
    {
      if ( v18 )
      {
        v7 = 1;
        LODWORD(v20) = 1;
        v17 = -1;
        memset(v29, 0, 0x20CuLL);
        v10 = sub_18013B9B4((_DWORD)v6, (_DWORD)v5, (unsigned int)&v29[2], v11, (__int64)&v29[1]);
        if ( v10 >= 0 )
        {
          if ( !sub_180139C34(v21, (unsigned __int16 *)&v29[2], &v17) )
          {
            v12 = L"Resource ID %s referenced in consumer but limits not declared";
            goto LABEL_25;
          }
          v29[0] = v17;
          for ( i = *v9; i; i = *(_QWORD *)i )
          {
            if ( *(_DWORD *)(i + 16) == v17 )
              goto LABEL_23;
          }
          i = 0LL;
LABEL_23:
          if ( i )
          {
            v12 = L"Resource ID %s referenced in consumer has multiple consumptions declared";
LABEL_25:
            v10 = -2147467259;
            sub_1800F3AD4((__int64)v12, &v29[2]);
          }
          else
          {
            v10 = 0;
            try
            {
              sub_180138F94(v9, (__int64)v29);
            }
            catch ( ATL::CAtlException *v27 )
            {
              v15 = v27;
              if ( *(_DWORD *)v27 == -1073741571 )
                o__resetstkoflw();
              v17 = *(_DWORD *)v15;
              v10 = v17;
              v7 = v20;
              v9 = v22;
              v6 = v23;
              v5 = v24;
              v21 = v25;
              v4 = v26;
              continue;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v10;
}
