__int64 __fastcall KiTpWriteMemory(_KPROCESS *a1, char a2, char *a3, __int64 a4)
{
  int v8; // ebx
  char v9; // r14
  __int64 v10; // rcx
  $115DCDF994C6370D29323EAB0E0C9502 v12; // [rsp+30h] [rbp-68h] BYREF

  memset(&v12, 0, sizeof(v12));
  if ( a1 )
    KiStackAttachProcess(a1, 0, (__int64)&v12);
  if ( a2 == 1 )
  {
    v8 = KiTpWriteUmMemory(a1, a3, a4, 1LL);
  }
  else if ( (KiDynamicTraceEnabled & 4) != 0 )
  {
    v8 = MmDbgCopyMemory(a3, a4, 1u, 1u, 1);
    if ( v8 < 0 )
    {
      v9 = KdEnterDebugger(0LL, 0LL);
      v8 = MmDbgCopyMemory(a3, a4, 1u, 1u, 5);
      if ( v8 < 0 )
        v8 = MmDbgCopyMemory(a3, a4, 1u, 1u, 69);
      LOBYTE(v10) = v9;
      KdExitDebugger(v10);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  if ( a1 )
    KiUnstackDetachProcess(&v12);
  return (unsigned int)v8;
}
