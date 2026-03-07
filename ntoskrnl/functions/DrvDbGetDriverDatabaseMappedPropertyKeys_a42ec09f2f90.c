__int64 __fastcall DrvDbGetDriverDatabaseMappedPropertyKeys(
        __int64 a1,
        const wchar_t *a2,
        HANDLE a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rsi
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v11; // r13d
  unsigned int v12; // r14d
  int DriverDatabaseCompositeMappedPropertyKeys; // ebx
  __int64 v14; // rdx
  HANDLE v15; // rax
  __int64 (**v16)[3]; // r15
  unsigned int v17; // r12d
  const WCHAR *v18; // rdx
  int Value; // eax
  __int64 *v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  bool v24; // cc
  unsigned int v25; // eax
  __int64 (**v26)[3]; // r15
  unsigned int *v27; // rax
  __int64 v28; // r12
  unsigned int v29; // r13d
  const WCHAR *v30; // rdx
  int v31; // eax
  __int64 *v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // ecx
  unsigned int v36; // [rsp+20h] [rbp-60h]
  __int64 v37; // [rsp+20h] [rbp-60h]
  __int64 v38; // [rsp+28h] [rbp-58h]
  __int64 v39; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-28h] BYREF
  const UNICODE_STRING *v41; // [rsp+60h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-18h] BYREF
  HANDLE v43; // [rsp+70h] [rbp-10h]
  HANDLE v44; // [rsp+C0h] [rbp+40h] BYREF

  v44 = a3;
  v6 = a6;
  v8 = a5;
  v41 = 0LL;
  v9 = a4;
  Handle = 0LL;
  *a6 = 0;
  v11 = 0;
  KeyHandle = 0LL;
  v12 = v8;
  if ( !a3 )
  {
    DriverDatabaseCompositeMappedPropertyKeys = DrvDbOpenDriverDatabaseRegKey(
                                                  (_QWORD *)a1,
                                                  a2,
                                                  1u,
                                                  0,
                                                  (__int64)&Handle,
                                                  0LL);
    if ( DriverDatabaseCompositeMappedPropertyKeys < 0 )
      goto LABEL_51;
    a3 = Handle;
    v8 = v12;
  }
  DriverDatabaseCompositeMappedPropertyKeys = DrvDbGetDriverDatabaseCompositeMappedPropertyKeys(
                                                a1,
                                                a2,
                                                a3,
                                                a4,
                                                v36,
                                                v9,
                                                v8,
                                                v6);
  if ( DriverDatabaseCompositeMappedPropertyKeys >= 0 )
  {
    v14 = *v6;
    if ( (_DWORD)v14 )
    {
      if ( v9 )
        v9 += 20 * v14;
      if ( (unsigned int)v14 <= v12 )
        v12 -= v14;
      else
        v12 = 0;
    }
    DriverDatabaseCompositeMappedPropertyKeys = DrvDbFindDatabaseNode(a1, a2, &v41);
    if ( DriverDatabaseCompositeMappedPropertyKeys >= 0 )
    {
      if ( (*(_DWORD *)&v41[4].Length & 0x10) == 0 )
        goto LABEL_34;
      LOBYTE(v38) = 0;
      LODWORD(v37) = 1;
      DriverDatabaseCompositeMappedPropertyKeys = DrvDbOpenObjectRegKey(
                                                    (__int64 *)a1,
                                                    *(__int64 **)(a1 + 40),
                                                    1u,
                                                    a2,
                                                    v37,
                                                    v38,
                                                    &KeyHandle,
                                                    0LL,
                                                    0LL);
      if ( DriverDatabaseCompositeMappedPropertyKeys < 0 )
        goto LABEL_51;
      v15 = KeyHandle;
      v16 = &off_140004D70;
      LODWORD(a6) = 0;
      v43 = KeyHandle;
      v17 = 0;
      while ( 1 )
      {
        v18 = (const WCHAR *)v16[2];
        LODWORD(v39) = 0;
        Value = RegRtlQueryValue(v15, v18, 0LL, 0LL, (unsigned int *)&v39);
        DriverDatabaseCompositeMappedPropertyKeys = Value;
        if ( Value != -1073741772 )
        {
          if ( Value && Value != -1073741789 )
          {
LABEL_24:
            if ( DriverDatabaseCompositeMappedPropertyKeys < 0 )
              break;
            if ( v11 )
            {
              if ( v9 )
                v9 += 20LL * v11;
              v22 = v12;
              v23 = v12 - v11;
              v12 = 0;
              v24 = v11 <= v22;
              v25 = *v6;
              if ( v24 )
                v12 = v23;
              if ( v25 + v11 < v25 )
              {
LABEL_49:
                *v6 = 0;
LABEL_50:
                DriverDatabaseCompositeMappedPropertyKeys = -1073741675;
                break;
              }
              *v6 = v25 + v11;
            }
            if ( (*(_DWORD *)&v41[4].Length & 4) != 0 )
            {
              DriverDatabaseCompositeMappedPropertyKeys = 0;
              break;
            }
LABEL_34:
            v26 = &off_140004B90;
            v27 = (unsigned int *)Handle;
            if ( v44 )
              v27 = (unsigned int *)v44;
            v28 = 0LL;
            v29 = 0;
            a6 = v27;
            while ( 1 )
            {
              v30 = (const WCHAR *)v26[2];
              LODWORD(v44) = 0;
              v31 = RegRtlQueryValue(v27, v30, 0LL, 0LL, (unsigned int *)&v44);
              DriverDatabaseCompositeMappedPropertyKeys = v31;
              if ( v31 != -1073741772 )
              {
                if ( v31 && v31 != -1073741789 )
                {
LABEL_46:
                  if ( DriverDatabaseCompositeMappedPropertyKeys >= 0 && a5 < *v6 )
                    DriverDatabaseCompositeMappedPropertyKeys = -1073741789;
                  goto LABEL_51;
                }
                if ( v9 && (unsigned int)v28 < v12 )
                {
                  v32 = (__int64 *)*v26;
                  v33 = 5 * v28;
                  v28 = (unsigned int)(v28 + 1);
                  *(_OWORD *)(v9 + 4 * v33) = *(_OWORD *)*v26;
                  *(_DWORD *)(v9 + 4 * v33 + 16) = *((_DWORD *)v32 + 4);
                }
                v34 = *v6 + 1;
                if ( v34 < *v6 )
                  goto LABEL_49;
                *v6 = v34;
              }
              v27 = a6;
              DriverDatabaseCompositeMappedPropertyKeys = 0;
              ++v29;
              v26 += 5;
              if ( v29 >= 0xC )
                goto LABEL_46;
            }
          }
          if ( v9 && (unsigned int)a6 < v12 )
          {
            v20 = (__int64 *)*v16;
            v21 = 5LL * (unsigned int)a6;
            LODWORD(a6) = (_DWORD)a6 + 1;
            *(_OWORD *)(v9 + 4 * v21) = *(_OWORD *)v20;
            *(_DWORD *)(v9 + 4 * v21 + 16) = *((_DWORD *)v20 + 4);
          }
          if ( v11 + 1 < v11 )
            goto LABEL_50;
          ++v11;
        }
        v15 = v43;
        DriverDatabaseCompositeMappedPropertyKeys = 0;
        ++v17;
        v16 += 5;
        if ( v17 >= 4 )
          goto LABEL_24;
      }
    }
  }
LABEL_51:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverDatabaseCompositeMappedPropertyKeys;
}
