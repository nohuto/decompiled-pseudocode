/*
 * XREFs of EtwpTiQueryVad @ 0x140793610
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x140793510 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTiLogReadWriteVm @ 0x1407F1248 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogProtectExecVm @ 0x1408A2C4A (EtwTiLogProtectExecVm.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x140412770 (ZwQueryVirtualMemory.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpTiQueryVad(__int64 a1, _KPROCESS *a2, PVOID *a3, unsigned int a4, char a5)
{
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // edi
  PVOID *v11; // rbx
  char *v12; // r15
  NTSTATUS VirtualMemory; // eax
  void *Pool2; // rax
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+30h] [rbp-78h] BYREF

  memset(&v16, 0, sizeof(v16));
  if ( a2 == KeGetCurrentThread()->ApcState.Process )
  {
    v8 = 0;
  }
  else
  {
    KiStackAttachProcess(a2, 0, (__int64)&v16);
    v8 = 1;
  }
  v9 = 0;
  v10 = 0;
  if ( a4 )
  {
    v11 = (PVOID *)(a1 + 56);
    v12 = (char *)(a1 + 8);
    do
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        *a3,
                        (MEMORY_INFORMATION_CLASS)3,
                        v12,
                        0x30uLL,
                        0LL);
      *((_DWORD *)v11 - 14) = VirtualMemory;
      if ( VirtualMemory >= 0 )
      {
        v9 |= 1 << v10;
        if ( a5 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
          *v11 = Pool2;
          if ( !Pool2
            || ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 *a3,
                 (MEMORY_INFORMATION_CLASS)2,
                 Pool2,
                 0x200uLL,
                 0LL) >= 0 )
          {
            goto LABEL_9;
          }
          ExFreePoolWithTag(*v11, 0);
        }
        *v11 = 0LL;
      }
LABEL_9:
      ++v10;
      v12 += 64;
      ++a3;
      v11 += 8;
    }
    while ( v10 < a4 );
  }
  if ( v8 )
    KiUnstackDetachProcess(&v16);
  return v9;
}
