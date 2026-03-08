/*
 * XREFs of KeDisconnectInterrupt @ 0x14028E38C
 * Callers:
 *     KeConnectInterrupt @ 0x14028FA54 (KeConnectInterrupt.c)
 *     IoDisconnectInterrupt @ 0x1406F41C0 (IoDisconnectInterrupt.c)
 * Callees:
 *     KiIntSteerDisable @ 0x14028E484 (KiIntSteerDisable.c)
 *     KeMaskInterrupt @ 0x14028E5A8 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x14028E714 (KiDisconnectInterruptCommon.c)
 *     KiIsInterruptTypeSecondary @ 0x140290340 (KiIsInterruptTypeSecondary.c)
 *     KiClearSystemPriority @ 0x1402DAA90 (KiClearSystemPriority.c)
 *     KiSetSystemPriorityThread @ 0x1402E9F30 (KiSetSystemPriorityThread.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14056F468 (KiDisconnectSecondaryInterrupt.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeDisconnectInterrupt(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  unsigned int v6; // esi
  char IsInterruptTypeSecondary; // r13
  __int64 v8; // rbp
  __int64 *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // eax
  void *v13; // rcx
  __int64 v15; // rdx

  v3 = (unsigned __int8)a2;
  v5 = a1;
  v6 = 0;
  KeMaskInterrupt(a1, a2, a3, 0LL);
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v8 = (unsigned int)v3;
  KiIntSteerDisable(v5, (unsigned int)v3);
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread());
  if ( (_BYTE)v3 )
  {
    v9 = v5;
    v10 = (unsigned int)v3;
    do
    {
      v11 = *v9;
      if ( IsInterruptTypeSecondary )
        v12 = KiDisconnectSecondaryInterrupt(*v9, a3);
      else
        v12 = KiDisconnectInterruptCommon(0LL, *v9, a3);
      _InterlockedOr((volatile signed __int32 *)(v11 + 104), 1u);
      if ( v12 < 0 )
      {
        v6 = v12;
      }
      else if ( v12 == 296 )
      {
        v6 = 296;
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    v3 = v8;
  }
  KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread());
  v13 = *(void **)(*v5 + 272);
  if ( v13 )
  {
    if ( (_DWORD)v8 )
    {
      do
      {
        v15 = *v5++;
        *(_QWORD *)(v15 + 272) = 0LL;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(v13, 0x5249654Bu);
  }
  return v6;
}
