__int64 __fastcall CoreMessaging::Calling::SendProcessor::ReadParameterSize(
        CoreMessaging::Calling::SendProcessor *this,
        char **a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int8 *v8; // rax
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  const void *v16; // rdx
  __int64 result; // rax
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  int v23; // r10d
  const unsigned __int16 *v24; // rdx
  const void **v25; // rcx
  const unsigned __int16 **v26; // rcx
  int v27; // r10d
  const void *v28; // r10
  unsigned int v29; // ecx
  const void **v30; // rax
  char *v31; // rcx

  *a7 = 0;
  v8 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v9 = *v8;
  *((_QWORD *)this + 1) = v8 + 1;
  if ( (unsigned __int8)v9 > 8u )
  {
    v10 = v9 - 9;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( !v14 )
            {
              if ( a3 )
              {
                v24 = 0LL;
              }
              else
              {
                v26 = (const unsigned __int16 **)*a2;
                *a2 += 8;
                v24 = *v26;
              }
              result = CoreMessaging::Calling::SendProcessor::PrepareLPCWSTR(this, v24, a4, a3, a7);
LABEL_11:
              if ( (int)result < 0 )
                return result;
              return 0LL;
            }
            v15 = v14 - 1;
            if ( !v15 )
            {
              if ( a3 )
              {
                v16 = 0LL;
              }
              else
              {
                v25 = (const void **)*a2;
                *a2 += 8;
                v16 = *v25;
              }
              result = CoreMessaging::Calling::SendProcessor::PrepareStruct(this, v16, a3, a7);
              goto LABEL_11;
            }
            v27 = v15 - 1;
            if ( !v27 )
              CoreMessaging::Calling::FailFast::Error(
                (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
                0x379uLL);
            if ( v27 == 1 )
            {
              if ( a3 )
              {
                v28 = 0LL;
                v29 = 0;
              }
              else
              {
                v30 = (const void **)*a2;
                v31 = *a2 + 8;
                *a2 = v31;
                v28 = *v30;
                *a2 = v31 + 8;
                v29 = *(_DWORD *)v31;
              }
              result = CoreMessaging::Calling::SendProcessor::PrepareArray(this, v28, v29, a4, a5, a6, a3, a7);
              goto LABEL_11;
            }
LABEL_42:
            result = 2147942487LL;
            *((_DWORD *)this + 30) = 205;
            return result;
          }
          goto LABEL_33;
        }
LABEL_45:
        if ( !a3 )
          *a2 += 8;
        *a7 = 2;
        return 0LL;
      }
LABEL_30:
      if ( !a3 )
        *a2 += 8;
      *a7 = 8;
      return 0LL;
    }
    goto LABEL_23;
  }
  if ( (_BYTE)v9 == 8 )
    goto LABEL_30;
  if ( !v9 )
    goto LABEL_42;
  v18 = v9 - 1;
  if ( !v18 )
    goto LABEL_33;
  v19 = v18 - 1;
  if ( !v19 )
    goto LABEL_45;
  v20 = v19 - 1;
  if ( !v20 )
  {
LABEL_23:
    if ( !a3 )
      *a2 += 8;
    *a7 = 4;
    return 0LL;
  }
  v21 = v20 - 1;
  if ( !v21 )
    goto LABEL_30;
  v22 = v21 - 1;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( !v23 )
      goto LABEL_45;
    if ( v23 != 1 )
      goto LABEL_42;
    goto LABEL_23;
  }
LABEL_33:
  if ( !a3 )
    *a2 += 8;
  *a7 = 1;
  return 0LL;
}
