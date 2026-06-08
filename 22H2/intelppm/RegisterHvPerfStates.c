/*
 * XREFs of RegisterHvPerfStates @ 0x1C0031E50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     GetPerfDomain @ 0x1C0026628 (GetPerfDomain.c)
 *     RegisterHvCap @ 0x1C0031150 (RegisterHvCap.c)
 *     DecodeAcpiPStates @ 0x1C0038668 (DecodeAcpiPStates.c)
 *     DecodeAcpiTStates @ 0x1C003880C (DecodeAcpiTStates.c)
 */

__int64 __fastcall RegisterHvPerfStates(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r12d
  unsigned int *v4; // rbx
  unsigned int *v5; // rsi
  unsigned int v6; // r15d
  unsigned int *v7; // rdi
  unsigned int v8; // r14d
  int v9; // r14d
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // rax
  unsigned int PerfDomain; // eax
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rax
  char v22; // cl
  unsigned int v23; // r10d
  unsigned int v24; // eax
  __int64 v25; // rdx
  char v26; // cl
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  char v29; // cl
  _DWORD *v30; // rbx
  int v31; // eax
  __int64 v33; // [rsp+28h] [rbp-61h]
  _DWORD *v34; // [rsp+40h] [rbp-49h] BYREF
  __int64 v35; // [rsp+48h] [rbp-41h] BYREF
  __int64 v36; // [rsp+50h] [rbp-39h] BYREF
  __int128 v37; // [rsp+58h] [rbp-31h] BYREF
  __int128 v38; // [rsp+68h] [rbp-21h]
  _OWORD v39[6]; // [rsp+78h] [rbp-11h] BYREF
  int v40; // [rsp+F0h] [rbp+67h] BYREF
  int v41; // [rsp+F8h] [rbp+6Fh] BYREF
  int v42; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v43; // [rsp+108h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 272);
  v2 = 0;
  v35 = 0LL;
  v40 = 0;
  v34 = 0LL;
  v4 = 0LL;
  v36 = 0LL;
  v5 = 0LL;
  v41 = 0;
  v6 = 0;
  v42 = 0;
  v7 = 0LL;
  v8 = 0;
  v37 = 0LL;
  LODWORD(v37) = 62;
  memset(v39, 0, 32);
  v38 = 0LL;
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( (v1 & 0x40000000) != 0 )
      v4 = *(unsigned int **)(a1 + 440);
    else
      v4 = *(unsigned int **)(a1 + 432);
    v6 = *v4;
  }
  if ( (v1 & 0x3300000) != 0 )
    v8 = **(_DWORD **)(a1 + 488);
  if ( !(v8 + v6) )
    return (unsigned int)-1073741823;
  if ( v6 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xC28uLL, 0x72637250u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0xC28uLL);
  }
  if ( !v8 )
    goto LABEL_18;
  v11 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xCB8uLL, 0x72637250u);
  v7 = v11;
  if ( v11 )
  {
    memset(v11, 0, 0xCB8uLL);
LABEL_18:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001C3E8,
      0LL);
    PerfDomain = GetPerfDomain(a1, (__int64)v39, &v42);
    v43 = PerfDomain;
    if ( v42 == 253 )
    {
      v2 = 1;
    }
    else if ( v42 == 254 )
    {
      v2 = 2;
    }
    if ( v6 )
    {
      v5[771] = PerfDomain;
      v5[772] = v2;
      if ( (int)DecodeAcpiPStates(
                  a1,
                  (int)v5 + 3096,
                  (int)v5 + 3104,
                  (unsigned int)&v35,
                  (__int64)&v36,
                  (__int64)&v40,
                  (__int64)&v41) >= 0 )
      {
        v13 = v35;
        v14 = 0LL;
        v15 = v36;
        *((_QWORD *)&v37 + 1) = v5;
        *v5 = v6;
        while ( 1 )
        {
          v16 = 64;
          if ( v6 < 0x40 )
            v16 = v6;
          if ( (unsigned int)v14 >= v16 )
            break;
          v17 = 6 * v14;
          v5[2 * v17 + 10] = v4[12 * v14 + 2];
          v5[2 * v17 + 11] = v4[12 * v14 + 4];
          v5[2 * v17 + 12] = v4[12 * v14 + 5];
          v5[2 * v17 + 13] = v4[12 * v14 + 3];
          v18 = v13;
          if ( !v13 )
            v18 = *(_QWORD *)&v4[12 * v14 + 10];
          *(_QWORD *)&v5[12 * v14 + 6] = v18;
          v19 = v15;
          if ( !v15 )
            v19 = *(_QWORD *)&v4[12 * v14 + 10];
          v20 = v40;
          *(_QWORD *)&v5[12 * v14 + 8] = v19;
          v21 = *(_QWORD *)&v4[12 * v14 + 6] << v20;
          v22 = v41;
          *(_QWORD *)&v5[12 * v14 + 2] = v21;
          *(_QWORD *)&v5[12 * v14 + 4] = *(_QWORD *)&v4[12 * v14 + 8] << v22;
          v14 = (unsigned int)(v14 + 1);
        }
      }
      PerfDomain = v43;
    }
    if ( v8 )
    {
      v7[803] = PerfDomain;
      v7[804] = v2;
      if ( (int)DecodeAcpiTStates(
                  a1,
                  (int)v7 + 3224,
                  (int)v7 + 3232,
                  (unsigned int)&v35,
                  (__int64)&v36,
                  (__int64)&v40,
                  (__int64)&v41) >= 0 )
      {
        v23 = 0;
        *(_QWORD *)&v38 = v7;
        *((_QWORD *)v7 + 405) = v35;
        *((_QWORD *)v7 + 406) = v36;
        *v7 = v8;
        while ( 1 )
        {
          v24 = 100;
          if ( v8 < 0x64 )
            v24 = v8;
          if ( v23 >= v24 )
            break;
          v25 = *(_QWORD *)(a1 + 488);
          v26 = v40;
          v27 = 8LL * v23;
          v7[v27 + 6] = *(_DWORD *)(v25 + 20LL * v23 + 4);
          v7[v27 + 7] = *(_DWORD *)(v25 + 20LL * v23 + 12);
          v7[v27 + 8] = *(_DWORD *)(v25 + 20LL * v23 + 8);
          v28 = (unsigned __int64)*(unsigned int *)(v25 + 20LL * v23 + 16) << v26;
          v29 = v41;
          *(_QWORD *)&v7[v27 + 2] = v28;
          *(_QWORD *)&v7[v27 + 4] = (unsigned __int64)*(unsigned int *)(v25 + 20LL * v23++ + 20) << v29;
        }
      }
    }
    if ( v5 )
      v5[770] = dword_1C001C830;
    if ( v7 )
      v7[802] = dword_1C001C830;
    ++dword_1C001C830;
    v9 = 0;
    ResetEnumerationContext((__int64 *)v39);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v39, &v34) )
    {
      do
      {
        v30 = v34;
        RegisterHvCap(v34);
        DWORD1(v37) = v30[12];
        if ( qword_1C001C660 )
          v31 = qword_1C001C660(&v37);
        else
          v31 = -1073741822;
        if ( v31 < 0 )
        {
          v9 = v31;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v33) = v31;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              3u,
              0xFu,
              (__int64)&WPP_1179e57565003c44c8b3022adf67a914_Traceguids,
              v33);
          }
        }
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v39, &v34) );
      if ( v9 < 0 )
      {
        if ( v5 )
          *v5 = 0;
        if ( v7 )
          *v7 = 0;
        ResetEnumerationContext((__int64 *)v39);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v39, &v34) )
        {
          DWORD1(v37) = v34[12];
          if ( qword_1C001C660 )
            qword_1C001C660(&v37);
        }
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001C3E8);
    goto LABEL_63;
  }
  v9 = -1073741670;
LABEL_63:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v9;
}
