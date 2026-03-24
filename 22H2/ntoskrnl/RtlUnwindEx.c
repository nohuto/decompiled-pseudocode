/*
 * XREFs of RtlUnwindEx @ 0x14033EA40
 * Callers:
 *     RtlUnwind @ 0x140329E00 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1403CFD90 (__C_specific_handler.c)
 *     __longjmp_internal @ 0x1403F9220 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x140410E80 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x14021E130 (RtlpxVirtualUnwind.c)
 *     RtlpGetStackLimits @ 0x1402D0BE0 (RtlpGetStackLimits.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     RtlpPopUserShadowStack @ 0x14032B65C (RtlpPopUserShadowStack.c)
 *     RtlpIsFrameInBounds @ 0x14033E9B0 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x14033E9D0 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x14033EF50 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14033F110 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x14033F5D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14033FFD0 (RtlInitializeExtendedContext2.c)
 *     KeQueryCurrentStackInformation @ 0x140340240 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x140340290 (RtlpGetStackLimitsEx.c)
 *     RtlGuardRestoreContext @ 0x1403402B8 (RtlGuardRestoreContext.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1403FC720 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x140407230 (RtlCaptureContext2.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140408120 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall RtlUnwindEx(unsigned __int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // rbx
  __int64 v10; // r9
  char v11; // di
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  int *v16; // r13
  unsigned __int64 v17; // r12
  __int64 v18; // r15
  unsigned __int64 v19; // rbx
  __int64 v20; // r13
  unsigned int v21; // ecx
  int v22; // eax
  _QWORD *v23; // r10
  int v24; // edx
  int v25; // edx
  int *v26; // rax
  int v27; // et0
  char v28; // al
  int *v29; // rax
  _DWORD *v30; // r15
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r10
  __int64 v35; // rax
  bool v36; // bl
  _QWORD *v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-30h]
  __int64 *v39; // [rsp+28h] [rbp-28h]
  unsigned __int64 *v40; // [rsp+30h] [rbp-20h]
  __int64 v41; // [rsp+38h] [rbp-18h]
  int v42; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v43; // [rsp+54h] [rbp+4h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp+8h] BYREF
  int *v45; // [rsp+60h] [rbp+10h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp+18h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp+20h] BYREF
  __int64 v48; // [rsp+78h] [rbp+28h] BYREF
  __int64 v49; // [rsp+80h] [rbp+30h] BYREF
  __int64 v50; // [rsp+88h] [rbp+38h] BYREF
  _QWORD *v51; // [rsp+90h] [rbp+40h]
  __int64 v52; // [rsp+98h] [rbp+48h]
  __int64 v53; // [rsp+A0h] [rbp+50h]
  __int64 v54; // [rsp+A8h] [rbp+58h]
  __int64 v55; // [rsp+B0h] [rbp+60h]
  _QWORD v56[10]; // [rsp+C0h] [rbp+70h] BYREF
  int *v57; // [rsp+110h] [rbp+C0h]
  __int64 v58; // [rsp+118h] [rbp+C8h] BYREF
  __int128 v59; // [rsp+120h] [rbp+D0h]
  _QWORD v60[20]; // [rsp+130h] [rbp+E0h] BYREF

  v6 = a5;
  v8 = a6;
  v55 = a2;
  v51 = a3;
  v54 = a4;
  v53 = a5;
  v52 = a6;
  memset(v56, 0, sizeof(v56));
  memset(v60, 0, 0x98uLL);
  v50 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  v43 = 0;
  v46 = 0LL;
  v42 = 0;
  KeQueryCurrentStackInformation(&v42, &v46, &v47, v10);
  v11 = v42 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v46, (__int64)&v47) )
LABEL_63:
    RtlRaiseStatus(0xC0000028);
  RtlGetExtendedContextLength2(1048587LL, &v43, 0LL);
  v12 = v43 + 15LL;
  if ( v12 <= v43 )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  v57 = &v42;
  RtlInitializeExtendedContext2(&v42, 1048587LL, &v45, 0LL);
  v45 = &v42;
  v16 = &v42;
  RtlCaptureContext2(a5);
  if ( a6 )
    *(_BYTE *)(a6 + 6) = 1;
  if ( !a3 )
  {
    v35 = *(_QWORD *)(a5 + 248);
    v51 = v60;
    v60[2] = v35;
    LODWORD(v60[0]) = -1073741785;
    v60[1] = 0LL;
    LODWORD(v60[3]) = 0;
  }
  v42 = 2;
  if ( !a1 )
    v42 = 6;
  v44 = 0LL;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v6 + 248);
    v18 = RtlLookupFunctionEntry(v17, &v49, v8);
    if ( v18 )
    {
      RtlpCopyContext(v16, v6);
      v48 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      RtlpxVirtualUnwind(2, v49, v17, v18, v16, 0LL, &v50, &v44, &v48, &v58);
      v19 = v44;
      v20 = v48;
      if ( (v44 & 7) != 0 || v44 < v46 || v44 >= v47 )
      {
        if ( v11 != 1 )
          goto LABEL_63;
        v11 = 2;
        if ( !(unsigned __int8)RtlpGetStackLimitsEx(v44, &v46, &v47) )
          goto LABEL_63;
        v19 = v44;
      }
      if ( a1 && !v11 && a1 < v19 )
        goto LABEL_63;
      if ( v20 )
      {
        v21 = 0;
        v56[4] = v55;
        v22 = v42;
        v43 = 0;
        while ( 1 )
        {
          if ( a1 == v19 )
          {
            v22 |= 0x20u;
            v42 = v22;
          }
          v23 = v51;
          *((_DWORD *)v51 + 1) = v22;
          *(_QWORD *)(v6 + 120) = v54;
          v56[1] = v49;
          v56[7] = v50;
          v56[8] = v52;
          v56[0] = v17;
          v56[2] = v18;
          v56[3] = v44;
          v56[5] = v6;
          v56[6] = v20;
          LODWORD(v56[9]) = v21;
          v36 = (*(_DWORD *)(v6 + 48) & 0x100040) == 1048640;
          v24 = RtlpExecuteHandlerForUnwind(v23, v44, v6, v56, v38, v39, v40, v41);
          if ( !v36 && (*(_DWORD *)(v6 + 48) & 0x100040) == 0x100040 )
            *(_DWORD *)(v6 + 48) &= ~0x40u;
          v42 &= 0xFFFFFF9F;
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( v25 != 2 )
              RtlRaiseStatus(0xC0000026);
            v17 = v56[0];
            v18 = v56[2];
            v49 = v56[1];
            RtlpCopyContext(v53, v56[5]);
            v45 = v57;
            v6 = v32;
            RtlpCopyContext(v57, v32);
            v41 = 0LL;
            v40 = &v44;
            v39 = &v50;
            v38 = v33;
            v20 = RtlVirtualUnwind(2, v34, v17);
            if ( v20 != v56[6] || (v19 = v44, v44 != v56[3]) || v50 != v56[7] )
              __fastfail(0x27u);
            v42 |= 0x40u;
            v52 = v56[8];
            v43 = v56[9];
            if ( RtlpIsFrameInBounds(&v46, v44, &v47) || v11 != 1 )
              goto LABEL_30;
            v11 = 2;
            RtlpGetStackLimitsEx(v19, &v46, &v47);
          }
          else
          {
            if ( v44 != a1 )
            {
              v26 = (int *)v6;
              v6 = (__int64)v45;
              v45 = v26;
            }
            v27 = _mm_getcsr();
            LODWORD(v48) = v27;
            *(_DWORD *)(v6 + 52) = v27;
            *(_DWORD *)(v6 + 280) = v27;
          }
          v19 = v44;
LABEL_30:
          v22 = v42;
          v21 = v43;
          if ( (v42 & 0x40) == 0 )
            goto LABEL_31;
        }
      }
      if ( v19 == a1 )
      {
LABEL_31:
        v16 = v45;
      }
      else
      {
        v29 = (int *)v6;
        v6 = (__int64)v45;
        v16 = v29;
        v45 = v29;
      }
    }
    else
    {
      v37 = *(_QWORD **)(v6 + 152);
      *(_QWORD *)(v6 + 248) = *v37;
      *(_QWORD *)(v6 + 152) = v37 + 1;
      RtlpPopUserShadowStack(v6);
      v19 = v44;
    }
    v28 = 0;
    if ( v11 != 2 )
      v28 = v11;
    if ( (v19 & 7) != 0 || v19 < v46 || v19 >= v47 )
      break;
    if ( v19 == a1 )
      goto LABEL_41;
    v8 = v52;
    v11 = v28;
  }
  if ( v19 == a1 )
  {
LABEL_41:
    v30 = v51;
    *(_QWORD *)(v6 + 120) = v54;
    if ( *v30 != -2147483607 )
    {
      *(_QWORD *)(v6 + 248) = v55;
      if ( *v30 != -2147483610 )
        *v30 = -1073741785;
    }
    return RtlGuardRestoreContext(v6, v30);
  }
  else
  {
    if ( v17 == *(_QWORD *)(v6 + 248) )
      RtlRaiseStatus(0xC00000FF);
    return ZwRaiseException(v51, v6, 0LL);
  }
}
