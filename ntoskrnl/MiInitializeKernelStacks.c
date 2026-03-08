/*
 * XREFs of MiInitializeKernelStacks @ 0x140B3B3A4
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14021055C (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403715AC (MiBuildDynamicRegion.c)
 *     MiMarkBootGuardPage @ 0x14080B0BC (MiMarkBootGuardPage.c)
 *     MiMarkBootKernelStack @ 0x140B3AD3C (MiMarkBootKernelStack.c)
 *     MiInitializePteInfo @ 0x140B3B548 (MiInitializePteInfo.c)
 */

__int64 MiInitializeKernelStacks()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  int v4; // ebp
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 *v10; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
  v2 = (((v1 - (unsigned int)KeKernelStackSize) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v2, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v3, (((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMarkBootGuardPage(v3 - 8);
  MiMarkBootGuardPage(v2 - 8);
  v4 = 14;
  v5 = 0x10000000000LL;
  byte_140C6813C = (unsigned int)KeKernelStackSize >> 12;
  v6 = 0;
  v7 = qword_140C68028 + 216LL * (unsigned __int16)KeNumberNodes;
  v8 = 9LL;
  while ( 1 )
  {
    v9 = qword_140C6A158[2 * v8];
    v10 = MiSystemVaToDynamicBitmap(v4);
    if ( !(unsigned int)MiBuildDynamicRegion(v10, v9, v5)
      || !(unsigned int)MiInitializePteInfo((unsigned int)&unk_140C68088 + 88 * v6, v4, 0, 5, v9, v5, 1, v7) )
    {
      break;
    }
    v8 = 13LL;
    ++v6;
    v5 = 0x8000000000LL;
    v7 += 72LL * (unsigned __int16)KeNumberNodes;
    v4 = 16;
    if ( v6 >= 2 )
      return 1LL;
  }
  return 0LL;
}
