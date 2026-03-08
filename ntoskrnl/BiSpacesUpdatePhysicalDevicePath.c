/*
 * XREFs of BiSpacesUpdatePhysicalDevicePath @ 0x14066F1C4
 * Callers:
 *     BiUpdateEfiEntry @ 0x140A5C248 (BiUpdateEfiEntry.c)
 * Callees:
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     SyspartGetPhysicalPartitions @ 0x140A5C57C (SyspartGetPhysicalPartitions.c)
 *     SyspartIsSpace @ 0x140A5C6E8 (SyspartIsSpace.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiSpacesUpdatePhysicalDevicePath(_OWORD **a1)
{
  _DWORD *v2; // rcx
  unsigned int IsSpace; // ebx
  unsigned int v4; // ebp
  wchar_t *Pool2; // r12
  __int64 v6; // rax
  wchar_t *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rax
  _OWORD *v14; // rbp
  _DWORD *v15; // r15
  __int64 v17; // [rsp+20h] [rbp-38h]
  char v18; // [rsp+60h] [rbp+8h] BYREF

  v2 = *a1;
  IsSpace = 0;
  v18 = 0;
  v4 = 108;
  if ( !v2 )
  {
    BiLogMessage(3LL, L"BiSpacesUpdatePhysicalDevicePath null APPLICATION DEVICE");
    return (unsigned int)-1073741811;
  }
  if ( *v2 != 2 )
    return IsSpace;
  IsSpace = SyspartIsSpace(v2 + 5, &v18);
  if ( (IsSpace & 0x80000000) != 0 )
  {
    BiLogMessage(4LL, L"SyspartIsSpace failed for %s", (char *)*a1 + 20);
    return IsSpace;
  }
  if ( !v18 )
    return IsSpace;
  Pool2 = (wchar_t *)ExAllocatePool2(258LL, 520LL, 1262764866LL);
  v6 = ExAllocatePool2(258LL, 520LL, 1262764866LL);
  v7 = (wchar_t *)v6;
  if ( Pool2 && v6 )
  {
    v8 = 22LL;
    if ( *((_WORD *)*a1 + 10) != 92 )
      v8 = 20LL;
    swprintf_s(Pool2, 0x104uLL, L"%s\\%s", L"\\??\\GLOBALROOT", (char *)*a1 + v8);
    while ( 1 )
    {
      v9 = ExAllocatePool2(258LL, v4, 1262764866LL);
      v10 = (_DWORD *)v9;
      if ( !v9 )
        break;
      IsSpace = SyspartGetPhysicalPartitions(Pool2, v9, v4);
      if ( (int)(IsSpace + 0x80000000) >= 0 && IsSpace != -2147483643 )
      {
        BiLogMessage(4LL, L"SyspartGetPhysicalPartitions failed with error code: %x", IsSpace);
LABEL_27:
        ExFreePoolWithTag(v10, 0x4B444342u);
        goto LABEL_30;
      }
      if ( v10[1] <= v4 )
      {
        if ( v10[2] )
        {
          LODWORD(v17) = v10[5];
          swprintf_s(v7, 0x104uLL, L"\\Device\\Harddisk%u\\Partition%u", (unsigned int)v10[4], v17);
          v11 = -1LL;
          do
            ++v11;
          while ( v7[v11] );
          v12 = 2 * v11 + 2;
          v13 = ExAllocatePool2(258LL, (unsigned int)(2 * v11 + 62), 1262764866LL);
          v14 = (_OWORD *)v13;
          if ( v13 )
          {
            v15 = *a1;
            *(_OWORD *)v13 = **a1;
            *(_OWORD *)(v13 + 16) = *((_OWORD *)v15 + 1);
            *(_OWORD *)(v13 + 32) = *((_OWORD *)v15 + 2);
            *(_QWORD *)(v13 + 48) = *((_QWORD *)v15 + 6);
            *(_DWORD *)(v13 + 56) = v15[14];
            memmove((void *)(v13 + 20), v7, v12);
            if ( v15 )
              ExFreePoolWithTag(v15, 0x4B444342u);
            *a1 = v14;
          }
          else
          {
            IsSpace = -1073741801;
          }
        }
        else
        {
          IsSpace = -1073741823;
        }
        goto LABEL_27;
      }
      v4 = v10[1];
      ExFreePoolWithTag(v10, 0x4B444342u);
    }
    IsSpace = -1073741801;
  }
  else
  {
    IsSpace = -1073741801;
    if ( !Pool2 )
      goto LABEL_31;
  }
LABEL_30:
  ExFreePoolWithTag(Pool2, 0x4B444342u);
LABEL_31:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  return IsSpace;
}
