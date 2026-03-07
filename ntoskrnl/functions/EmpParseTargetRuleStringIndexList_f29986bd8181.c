bool __fastcall EmpParseTargetRuleStringIndexList(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int *a7)
{
  int v7; // esi
  unsigned int v8; // r15d
  char v9; // bl
  unsigned int v10; // r12d
  int v12; // edx
  bool v13; // zf
  char v14; // cl
  __int64 v15; // r13
  _BYTE *v16; // r15
  unsigned __int64 v17; // rsi
  char *Pool2; // rax
  char *v19; // r14
  char *v20; // rcx
  __int64 v21; // r15
  char v22; // al
  char *v23; // rax
  __int64 v24; // rcx
  unsigned int v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+24h] [rbp-54h]
  ULONG Value[20]; // [rsp+28h] [rbp-50h] BYREF
  int v30; // [rsp+88h] [rbp+10h]
  unsigned int v31; // [rsp+90h] [rbp+18h]
  unsigned int v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v7 = 0;
  Value[0] = 0;
  v8 = 0;
  v9 = 0;
  v30 = 0;
  v10 = 0;
  v26 = 0;
  v12 = *a7;
  v27 = *a7;
  if ( a5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = v9 == 0;
            if ( v9 )
              return v13;
            if ( v7 )
              break;
            if ( *a2 == 123 )
            {
LABEL_7:
              v7 = 1;
              goto LABEL_8;
            }
LABEL_37:
            v9 = 1;
          }
          if ( v7 == 1 )
            break;
          if ( v7 == 2 )
          {
            if ( *a2 == 46 )
              goto LABEL_7;
            if ( *a2 != 125 )
              goto LABEL_37;
LABEL_46:
            v7 = 3;
LABEL_8:
            ++a2;
            v30 = v7;
          }
          else if ( v7 == 3 )
          {
            if ( !*a2 && v10 == a3 && v8 == a4 )
            {
              *a7 = v12 + v8 + v10;
              return v9 == 0;
            }
            goto LABEL_37;
          }
        }
        v14 = *a2;
        if ( *a2 == 125 )
          goto LABEL_46;
        if ( v10 > a3 || v8 > a4 || (v15 = v12 + v8 + v10, (unsigned int)v15 >= a6) )
        {
          v9 = 1;
          return v9 == 0;
        }
        v16 = a2;
        if ( v14 )
        {
          do
          {
            if ( strchr(".}", v14) )
              break;
            v14 = *++a2;
          }
          while ( *a2 );
          v12 = v27;
          a3 = v31;
          a4 = v32;
        }
        v17 = a2 - v16 + 1;
        if ( a2 - v16 != -1 )
          break;
        v7 = v30;
        v9 = 1;
        v8 = v26;
      }
      Pool2 = (char *)ExAllocatePool2(256LL, a2 - v16 + 1, 0x74694D45u);
      v19 = Pool2;
      if ( Pool2 && v17 <= 0x7FFFFFFF )
      {
        if ( (unsigned __int64)(a2 - v16) > 0x7FFFFFFE )
        {
          *Pool2 = 0;
        }
        else
        {
          v20 = Pool2;
          v21 = v16 - Pool2;
          while ( v17 != 1 )
          {
            v22 = v20[v21];
            if ( !v22 )
              break;
            *v20 = v22;
            --v17;
            ++v20;
          }
          v23 = v20 - 1;
          if ( v17 )
            v23 = v20;
          *v23 = 0;
          if ( v17 )
          {
            if ( v10 < v31 )
            {
              v8 = v26;
              if ( (int)EmpInfParseGetStringIndexFromName(a1, v19, Value) < 0 )
                goto LABEL_47;
              v24 = v10 + v27;
              ++v10;
              *(_DWORD *)(a5 + 4 * v24) = Value[0];
LABEL_31:
              v7 = 2;
              v30 = 2;
            }
            else
            {
              v8 = v26;
              if ( RtlCharToInteger(v19, 0x10u, Value) >= 0 )
              {
                v8 = ++v26;
                *(_DWORD *)(a5 + 4 * v15) = Value[0];
                goto LABEL_31;
              }
LABEL_47:
              v7 = v30;
              v9 = 1;
            }
            ExFreePoolWithTag(v19, 0x74694D45u);
            goto LABEL_33;
          }
        }
      }
      v7 = v30;
      v9 = 1;
      v8 = v26;
LABEL_33:
      v12 = v27;
      a3 = v31;
      a4 = v32;
    }
  }
  return 0;
}
