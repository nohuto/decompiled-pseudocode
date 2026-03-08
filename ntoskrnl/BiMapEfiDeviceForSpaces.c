/*
 * XREFs of BiMapEfiDeviceForSpaces @ 0x140390584
 * Callers:
 *     BiUpdateBcdObject @ 0x14082DA80 (BiUpdateBcdObject.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     SyspartGetSystemPartition @ 0x140A5C67C (SyspartGetSystemPartition.c)
 *     SyspartIsSpace @ 0x140A5C6E8 (SyspartIsSpace.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiMapEfiDeviceForSpaces(__int64 a1, const void **a2, unsigned int *a3)
{
  int v3; // eax
  int SystemPartition; // edi
  __int64 Pool2; // rax
  void *v9; // rsi
  size_t v10; // r15
  unsigned int v11; // r14d
  size_t v12; // rbx
  char *v13; // rax
  char *v14; // rbp
  size_t v15; // r8
  void *v16; // rbx
  char v17; // [rsp+60h] [rbp+8h] BYREF
  size_t Size; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  v17 = 0;
  LODWORD(Size) = 0;
  SystemPartition = 0;
  if ( (v3 & 8) == 0 )
  {
    SystemPartition = SyspartGetSystemPartition(0LL, 0LL, &Size);
    if ( (int)(SystemPartition + 0x80000000) < 0 || SystemPartition == -1073741789 )
    {
      Pool2 = ExAllocatePool2(258LL, (unsigned int)Size, 1262764866LL);
      v9 = (void *)Pool2;
      if ( Pool2 )
      {
        SystemPartition = SyspartGetSystemPartition(Pool2, (unsigned int)Size, &Size);
        if ( SystemPartition >= 0 )
        {
          SystemPartition = SyspartIsSpace(v9, &v17);
          if ( SystemPartition >= 0 )
          {
            if ( v17 )
            {
              v10 = (unsigned int)Size;
              v11 = Size + 20;
              v12 = (unsigned int)(Size + 20);
              v13 = (char *)ExAllocatePool2(258LL, v12, 1262764866LL);
              v14 = v13;
              if ( v13 )
              {
                memset(v13, 0, v12);
                v15 = v11;
                v16 = (void *)*a2;
                if ( v11 >= *a3 )
                  v15 = *a3;
                memmove(v14, *a2, v15);
                memmove(v14 + 20, v9, v10);
                ExFreePoolWithTag(v16, 0x4B444342u);
                *a2 = v14;
                *a3 = v11;
              }
              else
              {
                SystemPartition = -1073741801;
              }
            }
          }
          else
          {
            BiLogMessage(4LL, L"SyspartIsSpace failed for partition path: %s", v9);
          }
        }
        ExFreePoolWithTag(v9, 0x4B444342u);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)SystemPartition;
}
