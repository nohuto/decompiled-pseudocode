/*
 * XREFs of RtlDispatchException @ 0x14027FA60
 * Callers:
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     RtlRaiseException @ 0x140364BF0 (RtlRaiseException.c)
 * Callees:
 *     RtlpCopyContext @ 0x140280F40 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x140281130 (RtlLookupFunctionEntry.c)
 *     RtlpxVirtualUnwind @ 0x140281720 (RtlpxVirtualUnwind.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KeQueryCurrentStackInformation @ 0x1402E1E00 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x1402E6750 (RtlpGetStackLimitsEx.c)
 *     RtlVirtualUnwind @ 0x140364D20 (RtlVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x140364DF0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140364EE0 (RtlInitializeExtendedContext2.c)
 *     RtlLookupExceptionHandler @ 0x1403BEEE8 (RtlLookupExceptionHandler.c)
 *     RtlpIsFrameInBounds @ 0x1403BFA10 (RtlpIsFrameInBounds.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x140421690 (RtlpExecuteHandlerForException.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpLogExceptionDispatch @ 0x1405A4938 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1405A4AE0 (RtlpLogExceptionHandler.c)
 */

char __fastcall RtlDispatchException(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v3; // rsi
  int v4; // r15d
  ULONG_PTR v5; // rcx
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  __int64 v11; // r12
  _DWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  ULONG_PTR v15; // rbx
  int v16; // r15d
  __int64 v17; // r9
  char v18; // si
  __int64 v19; // rdi
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rbx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  unsigned __int64 v25; // rcx
  char v26; // al
  bool v27; // zf
  int v28; // edx
  int v29; // r9d
  int v30; // r10d
  int v31; // r9d
  unsigned __int64 v32; // rdi
  char IsFrameInBounds; // al
  int v34; // r15d
  __int64 v35; // rax
  char result; // al
  int v37; // [rsp+60h] [rbp+0h] BYREF
  char v38; // [rsp+64h] [rbp+4h]
  int v39; // [rsp+68h] [rbp+8h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v41; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v42; // [rsp+80h] [rbp+20h] BYREF
  _DWORD *v43; // [rsp+88h] [rbp+28h] BYREF
  __int64 v44; // [rsp+98h] [rbp+38h] BYREF
  __int64 v45; // [rsp+A0h] [rbp+40h]
  __int64 v46; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v47; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v48; // [rsp+B8h] [rbp+58h] BYREF
  unsigned __int64 v49; // [rsp+C0h] [rbp+60h]
  ULONG_PTR v50; // [rsp+C8h] [rbp+68h]
  _QWORD v51[10]; // [rsp+D0h] [rbp+70h] BYREF
  __int128 v52; // [rsp+120h] [rbp+C0h] BYREF
  __int64 v53; // [rsp+130h] [rbp+D0h]
  _DWORD v54[2]; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v55; // [rsp+148h] [rbp+E8h]
  __int64 v56; // [rsp+150h] [rbp+F0h]
  _QWORD v57[25]; // [rsp+158h] [rbp+F8h] BYREF

  v45 = a2;
  v50 = a1;
  v3 = a1;
  LODWORD(v43) = 0;
  memset(v51, 0, sizeof(v51));
  v38 = 0;
  BugCheckParameter1 = 0LL;
  v44 = 0LL;
  v47 = 0LL;
  v41 = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  v37 = 0;
  memset(v57, 0, 0xC0uLL);
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v38 = 1;
    RtlpLogExceptionDispatch(v3, a2);
  }
  v4 = *(_DWORD *)(v3 + 4) & 0x81;
  v39 = v4;
  KeQueryCurrentStackInformation(&v37, &v42, &v41);
  v5 = *(_QWORD *)(a2 + 152);
  v37 = v37 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(v5, v3) )
  {
LABEL_49:
    v34 = v4 | 8;
LABEL_61:
    result = 0;
    *(_DWORD *)(v3 + 4) = v34;
    return result;
  }
  v6 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
    v6 = 1048715;
  RtlGetExtendedContextLength2(v6, &v43, 0LL);
  v7 = (unsigned int)v43 + 15LL;
  if ( v7 <= (unsigned int)v43 )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = alloca(v8);
  v10 = alloca(v8);
  RtlInitializeExtendedContext2(&v37, v6, &v48, 0LL);
  RtlpCopyContext(&v37, a2);
  v11 = *(_QWORD *)(a2 + 248);
  v12 = v54;
  v43 = v54;
  v49 = 0LL;
  v54[0] = 0;
  v54[1] = 0x1000000;
  v55 = -1LL;
  v56 = 0LL;
  while ( 1 )
  {
    v13 = RtlLookupFunctionEntry(v11, &v46, v12);
    v48 = v13;
    v53 = 0LL;
    v14 = v46;
    v52 = 0LL;
    if ( (int)RtlpxVirtualUnwind(
                1,
                v46,
                v11,
                v13,
                (__int64)&v37,
                0LL,
                (__int64)&v47,
                (__int64)&BugCheckParameter1,
                (__int64)&v44,
                (__int64)&v52) < 0 )
    {
LABEL_60:
      v34 = v39;
      goto LABEL_61;
    }
    v15 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < v42 || BugCheckParameter1 >= v41 )
    {
      if ( (_BYTE)v37 == 1 )
      {
        LOBYTE(v37) = 2;
        RtlpGetStackLimitsEx(BugCheckParameter1, v3);
        v15 = BugCheckParameter1;
      }
      else if ( !(_BYTE)v37 )
      {
        v4 = v39;
        goto LABEL_49;
      }
    }
    if ( v44 )
      break;
LABEL_14:
    v11 = v57[0];
    if ( (v51[5] & 7) == 0 && v51[5] >= v42 )
    {
      v12 = v43;
      if ( v51[5] < v41 )
        continue;
    }
    if ( (_BYTE)v37 != 1 )
      goto LABEL_60;
    LOBYTE(v37) = 0;
    if ( !(unsigned __int8)RtlpGetStackLimitsEx(v51[5], v3) )
      goto LABEL_60;
    v12 = v43;
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = v44;
    *(_DWORD *)(v3 + 4) = v39;
    v18 = 0;
    v51[2] = v13;
    v19 = 0LL;
    v51[7] = v47;
    v51[8] = v43;
    v51[0] = v11;
    v51[1] = v14;
    v51[3] = v15;
    v51[5] = &v37;
    v51[6] = v17;
    LODWORD(v51[9]) = v16;
    if ( v38 )
    {
      v35 = RtlpLogExceptionHandler(v50, &v37, v11);
      v15 = BugCheckParameter1;
      v19 = v35;
    }
    v20 = v15;
    v21 = v50;
    v22 = RtlpExecuteHandlerForException(v50, v20, v45, v51);
    if ( v19 )
      *(_DWORD *)(v19 + 1396) = v22;
    v23 = *(_DWORD *)(v21 + 4) & 1;
    v15 = BugCheckParameter1;
    v24 = v23 | v39;
    v25 = v49;
    v39 = v24;
    if ( v49 == BugCheckParameter1 )
    {
      v24 &= ~0x10u;
      v25 = 0LL;
      v39 = v24;
      v49 = 0LL;
    }
    if ( v22 == 1 )
      goto LABEL_26;
    if ( !v22 )
      break;
    v28 = v22 - 2;
    if ( !v28 )
    {
      v32 = v51[3];
      IsFrameInBounds = 1;
      v39 = v24 | 0x10;
      if ( (_BYTE)v37 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v42, v51[3], &v41);
        v25 = v49;
      }
      if ( v32 > v25 || !IsFrameInBounds )
        v49 = v32;
LABEL_26:
      v26 = v37;
      v13 = v48;
      goto LABEL_27;
    }
    if ( v28 != 1 )
      RtlRaiseStatus(3221225510LL);
    v11 = v51[0];
    v46 = v51[1];
    RtlpCopyContext(&v37, v51[5]);
    v44 = RtlVirtualUnwind(1, v30, v11, v29, (__int64)&v37, (__int64)&v47, (__int64)&BugCheckParameter1, 0LL);
    BugCheckParameter1 = v51[3];
    v13 = RtlLookupFunctionEntry(v11, &v46, v43);
    v48 = v13;
    if ( v13 != v51[2]
      || (v14 = v46, (int)RtlLookupExceptionHandler(v13, v46, 2, v31, (__int64)&v44, (__int64)&v47) < 0)
      || v44 != v51[6]
      || v47 != v51[7] )
    {
      __fastfail(0x27u);
    }
    v15 = BugCheckParameter1;
    v16 = v51[9];
    v43 = (_DWORD *)v51[8];
    v18 = 1;
    v27 = (unsigned __int8)RtlpIsFrameInBounds(&v42, BugCheckParameter1, &v41) == 0;
    v26 = v37;
    if ( v27 && (_BYTE)v37 == 1 )
    {
      RtlpGetStackLimitsEx(v15, v50);
      v15 = BugCheckParameter1;
LABEL_40:
      LOBYTE(v37) = 0;
      goto LABEL_28;
    }
LABEL_27:
    if ( v26 == 2 )
      goto LABEL_40;
LABEL_28:
    v27 = v18 == 0;
    v3 = v50;
    if ( v27 )
      goto LABEL_14;
  }
  if ( (v24 & 1) != 0 )
    RtlRaiseStatus(3221225509LL);
  return 1;
}
