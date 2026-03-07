__int64 __fastcall EtwpEnableDisableSpecialGuids(
        __int64 a1,
        __int64 *a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        _BYTE *a8)
{
  char v8; // r10
  unsigned int v10; // r13d
  int v11; // r9d
  unsigned int v14; // r11d
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // r15
  unsigned int v18; // ebp
  __int64 (**v19)[2]; // r14
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // r8
  __int64 v24; // r8
  unsigned int v25; // ecx
  __int64 v26; // r9
  __int64 v28; // rax
  _DWORD *v29; // rdx
  int v30; // edx
  __int64 v31; // rax
  int v32; // [rsp+30h] [rbp-38h]

  v8 = 1;
  v10 = a3;
  v11 = a5;
  v14 = -1073741275;
  v15 = 2LL;
  *a8 = 1;
  if ( a4 != 2 )
  {
    v16 = 0LL;
    if ( a4 == 1 )
    {
      v17 = 1;
    }
    else
    {
      if ( a4 )
        goto LABEL_12;
      v17 = 0;
    }
    v18 = 0;
    v19 = &EtwpUmglProviders;
    do
    {
      v20 = *a2;
      v21 = (**v19)[0] - *a2;
      if ( !v21 )
        v21 = (**v19)[1] - a2[1];
      if ( !v21 )
      {
        v28 = 0LL;
        if ( a7 )
        {
          v29 = (_DWORD *)(a6 + 12);
          while ( *v29 != -2147483644 )
          {
            v28 = (unsigned int)(v28 + 1);
            v29 += 4;
            if ( (unsigned int)v28 >= a7 )
              goto LABEL_41;
          }
          v31 = 2 * v28;
          v16 = *(_QWORD *)(a6 + 8 * v31);
          v30 = *(_DWORD *)(a6 + 8 * v31 + 8) >> 2;
        }
        else
        {
LABEL_41:
          v30 = 0;
        }
        v32 = v30;
        LOBYTE(v30) = v17;
        return EtwpEnableDisableUMGL(
                 a1,
                 v30,
                 (unsigned __int16)v10,
                 a5,
                 LOBYTE((&EtwpUmglProviders)[2 * v18 + 1]),
                 v16,
                 v32);
      }
      ++v18;
      v19 += 2;
    }
    while ( v18 < 0xA );
    v22 = KernelRundownGuid - v20;
    if ( KernelRundownGuid == v20 )
      v22 = 0xCDF584518E9C7793uLL - a2[1];
    if ( v22 )
      goto LABEL_12;
    if ( v17 )
    {
      v26 = (unsigned int)(a5 - 1);
      if ( a5 == 1 )
      {
        v15 = *(unsigned __int8 *)(a1 + 4232);
      }
      else
      {
        v26 = (unsigned int)(a5 - 2);
        if ( a5 == 2 )
        {
          v15 = *(unsigned __int8 *)(a1 + 4232);
          goto LABEL_33;
        }
        v26 = (unsigned int)(a5 - 4);
        if ( a5 != 4 )
        {
          v26 = (unsigned int)(a5 - 8);
          if ( a5 == 16 )
            return (unsigned int)EtwpLogFileNameRundown(a1, v10);
LABEL_33:
          LOBYTE(v26) = v16;
          return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, v15, v10, v26);
        }
      }
      LOBYTE(v16) = 1;
      goto LABEL_33;
    }
    return 0;
  }
  v24 = SystemTraceControlGuid - *a2;
  if ( SystemTraceControlGuid == *a2 )
    v24 = 0x3969A8086000829ALL - a2[1];
  v25 = 0;
  if ( v24 || a1 != EtwpHostSiloState )
  {
LABEL_12:
    *a8 = 0;
    return v14;
  }
  if ( a5 == 1 )
    goto LABEL_24;
  if ( a5 == 2 )
  {
    v8 = 0;
LABEL_24:
    LOBYTE(v11) = v8;
    return (unsigned int)EtwpCheckGuidAccessAndDoRundown(a1, 2, v10, v11, a6, a7);
  }
  return v25;
}
