/*
 * XREFs of RtlDispatchException @ 0x14033E580
 * Callers:
 *     KiDispatchException @ 0x14033C330 (KiDispatchException.c)
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1404077C0 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     RtlLookupExceptionHandler @ 0x14032B31C (RtlLookupExceptionHandler.c)
 *     RtlpPopUserShadowStack @ 0x14032B65C (RtlpPopUserShadowStack.c)
 *     RtlpIsFrameInBounds @ 0x14033E9B0 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x14033E9D0 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x14033EF50 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14033F110 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x14033F5D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14033FFD0 (RtlInitializeExtendedContext2.c)
 *     KeQueryCurrentStackInformation @ 0x140340240 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x140340290 (RtlpGetStackLimitsEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1404080A0 (RtlpExecuteHandlerForException.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlpLogExceptionDispatch @ 0x140584E80 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x140585020 (RtlpLogExceptionHandler.c)
 */

__int64 __fastcall RtlDispatchException(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // r13
  __int64 v5; // r9
  int v6; // esi
  __int64 v7; // rcx
  BOOL v8; // r15d
  unsigned __int64 v9; // rax
  void *v10; // rsp
  __int64 v11; // rdi
  _DWORD *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rbx
  int v20; // r8d
  unsigned int v21; // ecx
  bool v22; // zf
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r15
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  int v30; // r9d
  int v31; // r10d
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  char v34; // cl
  int v35; // esi
  __int64 v36; // rax
  char IsFrameInBounds; // al
  int v39; // [rsp+40h] [rbp+0h] BYREF
  int v40; // [rsp+44h] [rbp+4h] BYREF
  char v41; // [rsp+48h] [rbp+8h]
  char v42; // [rsp+49h] [rbp+9h]
  unsigned int v43; // [rsp+4Ch] [rbp+Ch] BYREF
  __int64 v44; // [rsp+50h] [rbp+10h] BYREF
  __int64 v45; // [rsp+58h] [rbp+18h] BYREF
  __int64 v46; // [rsp+60h] [rbp+20h] BYREF
  __int64 v47; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp+30h] BYREF
  __int64 v49; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v50; // [rsp+80h] [rbp+40h]
  __int64 v51; // [rsp+88h] [rbp+48h]
  _QWORD v52[10]; // [rsp+90h] [rbp+50h] BYREF
  __int64 v53; // [rsp+E0h] [rbp+A0h]
  _DWORD v54[2]; // [rsp+F0h] [rbp+B0h] BYREF
  __int64 v55; // [rsp+F8h] [rbp+B8h]
  __int64 v56; // [rsp+100h] [rbp+C0h]
  _QWORD v57[25]; // [rsp+108h] [rbp+C8h] BYREF

  v53 = a2;
  v51 = a1;
  v43 = 0;
  v4 = 0;
  memset(v52, 0, sizeof(v52));
  v41 = 0;
  v44 = 0LL;
  v49 = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  v46 = 0LL;
  v40 = 0;
  memset(v57, 0, 0xC0uLL);
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v41 = 1;
    RtlpLogExceptionDispatch(a1, a2);
  }
  v6 = *(_DWORD *)(a1 + 4) & 1;
  v39 = v6;
  KeQueryCurrentStackInformation(&v40, &v46, &v45, v5);
  v7 = *(_QWORD *)(a2 + 152);
  v8 = v40 == 10;
  v40 = v8;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(v7, &v46, &v45) )
  {
    *(_DWORD *)(a1 + 4) = v6 | 8;
    return v4;
  }
  RtlGetExtendedContextLength2(1048587LL, &v43, 0LL);
  v9 = v43 + 15LL;
  if ( v9 <= v43 )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2(&v39, 1048587LL, &v47, 0LL);
  RtlpCopyContext(&v39, a2);
  v11 = *(_QWORD *)(a2 + 248);
  v50 = 0LL;
  v12 = v54;
  v54[0] = 0;
  v56 = 0LL;
  v54[1] = 0x1000000;
  v55 = -1LL;
  while ( 1 )
  {
    v13 = RtlLookupFunctionEntry(v11, &v48, v12);
    v14 = v13;
    if ( !v13 )
    {
      if ( v11 == *(_QWORD *)v52[9] )
        goto LABEL_52;
      v57[6] = *(_QWORD *)v52[9];
      v52[9] += 8LL;
      RtlpPopUserShadowStack((__int64)&v39);
      goto LABEL_11;
    }
    v15 = v48;
    v16 = RtlVirtualUnwind(1, v48, v11, v13, (__int64)&v39, (__int64)&v49, (__int64)&v44, 0LL);
    v17 = v44;
    v18 = v16;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v46, v44, &v45) )
    {
      if ( (_BYTE)v40 == 1 )
      {
        LOBYTE(v40) = 2;
        RtlpGetStackLimitsEx(v17, &v46, &v45);
        v17 = v44;
      }
      else if ( !(_BYTE)v40 )
      {
        v35 = v39 | 8;
LABEL_53:
        v4 = 0;
        *(_DWORD *)(v51 + 4) = v35;
        return v4;
      }
    }
    if ( v18 )
      break;
LABEL_10:
    v8 = v40;
LABEL_11:
    v19 = v52[9];
    v11 = v57[6];
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v46, v52[9], &v45) )
    {
      if ( !v8 || (LOBYTE(v8) = 0, v40 = v8, !(unsigned __int8)RtlpGetStackLimitsEx(v19, &v46, &v45)) )
      {
LABEL_52:
        v35 = v39;
        goto LABEL_53;
      }
    }
  }
  v20 = v39;
  v21 = 0;
  v43 = 0;
  while ( 1 )
  {
    v22 = v41 == 0;
    v23 = v51;
    v24 = v49;
    v42 = 0;
    v52[0] = v11;
    *(_DWORD *)(v51 + 4) = v20;
    v52[1] = v15;
    v52[2] = v14;
    v52[3] = v17;
    v52[5] = &v39;
    v52[6] = v18;
    v52[7] = v24;
    v52[8] = v12;
    LODWORD(v52[9]) = v21;
    v47 = 0LL;
    if ( !v22 )
    {
      v36 = RtlpLogExceptionHandler(v23, &v39, v11, v18);
      v17 = v44;
      v47 = v36;
    }
    v25 = v17;
    v26 = v51;
    v27 = RtlpExecuteHandlerForException(v51, v25, v53, v52);
    if ( v47 )
      *(_DWORD *)(v47 + 1396) = v27;
    v28 = *(_DWORD *)(v26 + 4) & 1;
    v17 = v44;
    v20 = v28 | v39;
    v39 |= v28;
    if ( v50 == v44 )
    {
      v20 &= ~0x10u;
      v50 = 0LL;
      v39 = v20;
    }
    if ( v27 == 1 )
      goto LABEL_21;
    if ( !v27 )
      break;
    v29 = v27 - 2;
    if ( v29 )
    {
      if ( v29 != 1 )
        RtlRaiseStatus(0xC0000026);
      v11 = v52[0];
      v48 = v52[1];
      RtlpCopyContext(&v39, v52[5]);
      v47 = RtlVirtualUnwind(1, v31, v11, v30, (__int64)&v39, (__int64)&v49, (__int64)&v44, 0LL);
      v44 = v52[3];
      v14 = RtlLookupFunctionEntry(v11, &v48, v12);
      if ( v14 != v52[2]
        || (v15 = v48, (int)RtlLookupExceptionHandler(v14, v48, 2u, v32, &v47, &v49) < 0)
        || (v18 = v47, v47 != v52[6])
        || v49 != v52[7] )
      {
        __fastfail(0x27u);
      }
      v17 = v44;
      v12 = (_DWORD *)v52[8];
      v43 = v52[9];
      v42 = 1;
      if ( !(unsigned __int8)RtlpIsFrameInBounds(&v46, v44, &v45) && (_BYTE)v40 == 1 )
      {
        RtlpGetStackLimitsEx(v17, &v46, &v45);
        v20 = v39;
        v17 = v44;
LABEL_45:
        LOBYTE(v40) = 0;
        goto LABEL_22;
      }
      v20 = v39;
    }
    else
    {
      v33 = v52[3];
      v20 |= 0x10u;
      v34 = 1;
      v39 = v20;
      if ( (_BYTE)v40 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v46, v52[3], &v45);
        v20 = v39;
        v34 = IsFrameInBounds;
        v33 = v52[3];
      }
      if ( v33 > v50 || !v34 )
        v50 = v33;
    }
LABEL_21:
    if ( (_BYTE)v40 == 2 )
      goto LABEL_45;
LABEL_22:
    v21 = v43;
    if ( !v42 )
      goto LABEL_10;
  }
  if ( (v20 & 1) != 0 )
    RtlRaiseStatus(0xC0000025);
  return 1;
}
