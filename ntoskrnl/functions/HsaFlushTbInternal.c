void __fastcall HsaFlushTbInternal(
        _QWORD *a1,
        int a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int a7,
        __int64 a8)
{
  _QWORD *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  char v13; // r14
  __int64 v14; // r13
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edx
  int v20; // r12d
  char *v21; // r12
  __int64 v22; // rax
  char NextFlushDevice; // al
  char v24; // r13
  struct _EX_RUNDOWN_REF *v25; // rcx
  char v26; // [rsp+48h] [rbp-59h]
  char v27; // [rsp+49h] [rbp-58h] BYREF
  bool v28[2]; // [rsp+4Ah] [rbp-57h] BYREF
  int v29; // [rsp+4Ch] [rbp-55h] BYREF
  int v30; // [rsp+50h] [rbp-51h]
  int v31; // [rsp+54h] [rbp-4Dh]
  char *v32; // [rsp+58h] [rbp-49h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+60h] [rbp-41h] BYREF
  __int64 v34; // [rsp+68h] [rbp-39h]
  __int64 v35; // [rsp+70h] [rbp-31h] BYREF
  _QWORD *v36; // [rsp+78h] [rbp-29h] BYREF
  unsigned __int64 v37; // [rsp+80h] [rbp-21h] BYREF
  __int64 v38; // [rsp+88h] [rbp-19h]
  unsigned __int64 v39; // [rsp+90h] [rbp-11h] BYREF
  __int64 v40; // [rsp+98h] [rbp-9h]
  unsigned __int64 v41; // [rsp+A0h] [rbp-1h]
  _QWORD v42[2]; // [rsp+A8h] [rbp+7h] BYREF

  RunRef = 0LL;
  v32 = 0LL;
  v9 = a1;
  v30 = 0;
  v10 = *a1;
  v29 = 0;
  v35 = 0LL;
  if ( (*(_QWORD *)(v10 + 8224) & 0x10) == 0 )
    return;
  LOWORD(v11) = 2;
  LOWORD(v12) = 0;
  v34 = 2LL;
  v38 = 2LL;
  v40 = 0LL;
  v37 = ((unsigned __int64)a3 << 32) | 0x3000000000000000LL;
  v41 = 0x4000000000000000LL;
  if ( a4 )
    goto LABEL_6;
  if ( a2 != -1 )
  {
    LOWORD(v11) = 6;
    v34 = 6LL;
    v38 = 6LL;
    v37 = ((unsigned __int64)a3 << 32) | a2 & 0xFFFFF | 0x3000000000000000LL;
    LOWORD(v12) = 4;
    v40 = 4LL;
    v41 = ((unsigned __int16)a2 & 0xFF00 | ((a2 & 0xF0000 | ((unsigned __int64)(unsigned __int8)a2 << 8)) << 32) | 0x40000000000000LL) << 8;
LABEL_6:
    if ( a7 )
    {
      v13 = 1;
    }
    else
    {
      v11 = v11 & 0xFFE | 0x7FFFFFFFFFFFF001LL;
      v13 = 0;
      v38 = v11;
      v12 = v12 & 0xFFE | 0x7FFFFFFFFFFFF001LL;
      v34 = v11;
      v40 = v12;
    }
    goto LABEL_9;
  }
  v13 = 0;
  LOWORD(v11) = -4093;
  v34 = 0x7FFFFFFFFFFFF003LL;
  v38 = 0x7FFFFFFFFFFFF003LL;
LABEL_9:
  v14 = a5;
  if ( a5 || (v26 = 0, a6) )
    v26 = 1;
  v27 = 0;
  v15 = 0LL;
  v30 = 0;
  v16 = 0LL;
  v31 = 0;
  while ( 1 )
  {
    if ( v13 )
    {
      v17 = *(_QWORD *)(a8 + 8 * v16);
      v15 = v17 >> 12;
      LODWORD(v18) = 9 * ((v17 >> 10) & 3);
      v19 = v17 & 0x3FF;
      if ( v19 )
      {
        _BitScanReverse64((unsigned __int64 *)&v18, v15 ^ (v15 + v19 * (1LL << v18)));
        LODWORD(v18) = v18 + 1;
        v15 &= ~((1LL << v18) - 1);
      }
      v30 = v18;
      if ( (_DWORD)v18 )
      {
        v20 = 1;
        v15 |= (1LL << ((unsigned __int8)v18 - 1)) - 1;
      }
      else
      {
        v20 = 0;
      }
      v30 = v20;
      v38 = (v15 << 12) | v11 & 0xFFE | v20 & 1;
LABEL_22:
      HsaIommuSendCommand(v9, &v37, 0LL);
      LOWORD(v11) = v38;
      LODWORD(v16) = v31;
      v34 = v38;
      goto LABEL_23;
    }
    if ( !(_DWORD)v16 )
      goto LABEL_22;
LABEL_23:
    if ( v26 && (v13 || !(_DWORD)v16) )
    {
      v36 = a6;
      if ( v14 )
      {
        v21 = &v27;
        v35 = *(_QWORD *)(v14 + 48);
        v29 = *(_DWORD *)(v14 + 60);
        RunRef = (PEX_RUNDOWN_REF)(v14 + 64);
        v22 = *(_QWORD *)(v14 + 88);
        v32 = &v27;
        NextFlushDevice = *(_BYTE *)(v22 + 48) & 1;
      }
      else
      {
        NextFlushDevice = HalpIommuGetNextFlushDevice(a6, &v36, &v35, &v29, v28, &RunRef, &v32);
        v21 = v32;
      }
      if ( NextFlushDevice )
      {
        v24 = v30;
        v11 = v41;
        while ( 1 )
        {
          if ( !*v21 )
          {
            if ( !ExAcquireRundownProtection_0(RunRef) )
              goto LABEL_37;
            *v21 = 1;
          }
          v39 = (unsigned __int16)v35 | v11 & 0xFFFF000000FF0000uLL | ((((unsigned __int64)(unsigned __int16)v35 << 8) | (unsigned __int8)v29) << 24);
          if ( v13 )
            v40 = (v15 << 12) | v12 & 0xFFE | v24 & 1;
          HsaIommuSendCommand(a1, &v39, 0LL);
          LOWORD(v12) = v40;
          v11 = v39;
LABEL_37:
          if ( !a6 || !HalpIommuGetNextFlushDevice(a6, &v36, &v35, &v29, v28, &RunRef, &v32) )
          {
            v14 = a5;
            v41 = v11;
            LOWORD(v11) = v34;
            break;
          }
          v21 = v32;
        }
      }
      LODWORD(v16) = v31;
    }
    v16 = (unsigned int)(v16 + 1);
    v31 = v16;
    if ( (unsigned int)v16 >= a7 )
      break;
    v9 = a1;
  }
  v42[1] = 0LL;
  v42[0] = 0x1000000000000000LL;
  HsaIommuSendCommand(a1, v42, 0LL);
  if ( v27 )
  {
    RunRef = (PEX_RUNDOWN_REF)(v14 + 64);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v14 + 64));
  }
  if ( a6 )
  {
    v36 = a6;
    while ( HalpIommuGetNextFlushDevice(a6, &v36, &v35, &v29, v28, &RunRef, &v32) )
    {
      if ( *v32 )
      {
        v25 = RunRef;
        *v32 = 0;
        ExReleaseRundownProtection_0(v25);
      }
    }
  }
}
