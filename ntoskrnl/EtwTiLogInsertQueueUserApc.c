/*
 * XREFs of EtwTiLogInsertQueueUserApc @ 0x1402F8804
 * Callers:
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwpTiVadQueryEventWrite @ 0x1402F8AE4 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiFillProcessIdentity @ 0x140367BF4 (EtwpTiFillProcessIdentity.c)
 *     EtwProviderEnabled @ 0x140367E30 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void EtwTiLogInsertQueueUserApc(char a1, __int64 a2, __int64 a3, ...)
{
  _KPROCESS *v6; // r14
  _KPROCESS *Process; // rbx
  _KPROCESS *v8; // r12
  int v9; // eax
  bool v10; // zf
  const EVENT_DESCRIPTOR *v11; // rsi
  __int64 Pool2; // rax
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // ebx
  BOOLEAN v33; // al
  __int64 v34; // rcx
  __int16 v35; // ax
  __int64 v36; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-38h] BYREF
  __int64 v38; // [rsp+50h] [rbp-30h]
  _BYTE v39[8]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v40[8]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v41[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v42; // [rsp+D8h] [rbp+58h] BYREF
  va_list va; // [rsp+D8h] [rbp+58h]
  __int64 v44; // [rsp+E0h] [rbp+60h] BYREF
  va_list va1; // [rsp+E0h] [rbp+60h]
  __int64 v46; // [rsp+E8h] [rbp+68h] BYREF
  va_list va2; // [rsp+E8h] [rbp+68h]
  __int64 v48; // [rsp+F0h] [rbp+70h]
  va_list va3; // [rsp+F8h] [rbp+78h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v42 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v44 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v46 = va_arg(va3, _QWORD);
  v48 = va_arg(va3, _QWORD);
  v38 = 0LL;
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL) )
  {
    v6 = *(_KPROCESS **)(a2 + 544);
    Process = KeGetCurrentThread()->ApcState.Process;
    v8 = KeGetCurrentThread()->Process;
    v9 = 0;
    v10 = (_BYTE)v48 ? v8 == v6 : Process == v6;
    LOBYTE(v9) = !v10;
    if ( v9 )
    {
      v11 = (const EVENT_DESCRIPTOR *)THREATINT_QUEUEUSERAPC_REMOTE_KERNEL_CALLER;
      if ( a1 )
        v11 = &THREATINT_QUEUEUSERAPC_REMOTE;
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v11) )
      {
        Pool2 = ExAllocatePool2(64LL, 672LL, 1853049172LL);
        v13 = (_QWORD *)Pool2;
        if ( Pool2 )
        {
          v14 = EtwpTiFillProcessIdentity(Pool2, Process, v39);
          CurrentThread = KeGetCurrentThread();
          v17 = (_QWORD *)(v16 + 16LL * v14);
          *v17 = (char *)CurrentThread + 1232;
          v17[1] = 4LL;
          v17[2] = CurrentThread + 1;
          v17[3] = 8LL;
          v18 = EtwpTiFillProcessIdentity(&v13[2 * v14 + 4], v6, v40) + v14 + 2;
          v19 = 2LL * v18;
          v18 += 2;
          v20 = &v13[v19];
          *v20 = a2 + 1232;
          v20[1] = 4LL;
          v20[2] = a2 + 1152;
          v20[3] = 8LL;
          v21 = EtwpTiFillProcessIdentity(&v13[2 * v18], v8, v41);
          v23 = (unsigned int)(v22 + 1);
          LOBYTE(v36) = (v22 + 1) & (*(_DWORD *)(a2 + 116) >> 4);
          v24 = v21 + v18;
          v25 = v23 + v24;
          v24 *= 2LL;
          v13[v24] = &v36;
          v13[v24 + 1] = v23;
          v26 = *(_QWORD *)(a2 + 544);
          if ( *(_QWORD *)(v26 + 1408) == v22
            || (v35 = *(_WORD *)(v26 + 2412), v35 != 332) && v35 != 452
            || (v37 = -(a3 >> 2), v37 > 0xFFFFFFFF) )
          {
            v37 = a3;
          }
          v27 = 2LL * v25;
          v13[v27] = &v37;
          v13[v27 + 1] = 8LL;
          v28 = (unsigned int)v23 + v25;
          v29 = v23 + v28;
          v28 *= 2LL;
          v13[v28] = va;
          v13[v28 + 1] = 8LL;
          v30 = 2LL * v29;
          v13[v30] = va1;
          v13[v30 + 1] = 8LL;
          v31 = (unsigned int)v23 + v29;
          v32 = v23 + v31;
          v31 *= 2LL;
          v13[v31] = va2;
          v13[v31 + 1] = 8LL;
          v33 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000uLL);
          v34 = v38;
          if ( v33 )
            v34 = v42;
          v38 = v34;
          EtwpTiVadQueryEventWrite((_DWORD)v13, 42, v32, (_DWORD)v6, (__int64)&v37, 2, (__int64)v11, v33, v36);
          ExFreePoolWithTag(v13, 0);
        }
      }
    }
  }
}
