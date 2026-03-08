/*
 * XREFs of RtlUnwindEx @ 0x1402809E0
 * Callers:
 *     RtlUnwind @ 0x1403BE7D0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1403D2190 (__C_specific_handler.c)
 *     KiSystemServiceHandler @ 0x14042AF80 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlpCopyContext @ 0x140280F40 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x140281130 (RtlLookupFunctionEntry.c)
 *     RtlpxVirtualUnwind @ 0x140281720 (RtlpxVirtualUnwind.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     RtlGuardRestoreContext @ 0x1402D851C (RtlGuardRestoreContext.c)
 *     KeQueryCurrentStackInformation @ 0x1402E1E00 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x1402E6750 (RtlpGetStackLimitsEx.c)
 *     RtlpGetStackLimits @ 0x1403129F0 (RtlpGetStackLimits.c)
 *     RtlInitializeExtendedContext @ 0x140364A10 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140364A90 (RtlGetExtendedContextLength.c)
 *     RtlVirtualUnwind @ 0x140364D20 (RtlVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x140364DF0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140364EE0 (RtlInitializeExtendedContext2.c)
 *     RtlpIsFrameInBounds @ 0x1403BFA10 (RtlpIsFrameInBounds.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x140415150 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1404206E0 (RtlCaptureContext2.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140421710 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RtlUnwindEx(ULONG_PTR a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int *a5, __int64 a6)
{
  unsigned int *v6; // r14
  __int64 v8; // r13
  char v10; // di
  unsigned int v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  unsigned int *v16; // r12
  unsigned int *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // r13
  int v20; // r9d
  int v21; // eax
  ULONG_PTR v22; // rbx
  int v23; // r15d
  bool v24; // zf
  int v25; // ebx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  int v28; // ecx
  int v29; // ecx
  unsigned int *v30; // rax
  int v31; // et0
  char v32; // al
  unsigned int *v33; // rax
  _DWORD *v34; // r15
  unsigned int *v36; // rbx
  int v37; // r9d
  int v38; // r10d
  __int64 v39; // r11
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  void *v43; // rsp
  void *v44; // rsp
  unsigned int v45; // [rsp+60h] [rbp+0h] BYREF
  int v46; // [rsp+64h] [rbp+4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+8h] BYREF
  ULONG_PTR v48; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v49; // [rsp+78h] [rbp+18h] BYREF
  __int64 v50; // [rsp+80h] [rbp+20h] BYREF
  __int64 v51; // [rsp+88h] [rbp+28h] BYREF
  unsigned int *v52; // [rsp+90h] [rbp+30h]
  _QWORD *v53; // [rsp+98h] [rbp+38h]
  __int64 v54; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v55; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v56; // [rsp+B0h] [rbp+50h]
  __int64 v57; // [rsp+B8h] [rbp+58h]
  __int64 v58; // [rsp+C0h] [rbp+60h]
  __int64 v59; // [rsp+C8h] [rbp+68h]
  _QWORD v60[10]; // [rsp+D0h] [rbp+70h] BYREF
  unsigned int *v61; // [rsp+120h] [rbp+C0h]
  __int128 v62; // [rsp+128h] [rbp+C8h] BYREF
  __int64 v63; // [rsp+138h] [rbp+D8h]
  _QWORD v64[20]; // [rsp+140h] [rbp+E0h] BYREF

  v6 = a5;
  v8 = a6;
  v59 = a2;
  v53 = a3;
  v58 = a4;
  v52 = a5;
  v57 = a6;
  memset(v60, 0, sizeof(v60));
  memset(v64, 0, 0x98uLL);
  v50 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  v55 = 0LL;
  v45 = 0;
  v48 = 0LL;
  v46 = 0;
  KeQueryCurrentStackInformation(&v46, &v48, &v49);
  v10 = v46 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v48, &v49) )
LABEL_68:
    RtlRaiseStatus(3221225512LL);
  v11 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v11 = 1048715;
    if ( (a5[12] & 0x100080) != 0x100080 )
    {
      RtlGetExtendedContextLength(1048715LL, &v45);
      v41 = v45 + 15LL;
      if ( v41 <= v45 )
        v41 = 0xFFFFFFFFFFFFFF0LL;
      v42 = v41 & 0xFFFFFFFFFFFFFFF0uLL;
      v43 = alloca(v42);
      v44 = alloca(v42);
      v6 = &v45;
      v52 = &v45;
      RtlInitializeExtendedContext(&v45, 1048715LL, &v54);
    }
  }
  RtlGetExtendedContextLength2(v11, &v45, 0LL);
  v12 = v45 + 15LL;
  if ( v12 <= v45 )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  v16 = &v45;
  v61 = &v45;
  RtlInitializeExtendedContext2(&v45, v11, &v54, 0LL);
  v17 = v52;
  RtlCaptureContext2(v52);
  if ( a6 )
    *(_BYTE *)(a6 + 6) = 1;
  if ( !a3 )
  {
    LODWORD(v64[0]) = -1073741785;
    v64[1] = 0LL;
    v40 = *((_QWORD *)v17 + 31);
    LODWORD(v64[3]) = 0;
    v53 = v64;
    v64[2] = v40;
  }
  v45 = 2;
  if ( !a1 )
    v45 = 6;
  BugCheckParameter1 = 0LL;
  while ( 1 )
  {
    v56 = *((_QWORD *)v6 + 31);
    v18 = v56;
    v54 = RtlLookupFunctionEntry(v56, &v55, v8);
    RtlpCopyContext(v16, v6);
    v19 = v55;
    v63 = 0LL;
    v62 = 0LL;
    v21 = RtlpxVirtualUnwind(
            2,
            v55,
            v18,
            v20,
            (__int64)v16,
            0LL,
            (__int64)&v51,
            (__int64)&BugCheckParameter1,
            (__int64)&v50,
            (__int64)&v62);
    if ( v21 < 0 )
      RtlRaiseStatus((unsigned int)v21);
    v22 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 >= v49 || BugCheckParameter1 < v48 )
    {
      if ( v10 != 1 )
        goto LABEL_68;
      v10 = 2;
      if ( !(unsigned __int8)RtlpGetStackLimitsEx(BugCheckParameter1, 0LL) )
        goto LABEL_68;
      v22 = BugCheckParameter1;
    }
    if ( a1 && !v10 && a1 < v22 )
      goto LABEL_68;
    if ( v50 )
    {
      v23 = 0;
      v60[4] = v59;
      while ( 1 )
      {
        v24 = a1 == v22;
        v25 = v45;
        if ( v24 )
          v25 = v45 | 0x20;
        v26 = v58;
        v27 = v53;
        *((_DWORD *)v53 + 1) = v25;
        *((_QWORD *)v6 + 15) = v26;
        v60[0] = v56;
        v60[2] = v54;
        v60[6] = v50;
        v60[7] = v51;
        v60[8] = v57;
        v60[1] = v19;
        v60[3] = BugCheckParameter1;
        v60[5] = v6;
        LODWORD(v60[9]) = v23;
        if ( (v6[12] & 0x100040) == 0x100040 )
        {
          v28 = RtlpExecuteHandlerForUnwind(v27, BugCheckParameter1, v6, v60);
        }
        else
        {
          v28 = RtlpExecuteHandlerForUnwind(v27, BugCheckParameter1, v6, v60);
          if ( (v6[12] & 0x100040) == 0x100040 )
            v6[12] &= ~0x40u;
        }
        v45 = v25 & 0xFFFFFF9F;
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 != 2 )
            RtlRaiseStatus(3221225510LL);
          v19 = v60[1];
          v36 = v52;
          v56 = v60[0];
          v55 = v60[1];
          v54 = v60[2];
          RtlpCopyContext(v52, v60[5]);
          v6 = v36;
          v16 = v61;
          RtlpCopyContext(v61, v36);
          v50 = RtlVirtualUnwind(2, v19, v38, v37, v39, (__int64)&v51, (__int64)&BugCheckParameter1, 0LL);
          if ( v50 != v60[6] || (v22 = BugCheckParameter1, BugCheckParameter1 != v60[3]) || v51 != v60[7] )
            __fastfail(0x27u);
          v23 = v60[9];
          v45 |= 0x40u;
          v57 = v60[8];
          if ( (unsigned __int8)RtlpIsFrameInBounds(&v48, BugCheckParameter1, &v49) || v10 != 1 )
            goto LABEL_31;
          v10 = 2;
          RtlpGetStackLimitsEx(v22, 0LL);
        }
        else
        {
          if ( BugCheckParameter1 != a1 )
          {
            v30 = v6;
            v6 = v16;
            v16 = v30;
          }
          v31 = _mm_getcsr();
          v46 = v31;
          v6[13] = v31;
          v6[70] = v31;
        }
        v22 = BugCheckParameter1;
LABEL_31:
        if ( (v45 & 0x40) == 0 )
        {
          v18 = v56;
          goto LABEL_33;
        }
      }
    }
    if ( v22 != a1 )
    {
      v33 = v6;
      v6 = v16;
      v16 = v33;
    }
LABEL_33:
    v32 = 0;
    if ( v10 != 2 )
      v32 = v10;
    if ( (v22 & 7) != 0 || v22 < v48 || v22 >= v49 )
      break;
    if ( v22 == a1 )
      goto LABEL_42;
    v8 = v57;
    v10 = v32;
  }
  if ( v22 == a1 )
  {
LABEL_42:
    v34 = v53;
    *((_QWORD *)v6 + 15) = v58;
    if ( *v34 != -2147483607 )
    {
      *((_QWORD *)v6 + 31) = v59;
      if ( *v34 != -2147483610 )
        *v34 = -1073741785;
    }
    return RtlGuardRestoreContext(v6, v34);
  }
  else
  {
    if ( v18 == *((_QWORD *)v6 + 31) )
      RtlRaiseStatus(3221225727LL);
    return ZwRaiseException(v53, v6, 0LL);
  }
}
