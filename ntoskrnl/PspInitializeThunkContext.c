/*
 * XREFs of PspInitializeThunkContext @ 0x1407EDF4C
 * Callers:
 *     PspUserThreadStartup @ 0x1407ED430 (PspUserThreadStartup.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     RtlGetExtendedContextLength2 @ 0x140364DF0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140364EE0 (RtlInitializeExtendedContext2.c)
 *     KePopulateContinuationContext @ 0x140365578 (KePopulateContinuationContext.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     PspCallThreadNotifyRoutines @ 0x1407D3260 (PspCallThreadNotifyRoutines.c)
 *     RtlCopyContext @ 0x1407EE220 (RtlCopyContext.c)
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 *     PspCreateUserContext @ 0x1407EEA8C (PspCreateUserContext.c)
 */

char PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // r14
  int v1; // ecx
  unsigned __int64 v2; // rsi
  unsigned int v3; // r12d
  $C71981A45BEB2B45F82C232A7085991E *v4; // rax
  int v5; // ebx
  SIZE_T v6; // r15
  unsigned __int64 v7; // rax
  void *v8; // rsp
  int v9; // r9d
  char *v10; // r13
  void *InstrumentationCallback; // rdx
  __int64 v12; // rcx
  int *v13; // r15
  _QWORD *InitialStack; // rdx
  _QWORD *v16; // r8
  int v18; // [rsp+30h] [rbp+0h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp+4h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp+10h]
  __int64 v21; // [rsp+48h] [rbp+18h] BYREF
  int *v22; // [rsp+50h] [rbp+20h]
  struct _KTHREAD *v23; // [rsp+58h] [rbp+28h]
  int v24[2]; // [rsp+60h] [rbp+30h] BYREF
  __int64 v25; // [rsp+68h] [rbp+38h]
  __int64 v26; // [rsp+70h] [rbp+40h]
  int v27; // [rsp+78h] [rbp+48h]
  _DWORD v28[31]; // [rsp+7Ch] [rbp+4Ch] BYREF
  _QWORD v29[154]; // [rsp+100h] [rbp+D0h] BYREF

  memset(v28, 0, sizeof(v28));
  memset(Size, 0, sizeof(Size));
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v23 = CurrentThread;
  v1 = CurrentThread->MiscFlags & 0x100000;
  v2 = v1 != 0 ? 0x800 : 0;
  v20 = v2;
  v3 = v1 != 0 ? 1048667 : 1048603;
  LODWORD(v4) = RtlGetExtendedContextLength2(v3, Size, (unsigned int)v2);
  v5 = (int)v4;
  if ( (int)v4 >= 0 )
  {
    v6 = Size[0];
    v7 = Size[0] + 15LL;
    if ( v7 <= Size[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    v22 = &v18;
    memset(&v18, 0, Size[0]);
    LODWORD(v4) = RtlInitializeExtendedContext2((__int64)&v18, v3, &Size[1], v2);
    v5 = (int)v4;
    if ( (int)v4 >= 0 )
    {
      memset(v29, 0, sizeof(v29));
      --CurrentThread->SpecialApcDisable;
      PspCallThreadNotifyRoutines(CurrentThread, 1u, 1);
      LOBYTE(v9) = 1;
      LODWORD(v4) = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)&v18, 0, v9, 0);
      v5 = (int)v4;
      v18 = (int)v4;
      if ( (int)v4 >= 0 )
      {
        v10 = (char *)((*(_QWORD *)&v28[19] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
        v29[19] = v10 - 40;
        PspCreateUserContext(
          (unsigned int)v29,
          0,
          qword_140D1F328,
          (v28[19] - v6) & 0xFFFFFFF0,
          (__int64)PspSystemDlls[0][4]);
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          v29[25] = v29[31];
          v29[31] = InstrumentationCallback;
        }
        v12 = (__int64)v10;
        if ( v6 - 1 > 0xFFE )
        {
          ProbeForWrite(v10, v6, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
            v12 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v12 = *(_BYTE *)v12;
          *(_BYTE *)(v12 + v6 - 1) = *(_BYTE *)(v12 + v6 - 1);
        }
        LODWORD(v4) = RtlInitializeExtendedContext2((__int64)v10, v3, &v21, v20);
        v5 = (int)v4;
        v18 = (int)v4;
        if ( (int)v4 >= 0 )
        {
          v13 = v22;
          LODWORD(v4) = RtlCopyContext(v10, v3, v22);
          v5 = (int)v4;
          v18 = (int)v4;
          if ( (int)v4 >= 0 )
            LOBYTE(v4) = (unsigned __int8)KePopulateContinuationContext(*((_QWORD *)v13 + 31));
        }
        if ( v5 >= 0 )
        {
          LODWORD(v4) = PspSetContextThreadInternal(CurrentThread, 2);
          v5 = (int)v4;
        }
      }
    }
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v4 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v4->ApcState.ApcListHead[0].Flink != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  if ( v5 < 0 )
  {
    v24[1] = 0;
    v26 = qword_140D1F328;
    v24[0] = v5;
    v27 = 0;
    v25 = 0LL;
    InitialStack = CurrentThread->InitialStack;
    v16 = InitialStack;
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        v16 = (_QWORD *)v16[5];
      while ( (v16[1] & 1) != 0 );
    }
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        InitialStack = (_QWORD *)InitialStack[5];
      while ( (InitialStack[1] & 1) != 0 );
    }
    LOBYTE(v4) = KiDispatchException(v24, (__int64)(InitialStack - 90), (__int64)(v16 - 50), 1u, 0);
  }
  return (char)v4;
}
