__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, unsigned int a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h]
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF

  v11 = a2 << 16;
  v12 = a3 & 0x1FFFFFF;
  ExSetHandleAttributes((__int64)&v11, a4, 15);
  CurrentThread = KeGetCurrentThread();
  v11 |= 1uLL;
  v13 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = ExpAllocateHandleTableEntry(a1, &v13);
  v8 = v13;
  v9 = (_QWORD *)v7;
  if ( v7 )
  {
    if ( a5 && (*a5 || a5[1]) && (unsigned int)ExpSetHandleExtraInfo(a1, v13, a5) )
    {
      ExpFreeHandleTableEntry(a1, v8, (__int64)v9);
      v8 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v8, 1LL);
      v9[1] = v12;
      *v9 = v11;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v8;
}
