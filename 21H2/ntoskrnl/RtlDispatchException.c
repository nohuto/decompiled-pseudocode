/*
 * XREFs of RtlDispatchException @ 0x140295210
 * Callers:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x140294B90 (RtlVirtualUnwind.c)
 *     RtlpGetStackLimitsEx @ 0x140294D50 (RtlpGetStackLimitsEx.c)
 *     KeQueryCurrentStackInformation @ 0x140294D90 (KeQueryCurrentStackInformation.c)
 *     RtlGetExtendedContextLength2 @ 0x1402956D0 (RtlGetExtendedContextLength2.c)
 *     RtlpCopyContext @ 0x140295D00 (RtlpCopyContext.c)
 *     RtlVirtualUnwind2 @ 0x140296070 (RtlVirtualUnwind2.c)
 *     RtlInitializeExtendedContext2 @ 0x140297D10 (RtlInitializeExtendedContext2.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlpIsFrameInBounds @ 0x140389140 (RtlpIsFrameInBounds.c)
 *     RtlLookupExceptionHandler @ 0x1403A6A44 (RtlLookupExceptionHandler.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x14042AAA0 (RtlpExecuteHandlerForException.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpLogExceptionDispatch @ 0x1405E3748 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1405E38F0 (RtlpLogExceptionHandler.c)
 */

char __fastcall RtlDispatchException(ULONG_PTR a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r12
  int v4; // r15d
  ULONG_PTR v5; // rcx
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  __int64 v11; // rdi
  _DWORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  ULONG_PTR v15; // rbx
  int v16; // r12d
  ULONG_PTR v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r14
  _DWORD *v20; // rax
  char v21; // r15
  ULONG_PTR v22; // rdx
  ULONG_PTR v23; // rbx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  unsigned __int64 v27; // rcx
  char v28; // al
  bool v29; // zf
  int v30; // edx
  int v31; // ebx
  int v32; // r11d
  int v33; // r9d
  unsigned __int64 v34; // r14
  char IsFrameInBounds; // al
  char result; // al
  __int64 v37; // rax
  int v38; // [rsp+70h] [rbp+0h] BYREF
  char v39; // [rsp+74h] [rbp+4h]
  int v40; // [rsp+78h] [rbp+8h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp+10h] BYREF
  ULONG_PTR v42; // [rsp+88h] [rbp+18h] BYREF
  ULONG_PTR v43; // [rsp+90h] [rbp+20h] BYREF
  _DWORD *v44; // [rsp+98h] [rbp+28h] BYREF
  __int64 v45; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v46; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v47; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v48; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int64 v49; // [rsp+C0h] [rbp+50h]
  ULONG_PTR v50; // [rsp+C8h] [rbp+58h]
  ULONG_PTR v51; // [rsp+D0h] [rbp+60h]
  _QWORD v52[10]; // [rsp+E0h] [rbp+70h] BYREF
  _DWORD v53[2]; // [rsp+130h] [rbp+C0h] BYREF
  __int64 v54; // [rsp+138h] [rbp+C8h]
  __int64 v55; // [rsp+140h] [rbp+D0h]
  _QWORD v56[25]; // [rsp+148h] [rbp+D8h] BYREF

  v51 = a2;
  v50 = a1;
  v3 = a1;
  LODWORD(v44) = 0;
  memset(v52, 0, sizeof(v52));
  v39 = 0;
  BugCheckParameter1 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v42 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v38 = 0;
  memset(v56, 0, 0xC0uLL);
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v39 = 1;
    RtlpLogExceptionDispatch(v3, a2);
  }
  v4 = *(_DWORD *)(v3 + 4) & 0x81;
  v40 = v4;
  KeQueryCurrentStackInformation((__int64)&v38, (__int64)&v43, (__int64)&v42);
  v5 = *(_QWORD *)(a2 + 152);
  v38 = v38 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(v5, (__int64)&v43, (__int64)&v42, a2, v3) )
  {
LABEL_48:
    v4 |= 8u;
LABEL_49:
    result = 0;
    *(_DWORD *)(v3 + 4) = v4;
    return result;
  }
  v6 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
    v6 = 1048715;
  RtlGetExtendedContextLength2(v6, &v44, 0LL);
  v7 = (unsigned int)v44 + 15LL;
  if ( v7 <= (unsigned int)v44 )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = alloca(v8);
  v10 = alloca(v8);
  RtlInitializeExtendedContext2(&v38, v6, &v48, 0LL);
  RtlpCopyContext(&v38, a2);
  v11 = *(_QWORD *)(a2 + 248);
  v12 = v53;
  v44 = v53;
  v49 = 0LL;
  v53[0] = 0;
  v53[1] = 0x1000000;
  v54 = -1LL;
  v55 = 0LL;
  while ( 1 )
  {
    v13 = RtlLookupFunctionEntry(v11, &v46, v12);
    v48 = v13;
    v14 = v46;
    if ( (int)RtlVirtualUnwind2(
                1,
                v46,
                v11,
                v13,
                (__int64)&v38,
                0LL,
                (__int64)&v47,
                (__int64)&BugCheckParameter1,
                0LL,
                0LL,
                0LL,
                (__int64)&v45,
                0) < 0 )
      goto LABEL_49;
    v15 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < v43 || BugCheckParameter1 >= v42 )
    {
      if ( (_BYTE)v38 == 1 )
      {
        LOBYTE(v38) = 2;
        RtlpGetStackLimitsEx(BugCheckParameter1, (__int64)&v43, (__int64)&v42, v51, v3);
        v15 = BugCheckParameter1;
      }
      else if ( !(_BYTE)v38 )
      {
        goto LABEL_48;
      }
    }
    if ( v45 )
      break;
LABEL_14:
    v11 = v56[4];
    if ( (v52[5] & 7) == 0 && v52[5] >= v43 )
    {
      v12 = v44;
      if ( v52[5] < v42 )
        continue;
    }
    if ( (_BYTE)v38 != 1 )
      goto LABEL_49;
    LOBYTE(v38) = 0;
    if ( !(unsigned __int8)RtlpGetStackLimitsEx(v52[5], (__int64)&v43, (__int64)&v42, v51, v3) )
      goto LABEL_49;
    v12 = v44;
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = v50;
    v18 = v45;
    v52[2] = v13;
    v19 = 0LL;
    v52[7] = v47;
    v20 = v44;
    *(_DWORD *)(v50 + 4) = v4;
    v21 = 0;
    v52[0] = v11;
    v52[1] = v14;
    v52[3] = v15;
    v52[5] = &v38;
    v52[6] = v18;
    v52[8] = v20;
    LODWORD(v52[9]) = v16;
    if ( v39 )
    {
      v37 = RtlpLogExceptionHandler(v17, &v38, v11);
      v15 = BugCheckParameter1;
      v19 = v37;
    }
    v22 = v15;
    v23 = v50;
    v24 = RtlpExecuteHandlerForException(v50, v22, v51, v52);
    if ( v19 )
      *(_DWORD *)(v19 + 1396) = v24;
    v25 = *(_DWORD *)(v23 + 4) & 1;
    v15 = BugCheckParameter1;
    v26 = v25 | v40;
    v27 = v49;
    v40 = v26;
    if ( v49 == BugCheckParameter1 )
    {
      v26 &= ~0x10u;
      v27 = 0LL;
      v40 = v26;
      v49 = 0LL;
    }
    if ( v24 == 1 )
      goto LABEL_26;
    if ( !v24 )
      break;
    v30 = v24 - 2;
    if ( !v30 )
    {
      v34 = v52[3];
      IsFrameInBounds = 1;
      v40 = v26 | 0x10;
      if ( (_BYTE)v38 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v43, v52[3], &v42);
        v27 = v49;
      }
      if ( v34 > v27 || !IsFrameInBounds )
        v49 = v34;
LABEL_26:
      v28 = v38;
      v13 = v48;
      goto LABEL_27;
    }
    if ( v30 != 1 )
      RtlRaiseStatus(3221225510LL);
    v31 = v52[1];
    v11 = v52[0];
    v46 = v52[1];
    RtlpCopyContext(&v38, v52[5]);
    v45 = RtlVirtualUnwind(1, v31, v11, v32, (__int64)&v38, (__int64)&v47, (__int64)&BugCheckParameter1, 0LL);
    BugCheckParameter1 = v52[3];
    v13 = RtlLookupFunctionEntry(v11, &v46, v44);
    v48 = v13;
    if ( v13 != v52[2]
      || (v14 = v46, (int)RtlLookupExceptionHandler(v13, v46, 2, v33, (__int64)&v45, (__int64)&v47) < 0)
      || v45 != v52[6]
      || v47 != v52[7] )
    {
      __fastfail(0x27u);
    }
    v15 = BugCheckParameter1;
    v16 = v52[9];
    v44 = (_DWORD *)v52[8];
    v21 = 1;
    v29 = (unsigned __int8)RtlpIsFrameInBounds(&v43, BugCheckParameter1, &v42) == 0;
    v28 = v38;
    if ( v29 && (_BYTE)v38 == 1 )
    {
      RtlpGetStackLimitsEx(v15, (__int64)&v43, (__int64)&v42, v51, v50);
      v15 = BugCheckParameter1;
LABEL_40:
      LOBYTE(v38) = 0;
      goto LABEL_28;
    }
LABEL_27:
    if ( v28 == 2 )
      goto LABEL_40;
LABEL_28:
    v29 = v21 == 0;
    v4 = v40;
    if ( v29 )
    {
      v3 = v50;
      goto LABEL_14;
    }
  }
  if ( (v26 & 1) != 0 )
    RtlRaiseStatus(3221225509LL);
  return 1;
}
