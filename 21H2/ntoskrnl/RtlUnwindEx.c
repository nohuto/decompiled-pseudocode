/*
 * XREFs of RtlUnwindEx @ 0x1402957A0
 * Callers:
 *     RtlUnwind @ 0x140387A90 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1403DF790 (__C_specific_handler.c)
 *     KiSystemServiceHandler @ 0x140433E80 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x140294B90 (RtlVirtualUnwind.c)
 *     RtlGuardRestoreContext @ 0x140294C30 (RtlGuardRestoreContext.c)
 *     RtlpGetStackLimitsEx @ 0x140294D50 (RtlpGetStackLimitsEx.c)
 *     KeQueryCurrentStackInformation @ 0x140294D90 (KeQueryCurrentStackInformation.c)
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     RtlGetExtendedContextLength2 @ 0x1402956D0 (RtlGetExtendedContextLength2.c)
 *     RtlpCopyContext @ 0x140295D00 (RtlpCopyContext.c)
 *     RtlpxVirtualUnwind @ 0x140296FC0 (RtlpxVirtualUnwind.c)
 *     RtlInitializeExtendedContext2 @ 0x140297D10 (RtlInitializeExtendedContext2.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     RtlpGetStackLimits @ 0x1402AB970 (RtlpGetStackLimits.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlpIsFrameInBounds @ 0x140389140 (RtlpIsFrameInBounds.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x14041E540 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x140429B00 (RtlCaptureContext2.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x14042AB20 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x140435E00 (memset.c)
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
  int v20; // r11d
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
  int v36; // ebx
  __int64 v37; // r15
  int v38; // r11d
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  void *v42; // rsp
  void *v43; // rsp
  unsigned int v44; // [rsp+60h] [rbp+0h] BYREF
  int v45; // [rsp+64h] [rbp+4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+8h] BYREF
  ULONG_PTR v47; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v48; // [rsp+78h] [rbp+18h] BYREF
  unsigned int *v49; // [rsp+80h] [rbp+20h]
  __int64 v50; // [rsp+88h] [rbp+28h] BYREF
  __int64 v51; // [rsp+90h] [rbp+30h] BYREF
  _QWORD *v52; // [rsp+98h] [rbp+38h]
  __int64 v53; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v54; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v55; // [rsp+B0h] [rbp+50h]
  __int64 v56; // [rsp+B8h] [rbp+58h]
  __int64 v57; // [rsp+C0h] [rbp+60h]
  __int64 v58; // [rsp+C8h] [rbp+68h]
  _QWORD v59[10]; // [rsp+D0h] [rbp+70h] BYREF
  unsigned int *v60; // [rsp+120h] [rbp+C0h]
  __int128 v61; // [rsp+128h] [rbp+C8h] BYREF
  __int64 v62; // [rsp+138h] [rbp+D8h]
  _QWORD v63[20]; // [rsp+140h] [rbp+E0h] BYREF

  v6 = a5;
  v8 = a6;
  v58 = a2;
  v52 = a3;
  v57 = a4;
  v49 = a5;
  v56 = a6;
  memset(v59, 0, sizeof(v59));
  memset(v63, 0, 0x98uLL);
  v50 = 0LL;
  v51 = 0LL;
  v48 = 0LL;
  v54 = 0LL;
  v44 = 0;
  v47 = 0LL;
  v45 = 0;
  KeQueryCurrentStackInformation((__int64)&v45, (__int64)&v47, (__int64)&v48);
  v10 = v45 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v47, &v48) )
LABEL_68:
    RtlRaiseStatus(3221225512LL);
  v11 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v11 = 1048715;
    if ( (a5[12] & 0x100080) != 0x100080 )
    {
      RtlGetExtendedContextLength(1048715LL, (__int64)&v44);
      v40 = v44 + 15LL;
      if ( v40 <= v44 )
        v40 = 0xFFFFFFFFFFFFFF0LL;
      v41 = v40 & 0xFFFFFFFFFFFFFFF0uLL;
      v42 = alloca(v41);
      v43 = alloca(v41);
      v6 = &v44;
      v49 = &v44;
      RtlInitializeExtendedContext((__int64)&v44, 0x10008Bu, (__int64)&v53);
    }
  }
  RtlGetExtendedContextLength2(v11, &v44, 0LL);
  v12 = v44 + 15LL;
  if ( v12 <= v44 )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  v16 = &v44;
  v60 = &v44;
  RtlInitializeExtendedContext2(&v44, v11, &v53, 0LL);
  v17 = v49;
  RtlCaptureContext2(v49);
  if ( a6 )
    *(_BYTE *)(a6 + 6) = 1;
  if ( !a3 )
  {
    LODWORD(v63[0]) = -1073741785;
    v63[1] = 0LL;
    v39 = *((_QWORD *)v17 + 31);
    LODWORD(v63[3]) = 0;
    v52 = v63;
    v63[2] = v39;
  }
  v44 = 2;
  if ( !a1 )
    v44 = 6;
  BugCheckParameter1 = 0LL;
  while ( 1 )
  {
    v55 = *((_QWORD *)v6 + 31);
    v18 = v55;
    v53 = RtlLookupFunctionEntry(v55, &v54, v8);
    RtlpCopyContext(v16, v6);
    v19 = v54;
    v62 = 0LL;
    v61 = 0LL;
    v21 = RtlpxVirtualUnwind(
            2,
            v54,
            v18,
            v20,
            (__int64)v16,
            0LL,
            (__int64)&v51,
            (__int64)&BugCheckParameter1,
            (__int64)&v50,
            (__int64)&v61);
    if ( v21 < 0 )
      RtlRaiseStatus((unsigned int)v21);
    v22 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 >= v48 || BugCheckParameter1 < v47 )
    {
      if ( v10 != 1 )
        goto LABEL_68;
      v10 = 2;
      if ( !(unsigned __int8)RtlpGetStackLimitsEx(BugCheckParameter1, (__int64)&v47, (__int64)&v48, (ULONG_PTR)v6, 0LL) )
        goto LABEL_68;
      v22 = BugCheckParameter1;
    }
    if ( a1 && !v10 && a1 < v22 )
      goto LABEL_68;
    if ( v50 )
    {
      v23 = 0;
      v59[4] = v58;
      while ( 1 )
      {
        v24 = a1 == v22;
        v25 = v44;
        if ( v24 )
          v25 = v44 | 0x20;
        v26 = v57;
        v27 = v52;
        *((_DWORD *)v52 + 1) = v25;
        *((_QWORD *)v6 + 15) = v26;
        v59[0] = v55;
        v59[2] = v53;
        v59[6] = v50;
        v59[7] = v51;
        v59[8] = v56;
        v59[1] = v19;
        v59[3] = BugCheckParameter1;
        v59[5] = v6;
        LODWORD(v59[9]) = v23;
        if ( (v6[12] & 0x100040) == 0x100040 )
        {
          v28 = RtlpExecuteHandlerForUnwind(v27, BugCheckParameter1, v6, v59);
        }
        else
        {
          v28 = RtlpExecuteHandlerForUnwind(v27, BugCheckParameter1, v6, v59);
          if ( (v6[12] & 0x100040) == 0x100040 )
            v6[12] &= ~0x40u;
        }
        v44 = v25 & 0xFFFFFF9F;
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 != 2 )
            RtlRaiseStatus(3221225510LL);
          v36 = v59[0];
          v19 = v59[1];
          v55 = v59[0];
          v54 = v59[1];
          v53 = v59[2];
          RtlpCopyContext(v49, v59[5]);
          v37 = (__int64)v60;
          v6 = v49;
          v16 = v60;
          RtlpCopyContext(v60, v49);
          v50 = RtlVirtualUnwind(2, v19, v36, v38, v37, (__int64)&v51, (__int64)&BugCheckParameter1, 0LL);
          if ( v50 != v59[6] || (v22 = BugCheckParameter1, BugCheckParameter1 != v59[3]) || v51 != v59[7] )
            __fastfail(0x27u);
          v23 = v59[9];
          v44 |= 0x40u;
          v56 = v59[8];
          if ( (unsigned __int8)RtlpIsFrameInBounds(&v47, BugCheckParameter1, &v48) || v10 != 1 )
            goto LABEL_31;
          v10 = 2;
          RtlpGetStackLimitsEx(v22, (__int64)&v47, (__int64)&v48, (ULONG_PTR)v6, 0LL);
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
          v45 = v31;
          v6[13] = v31;
          v6[70] = v31;
        }
        v22 = BugCheckParameter1;
LABEL_31:
        if ( (v44 & 0x40) == 0 )
        {
          v18 = v55;
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
    if ( (v22 & 7) != 0 || v22 < v47 || v22 >= v48 )
      break;
    if ( v22 == a1 )
      goto LABEL_42;
    v8 = v56;
    v10 = v32;
  }
  if ( v22 == a1 )
  {
LABEL_42:
    v34 = v52;
    *((_QWORD *)v6 + 15) = v57;
    if ( *v34 != -2147483607 )
    {
      *((_QWORD *)v6 + 31) = v58;
      if ( *v34 != -2147483610 )
        *v34 = -1073741785;
    }
    return RtlGuardRestoreContext((__int64)v6, (__int64)v34);
  }
  else
  {
    if ( v18 == *((_QWORD *)v6 + 31) )
      RtlRaiseStatus(3221225727LL);
    return ZwRaiseException(v52, v6, 0LL);
  }
}
