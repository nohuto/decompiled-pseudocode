_DWORD *__fastcall EtwpTraceIo(int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  char *v4; // rsi
  int ThreadServerSilo; // r10d
  char v9; // cl
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned __int16 v12; // r9
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  __int64 *v18; // rcx
  __int128 *v19; // rax
  unsigned __int16 v20; // bx
  _DWORD *result; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int128 *v24; // r9
  __int128 v25; // [rsp+30h] [rbp-49h] BYREF
  __int128 v26; // [rsp+40h] [rbp-39h]
  __int128 v27; // [rsp+50h] [rbp-29h]
  __int64 v28; // [rsp+60h] [rbp-19h]
  __int128 v29; // [rsp+68h] [rbp-11h] BYREF
  __int128 v30; // [rsp+78h] [rbp-1h]
  __int128 *v31; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+90h] [rbp+17h]
  __int128 v33; // [rsp+98h] [rbp+1Fh] BYREF

  v3 = *(_QWORD *)(a3 + 152);
  v4 = *(char **)(a3 + 184);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( v3 )
    ThreadServerSilo = PsGetThreadServerSilo(v3);
  else
    ThreadServerSilo = 0;
  v9 = *v4;
  v10 = *(_DWORD *)(a3 + 16);
  if ( *v4 != 9 )
  {
    v11 = *(_DWORD *)(a3 + 56);
    *(_QWORD *)&v25 = __PAIR64__(v10, a2);
    *(_QWORD *)&v27 = a3;
    v12 = (v9 != 3) + 266;
    *((_QWORD *)&v25 + 1) = v11;
    *(_QWORD *)&v26 = *((_QWORD *)v4 + 3);
    *((_QWORD *)&v27 + 1) = *((_QWORD *)v4 + 1);
    if ( v3 )
      v13 = *(_DWORD *)(v3 + 1232);
    else
      v13 = -1;
    LODWORD(v28) = v13;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      HIDWORD(v25) = 1;
    }
    else
    {
      v14 = a1 & 0xFFFFFF;
      if ( v14 == 5460546 || v14 == 5467492 )
        HIDWORD(v25) = 2;
    }
    if ( (v10 & 8) != 0 )
    {
      v22 = *(_QWORD *)(a3 + 24);
      if ( !v22 )
        goto LABEL_15;
      v15 = *(_QWORD *)(v22 + 192);
      if ( !v15 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v22 + 184) + 48LL);
        if ( !v15 )
          goto LABEL_15;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a3 + 192);
      if ( !v15 )
      {
        v16 = *(unsigned __int8 *)(a3 + 67);
        v17 = *(char *)(a3 + 66);
        if ( v16 <= v17 )
        {
          v18 = (__int64 *)(v4 + 48);
          do
          {
            v15 = *v18;
            if ( *v18 )
              goto LABEL_17;
            LOBYTE(v16) = v16 + 1;
            v18 += 9;
          }
          while ( (unsigned __int8)v16 <= v17 );
        }
LABEL_15:
        *((_QWORD *)&v26 + 1) = 0LL;
LABEL_18:
        v19 = &v25;
        v32 = 52LL;
        v20 = v12;
        goto LABEL_19;
      }
    }
LABEL_17:
    *((_QWORD *)&v26 + 1) = *(_QWORD *)(v15 + 24);
    goto LABEL_18;
  }
  *(_QWORD *)&v29 = __PAIR64__(v10, a2);
  v20 = 270;
  *((_QWORD *)&v29 + 1) = *((_QWORD *)v4 + 1);
  *(_QWORD *)&v30 = a3;
  if ( v3 )
    v23 = *(_DWORD *)(v3 + 1232);
  else
    v23 = -1;
  DWORD2(v30) = v23;
  v19 = &v29;
  v32 = 28LL;
LABEL_19:
  v31 = v19;
  EtwTraceSiloKernelEvent(ThreadServerSilo, (unsigned int)&v31, 1, 256, v20, 4200451);
  result = (_DWORD *)(EtwpHostSiloState + 4540);
  if ( EtwpHostSiloState != -4540 && (*result & 0x100) != 0 )
  {
    v33 = 0LL;
    if ( (unsigned int)IoGetActivityIdIrp(a3, &v33) )
      v24 = 0LL;
    else
      v24 = &v33;
    return (_DWORD *)EtwpDiskProvTraceDisk(v20, &v31, v3, v24);
  }
  return result;
}
