/*
 * XREFs of IvtFlushTbInternal @ 0x1403ABA60
 * Callers:
 *     IvtFlushDomainTb @ 0x140456980 (IvtFlushDomainTb.c)
 *     IvtAttachDeviceDomainInternal @ 0x140529388 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushTb @ 0x14052A210 (IvtFlushTb.c)
 *     IvtInitializeIommu @ 0x140A87060 (IvtInitializeIommu.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     IvtIommuWaitCommand @ 0x1402F4874 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1402F49A4 (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HalpIommuGetNextFlushDevice @ 0x140513058 (HalpIommuGetNextFlushDevice.c)
 */

void __fastcall IvtFlushTbInternal(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v10; // rcx
  char v11; // r10
  __int64 v12; // rbx
  char v13; // r12
  char v14; // di
  char v15; // al
  unsigned int v16; // r9d
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned int v22; // edx
  __int64 v23; // rdi
  int v24; // r14d
  bool v25; // cl
  struct _EX_RUNDOWN_REF *v26; // rax
  char *v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rax
  int v30; // r9d
  unsigned __int64 v31; // r12
  char v32; // bl
  BOOLEAN v33; // al
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int16 v36; // dx
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rax
  _QWORD *v45; // rbx
  struct _EX_RUNDOWN_REF *v46; // rcx
  char *v47; // rax
  char v49; // [rsp+49h] [rbp-78h]
  bool v50; // [rsp+4Ah] [rbp-77h] BYREF
  char v51; // [rsp+4Bh] [rbp-76h]
  char v52; // [rsp+4Ch] [rbp-75h]
  char v53; // [rsp+4Dh] [rbp-74h] BYREF
  int v54; // [rsp+50h] [rbp-71h] BYREF
  int v55; // [rsp+54h] [rbp-6Dh]
  unsigned int v56; // [rsp+58h] [rbp-69h]
  PEX_RUNDOWN_REF RunRef; // [rsp+60h] [rbp-61h] BYREF
  char *v58; // [rsp+68h] [rbp-59h] BYREF
  __int64 v59; // [rsp+70h] [rbp-51h] BYREF
  _QWORD *v60; // [rsp+78h] [rbp-49h] BYREF
  __int64 v61; // [rsp+80h] [rbp-41h]
  int v62; // [rsp+88h] [rbp-39h]
  unsigned __int64 v63; // [rsp+90h] [rbp-31h]
  __int64 v64; // [rsp+98h] [rbp-29h]
  __int64 v65; // [rsp+A0h] [rbp-21h]
  __int128 v66; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v67; // [rsp+B8h] [rbp-9h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = a4;
  v64 = a8;
  v62 = a2;
  v65 = a5;
  RunRef = 0LL;
  v58 = 0LL;
  v50 = 0;
  v54 = 0;
  v59 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  if ( a4 )
  {
    if ( !a3 )
    {
      v12 = 18LL;
LABEL_4:
      v49 = 0;
      v13 = 0;
      goto LABEL_5;
    }
    if ( a7 && _bittest64((const signed __int64 *)(a1 + 216), 0x27u) )
    {
      v13 = 1;
      v19 = 50LL;
    }
    else
    {
      v13 = 0;
      v19 = 34LL;
    }
    v49 = v13;
    v10 = v64;
    v12 = v19 ^ ((unsigned int)v19 ^ (*(_DWORD *)(a3 + 48) << 16)) & 0xFFFF0000 | 0xC0;
  }
  else
  {
    if ( a2 != -1 )
    {
      v18 = (unsigned __int64)(a2 & 0xFFFFF) << 32;
      if ( a7 )
      {
        v13 = 1;
        v12 = v18 | 0x36;
        v49 = 1;
        goto LABEL_5;
      }
      v12 = v18 | 0x26;
      goto LABEL_4;
    }
    v49 = 0;
    v13 = 0;
    if ( _bittest64((const signed __int64 *)(a1 + 216), 0x27u) )
    {
      *((_QWORD *)&v67 + 1) |= 0x40uLL;
      v17 = 50LL;
    }
    else
    {
      v17 = 34LL;
    }
    v12 = v17 | 0xC0;
  }
LABEL_5:
  v61 = v12;
  *(_QWORD *)&v67 = v12;
  if ( a5 || a6 )
  {
    v14 = 1;
    v15 = 1;
    v51 = 1;
    if ( a7 )
      goto LABEL_9;
  }
  else
  {
    v14 = 0;
    v51 = 0;
  }
  v15 = 0;
LABEL_9:
  v52 = v15;
  v16 = 0;
  v53 = 0;
  v63 = 0LL;
  v55 = 0;
  v56 = 0;
  do
  {
    if ( !v13 && !v15 )
      goto LABEL_12;
    v20 = *(_QWORD *)(v10 + 8LL * v16);
    v21 = v20 >> 12;
    v63 = v20 >> 12;
    LODWORD(v10) = 9 * ((v20 >> 10) & 3);
    v55 = v10;
    v22 = v20 & 0x3FF;
    if ( v22 )
    {
      _BitScanReverse64((unsigned __int64 *)&v10, v21 ^ (v21 + v22 * (1LL << v10)));
      LODWORD(v10) = v10 + 1;
      v55 = v10;
      v21 &= ~((1LL << v10) - 1);
      v63 = v21;
    }
    if ( v13 )
    {
      if ( v11 && (unsigned int)v10 > (*(_WORD *)(a1 + 222) & 0x3Fu) )
      {
        v49 = 0;
        v13 = 0;
        *(_QWORD *)&v67 = v12 & 0xFFFFFFFFFFFFFFCFuLL | 0x20;
      }
      else
      {
        *((_QWORD *)&v67 + 1) = (v21 << 12) | WORD4(v67) & 0xFC0 | (unsigned __int64)(v10 & 0x3F);
      }
    }
    else
    {
LABEL_12:
      if ( v16 )
        goto LABEL_14;
    }
    IvtIommuSendCommand(a1, (unsigned __int64)&v67, 0);
    v12 = v67;
    v16 = v56;
    v11 = a4;
    v61 = v67;
LABEL_14:
    if ( !v14 )
      goto LABEL_15;
    v60 = a6;
    if ( v8 )
    {
      v23 = *(_QWORD *)(v8 + 48);
      v24 = *(_DWORD *)(v8 + 60);
      v59 = v23;
      v54 = v24;
      if ( v11 )
        v25 = 0;
      else
        v25 = (*(_DWORD *)(*(_QWORD *)(v8 + 88) + 48LL) & 0x800) != 0;
      v26 = (struct _EX_RUNDOWN_REF *)(v8 + 64);
      v50 = v25;
      v27 = &v53;
    }
    else
    {
      if ( !v11 )
      {
        if ( !(unsigned __int8)HalpIommuGetNextFlushDevice(
                                 (_DWORD)a6,
                                 (unsigned int)&v60,
                                 (unsigned int)&v59,
                                 (unsigned int)&v54,
                                 (__int64)&v50,
                                 (__int64)&RunRef,
                                 (__int64)&v58) )
          goto LABEL_92;
        v27 = v58;
        v24 = v54;
        v23 = v59;
        v11 = a4;
        goto LABEL_54;
      }
      v28 = *a6;
      v60 = (_QWORD *)v28;
      v50 = 0;
      if ( (_QWORD *)v28 == a6 )
      {
        v8 = v65;
        v59 = 0LL;
        v54 = 0;
        RunRef = 0LL;
        v58 = 0LL;
        goto LABEL_15;
      }
      v29 = *(_QWORD *)(v28 - 40);
      v23 = *(_QWORD *)(v29 + 48);
      v24 = *(_DWORD *)(v29 + 60);
      v26 = (struct _EX_RUNDOWN_REF *)(v29 + 64);
      v27 = (char *)(v28 + 32);
      v59 = v23;
      v54 = v24;
    }
    v58 = v27;
    RunRef = v26;
LABEL_54:
    v30 = v55;
    v31 = v63;
    v32 = v55 - 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !*v27 )
        {
          v33 = ExAcquireRundownProtection_0(RunRef);
          v11 = a4;
          if ( !v33 )
            goto LABEL_85;
          v30 = v55;
          *v27 = 1;
        }
        v66 = 0LL;
        if ( !v11 )
        {
          if ( v62 == -1 )
          {
            if ( !v50 )
            {
              if ( v56 )
                goto LABEL_85;
              v34 = ((unsigned __int64)(unsigned __int16)v23 << 32) | 3;
              if ( _bittest64((const signed __int64 *)(a1 + 224), 0x29u) )
                v34 |= (v23 & 0xF | ((v23 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12;
              *(_QWORD *)&v66 = ((unsigned int)v34 ^ (v24 << 16)) & 0x1F0000 ^ v34;
              goto LABEL_84;
            }
            v35 = v66;
            v36 = 1;
          }
          else
          {
            v36 = WORD4(v66);
            v35 = (unsigned __int64)(v62 & 0xFFFFF) << 32;
          }
          v37 = v35 & 0xFFFFFFFF0000FFF8uLL | ((unsigned __int64)(unsigned __int16)v23 << 16) | 8;
          if ( _bittest64((const signed __int64 *)(a1 + 224), 0x29u) )
            v37 = v35 & 0xFFFFF00000FF8LL | ((unsigned __int16)v23 << 16) | 8 | ((v23 & 0xF | ((v23 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12);
          *(_QWORD *)&v66 = ((unsigned __int16)v37 ^ (unsigned __int16)(16 * v24)) & 0x1F0 ^ v37;
          if ( !a7 )
          {
            v38 = v36 & 0x7FF;
            v39 = 0x7FFFFFFFFFFFF800LL;
            goto LABEL_72;
          }
          if ( !v30 )
          {
            v38 = v36 & 0xFFF;
            v39 = v31 << 12;
LABEL_72:
            v40 = v39 | v38;
LABEL_83:
            *((_QWORD *)&v66 + 1) = v40;
            goto LABEL_84;
          }
          v41 = v36 & 0xFFE | ((v31 | ((1LL << v32) - 1)) << 12) | 1;
          goto LABEL_79;
        }
        v42 = ((unsigned __int64)(unsigned __int16)v23 << 32) | 3;
        if ( _bittest64((const signed __int64 *)(a1 + 224), 0x29u) )
          v42 |= (v23 & 0xF | ((v23 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12;
        *(_QWORD *)&v66 = ((unsigned int)v42 ^ (v24 << 16)) & 0x1F0000 ^ v42;
        if ( !a7 )
        {
          v41 = WORD4(v66) & 0xFFE | 0x7FFFFFFFFFFFF001LL;
LABEL_79:
          *((_QWORD *)&v66 + 1) = v41;
          goto LABEL_84;
        }
        if ( v30 )
        {
          v40 = WORD4(v66) & 0xFFE | ((v31 | ((1LL << v32) - 1)) << 12) | 1;
          goto LABEL_83;
        }
        *((_QWORD *)&v66 + 1) = (v31 << 12) | WORD4(v66) & 0xFFF;
LABEL_84:
        IvtIommuSendCommand(a1, (unsigned __int64)&v66, 0);
        v11 = a4;
LABEL_85:
        if ( !a6 )
          goto LABEL_91;
        if ( v11 )
          break;
        if ( !(unsigned __int8)HalpIommuGetNextFlushDevice(
                                 (_DWORD)a6,
                                 (unsigned int)&v60,
                                 (unsigned int)&v59,
                                 (unsigned int)&v54,
                                 (__int64)&v50,
                                 (__int64)&RunRef,
                                 (__int64)&v58) )
          goto LABEL_91;
        v27 = v58;
        v24 = v54;
        v23 = v59;
        v30 = v55;
        v11 = a4;
      }
      v43 = *v60;
      v60 = (_QWORD *)v43;
      if ( (_QWORD *)v43 == a6 )
        break;
      v44 = *(_QWORD *)(v43 - 40);
      v30 = v55;
      v50 = 0;
      v23 = *(_QWORD *)(v44 + 48);
      v24 = *(_DWORD *)(v44 + 60);
      v27 = (char *)(v43 + 32);
      v59 = v23;
      v58 = v27;
      v54 = v24;
      RunRef = (PEX_RUNDOWN_REF)(v44 + 64);
    }
LABEL_91:
    v12 = v61;
    v13 = v49;
    v8 = v65;
    v14 = v51;
LABEL_92:
    v16 = v56;
LABEL_15:
    v11 = a4;
    ++v16;
    v15 = v52;
    v10 = v64;
    v56 = v16;
  }
  while ( v16 < a7 );
  IvtIommuWaitCommand(a1, 0, 0);
  if ( v53 )
  {
    RunRef = (PEX_RUNDOWN_REF)(v8 + 64);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 64));
  }
  if ( a6 )
  {
    v45 = a6;
    v60 = a6;
    while ( 1 )
    {
      if ( a4 )
      {
        v45 = (_QWORD *)*v45;
        v60 = v45;
        if ( v45 == a6 )
          return;
        v47 = (char *)(v45 + 4);
        v46 = (struct _EX_RUNDOWN_REF *)(*(v45 - 5) + 64LL);
        v58 = (char *)(v45 + 4);
        RunRef = v46;
      }
      else
      {
        if ( !(unsigned __int8)HalpIommuGetNextFlushDevice(
                                 (_DWORD)a6,
                                 (unsigned int)&v60,
                                 (unsigned int)&v59,
                                 (unsigned int)&v54,
                                 (__int64)&v50,
                                 (__int64)&RunRef,
                                 (__int64)&v58) )
          return;
        v46 = RunRef;
        v47 = v58;
        v45 = v60;
      }
      if ( *v47 )
      {
        *v47 = 0;
        ExReleaseRundownProtection_0(v46);
      }
    }
  }
}
