/*
 * XREFs of EtwpTraceLastBranchRecord @ 0x140461546
 * Callers:
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14036F9F8 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x140384C90 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1402E1E00 (KeQueryCurrentStackInformation.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1404166E0 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpTraceLastBranchRecord(__int64 a1, _QWORD *a2, _KTHREAD *a3, int a4)
{
  _KTHREAD *v6; // rsi
  _KTHREAD *CurrentThread; // rcx
  int v9; // ecx
  char v10; // r14
  __int64 v11; // rdi
  PSLIST_ENTRY v12; // rax
  unsigned int *v13; // rbx
  __int64 v14; // rax
  void *v15; // rsp
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // [rsp+28h] [rbp-8h]
  unsigned int v21; // [rsp+30h] [rbp+0h] BYREF
  int v22; // [rsp+34h] [rbp+4h] BYREF
  __int64 v23; // [rsp+38h] [rbp+8h] BYREF
  __int64 v24; // [rsp+40h] [rbp+10h] BYREF
  __int128 v25; // [rsp+48h] [rbp+18h] BYREF
  __int128 v26; // [rsp+58h] [rbp+28h]
  __int128 v27; // [rsp+68h] [rbp+38h]
  __int128 *v28; // [rsp+78h] [rbp+48h] BYREF
  int v29; // [rsp+80h] [rbp+50h]
  int v30; // [rsp+84h] [rbp+54h]
  unsigned int *v31; // [rsp+88h] [rbp+58h]
  int v32; // [rsp+90h] [rbp+60h]
  int v33; // [rsp+94h] [rbp+64h]

  v22 = 0;
  v25 = 0LL;
  v6 = a3;
  v26 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  v21 = 0;
  if ( KeGetCurrentPrcb()->IdleThread != CurrentThread && (a4 & 0x1800) != 0 )
  {
    if ( !a3 )
      v6 = CurrentThread;
    if ( (unsigned __int8)KeQueryCurrentStackInformation((__int64)&v21, (__int64)&v23, (__int64)&v24) )
    {
      if ( v21 > 9 || (v9 = 929, !_bittest(&v9, v21)) )
      {
        v10 = 0;
        v11 = (unsigned int)(24 * EtwpLastBranchStackSize);
        v12 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
        if ( !v12 || (v13 = (unsigned int *)&v12[1], v12 == (PSLIST_ENTRY)-16LL) )
        {
          if ( (unsigned __int64)&KeGetCurrentStackPointer()[-v23] <= v11 + 3632 )
            return;
          v14 = v11 + 15;
          if ( v11 + 15 <= (unsigned __int64)(unsigned int)v11 )
            v14 = 0xFFFFFFFFFFFFFF0LL;
          v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
          v10 = 1;
          v13 = &v21;
        }
        if ( ((int (__fastcall *)(_QWORD, unsigned int *, int *))off_140C01D98[0])((unsigned int)v11, v13, &v22) >= 0
          && v22 )
        {
          v16 = *(_QWORD *)(a1 + 1096);
          DWORD2(v25) = v6[1].CycleTime;
          HIDWORD(v25) = v6[1].CurrentRunTime;
          *(_QWORD *)&v25 = *a2;
          v17 = *(_QWORD *)(a1 + 1024);
          v20 = a4 & 0xFFFFE600 | 2;
          v18 = *(_DWORD *)(v17 + 4);
          v30 = 0;
          v33 = 0;
          v28 = &v25;
          LODWORD(v26) = v18;
          v32 = v22;
          v19 = *(_DWORD *)a1;
          v29 = 24;
          v31 = v13;
          EtwpLogKernelEvent((__int64)&v28, v16, v19, 2u, 0xC20u, v20);
        }
        if ( !v10 )
          RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, (PSLIST_ENTRY)v13 - 1);
      }
    }
  }
}
