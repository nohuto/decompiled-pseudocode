/*
 * XREFs of CmpParseInfBuffer @ 0x140B5BC3C
 * Callers:
 *     EmpParseInfDatabase @ 0x140B4CEE0 (EmpParseInfDatabase.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpGetToken @ 0x140B5BF5C (CmpGetToken.c)
 *     CmpAppendValue @ 0x140B5C204 (CmpAppendValue.c)
 *     CmpAppendLine @ 0x140B5C288 (CmpAppendLine.c)
 *     CmpAppendSection @ 0x140B5C310 (CmpAppendSection.c)
 */

__int64 __fastcall CmpParseInfBuffer(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v3; // rdi
  char v5; // si
  char v6; // r12
  __int64 result; // rax
  _QWORD *v8; // r14
  unsigned int v9; // r15d
  void *v10; // r13
  __int64 v11; // rax
  char v12; // di
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  PVOID P; // [rsp+20h] [rbp-30h]
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  int v22; // [rsp+48h] [rbp-8h]
  int v24; // [rsp+A8h] [rbp+58h]

  v3 = a2;
  v22 = 0;
  v5 = 0;
  v6 = 0;
  v21 = 0LL;
  result = ExAllocatePool2(256LL, 0x30uLL, 0x69704D43u);
  v8 = (_QWORD *)result;
  if ( !result )
    return result;
  *(_QWORD *)result = 0LL;
  v9 = 1;
  *(_QWORD *)(result + 8) = 0LL;
  v10 = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0LL;
  v11 = a1 + v3;
  v19 = a1;
  v12 = 0;
  v20 = v11;
  v24 = 1;
  P = 0LL;
  do
  {
    CmpGetToken(&v19, v11, &v21);
    v13 = 6LL;
    if ( v9 <= 6 )
    {
      if ( v9 == 6 )
      {
        v14 = v21;
        if ( (_DWORD)v21 )
        {
          switch ( (_DWORD)v21 )
          {
            case 1:
              if ( (unsigned __int8)CmpAppendLine(v8, 0LL, 0LL) )
              {
                LOBYTE(v16) = v6;
                if ( (unsigned __int8)CmpAppendValue(v8, v10, v16) )
                {
                  v10 = 0LL;
                  goto LABEL_35;
                }
              }
              break;
            case 5:
              LOBYTE(v13) = v6;
              if ( !(unsigned __int8)CmpAppendLine(v8, v10, v13) )
                goto LABEL_68;
              v10 = 0LL;
              v9 = 8;
              goto LABEL_24;
            case 6:
              if ( (unsigned __int8)CmpAppendLine(v8, 0LL, 0LL) )
              {
                LOBYTE(v15) = v6;
                if ( (unsigned __int8)CmpAppendValue(v8, v10, v15) )
                {
                  v10 = 0LL;
                  v9 = 7;
                  goto LABEL_24;
                }
              }
              break;
            default:
              goto LABEL_68;
          }
        }
        else if ( (unsigned __int8)CmpAppendLine(v8, 0LL, 0LL) )
        {
          LOBYTE(v17) = v6;
          if ( (unsigned __int8)CmpAppendValue(v8, v10, v17) )
          {
            v10 = 0LL;
            goto LABEL_55;
          }
        }
LABEL_87:
        v12 = 1;
        v5 = 1;
        goto LABEL_24;
      }
      if ( v9 != 1 )
      {
        if ( v9 == 2 )
        {
          v14 = v21;
          if ( (_DWORD)v21 != 3 )
          {
            if ( (_DWORD)v21 != 4 )
              goto LABEL_68;
            v9 = 3;
            v6 = v22;
            P = (PVOID)*((_QWORD *)&v21 + 1);
            goto LABEL_24;
          }
          LOBYTE(v22) = 0;
          *((_QWORD *)&v21 + 1) = &EmptyValue;
          v6 = 0;
        }
        else
        {
          if ( v9 != 3 )
          {
            if ( v9 == 4 )
            {
              v14 = v21;
              if ( (_DWORD)v21 )
              {
                if ( (_DWORD)v21 != 1 )
                {
                  v12 = 1;
                  v5 = 1;
                  goto LABEL_60;
                }
                LOBYTE(v13) = v6;
                if ( !(unsigned __int8)CmpAppendSection(v8, P, v13) )
                {
LABEL_68:
                  v12 = 1;
                  v5 = 1;
                  goto LABEL_60;
                }
                P = 0LL;
                goto LABEL_35;
              }
              LOBYTE(v13) = v6;
              if ( !(unsigned __int8)CmpAppendSection(v8, P, v13) )
                goto LABEL_68;
              P = 0LL;
            }
            else
            {
              v14 = v21;
              if ( (_DWORD)v21 )
              {
                if ( (_DWORD)v21 != 1 )
                {
                  if ( (_DWORD)v21 == 2 )
                  {
                    v9 = 2;
                  }
                  else
                  {
                    if ( (_DWORD)v21 != 4 )
                    {
                      v12 = v9 - 4;
                      v5 = v9 - 4;
                      goto LABEL_60;
                    }
                    v10 = (void *)*((_QWORD *)&v21 + 1);
                    v9 = 6;
                    v6 = v22;
                  }
                }
                goto LABEL_24;
              }
            }
            goto LABEL_55;
          }
          v14 = v21;
          if ( (_DWORD)v21 != 3 )
            goto LABEL_68;
        }
        v9 = 4;
        goto LABEL_24;
      }
      v14 = v21;
      if ( !(_DWORD)v21 )
        goto LABEL_55;
      if ( (_DWORD)v21 != 1 )
      {
        if ( (_DWORD)v21 != 2 )
          goto LABEL_68;
        v9 = 2;
      }
    }
    else
    {
      if ( v9 != 7 )
      {
        if ( v9 != 8 )
        {
          v14 = v21;
          if ( !(_DWORD)v21 )
            goto LABEL_55;
          if ( (_DWORD)v21 == 1 )
            goto LABEL_35;
          if ( (_DWORD)v21 != 6 )
            goto LABEL_68;
          v9 = 7;
          goto LABEL_24;
        }
        v14 = v21;
        if ( (_DWORD)v21 )
        {
          if ( (_DWORD)v21 != 1 )
          {
            if ( (_DWORD)v21 != 4 )
              goto LABEL_68;
            v13 = 0LL;
            goto LABEL_22;
          }
          LOBYTE(v22) = 0;
          *((_QWORD *)&v21 + 1) = &EmptyValue;
          v6 = 0;
          if ( !(unsigned __int8)CmpAppendValue(v8, &EmptyValue, 0LL) )
          {
            v5 = 1;
            v12 = 1;
            goto LABEL_60;
          }
LABEL_35:
          v9 = 5;
          goto LABEL_24;
        }
        LOBYTE(v22) = 0;
        *((_QWORD *)&v21 + 1) = &EmptyValue;
        v6 = 0;
        if ( !(unsigned __int8)CmpAppendValue(v8, &EmptyValue, 0LL) )
          v5 = 1;
LABEL_55:
        v12 = 1;
        goto LABEL_24;
      }
      v14 = v21;
      if ( (_DWORD)v21 == 4 )
      {
        LOBYTE(v13) = v22;
LABEL_22:
        if ( !(unsigned __int8)CmpAppendValue(v8, *((_QWORD *)&v21 + 1), v13) )
          goto LABEL_68;
        v9 = 9;
        goto LABEL_24;
      }
      if ( (_DWORD)v21 != 6 )
        goto LABEL_68;
      LOBYTE(v22) = 0;
      *((_QWORD *)&v21 + 1) = &EmptyValue;
      v6 = 0;
      if ( !(unsigned __int8)CmpAppendValue(v8, &EmptyValue, 0LL) )
        goto LABEL_87;
    }
LABEL_24:
    if ( !v5 )
    {
      if ( v14 == 1 )
        ++v24;
      goto LABEL_27;
    }
LABEL_60:
    *a3 = v24;
    if ( P && v6 )
      ExFreePoolWithTag(P, 0);
    if ( v10 && v6 )
      ExFreePoolWithTag(v10, 0);
    ExFreePoolWithTag(v8, 0);
    v8 = 0LL;
LABEL_27:
    v11 = v20;
  }
  while ( !v12 );
  if ( v8 )
    v8[1] = 0LL;
  return (__int64)v8;
}
