/*
 * XREFs of HalpAllocPhysicalMemoryInternal @ 0x140B3DA64
 * Callers:
 *     HalpAllocPhysicalMemory @ 0x140B3D9F4 (HalpAllocPhysicalMemory.c)
 * Callees:
 *     HalpAllocPhysicalMemoryFromDescriptor @ 0x140B3DCB0 (HalpAllocPhysicalMemoryFromDescriptor.c)
 */

unsigned __int64 __fastcall HalpAllocPhysicalMemoryInternal(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  unsigned int v5; // r9d
  unsigned __int64 v6; // rbp
  int v7; // r15d
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 *i; // rsi
  __int64 *v12; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v14; // r10
  __int64 v15; // r8
  char *v16; // r9
  __int64 v17; // r8
  int v18; // r8d
  __int64 v19; // rdx
  __int64 **v20; // rcx
  __int64 *v21; // rdx
  __int64 **v22; // rcx
  __int64 v23; // r8
  char *v24; // r11
  __int64 *v25; // rcx
  __int64 *v26; // rcx

  v5 = a3;
  if ( HalpUsedAllocDescriptors + 2 <= (unsigned int)HalpAllocationDescriptorArraySize )
  {
    v6 = -1LL;
    v7 = 1;
    if ( a2 )
      v6 = *a2 >> 12;
    v8 = a3;
    if ( v6 >= a3 )
    {
      if ( HalpMiscDiscardLowMemory && v6 - a3 >= 0x100 )
        v7 = 256;
      v9 = 0LL;
      v10 = (__int64 *)(a1 + 32);
      for ( i = *(__int64 **)(a1 + 32); ; i = (__int64 *)*i )
      {
        if ( i == v10 )
          return 0LL;
        v12 = v9;
        v9 = i;
        result = HalpAllocPhysicalMemoryFromDescriptor((_DWORD)i, v6, v7, v5, a4);
        if ( result )
          break;
      }
      v14 = (result >> 12) - i[4];
      if ( i != v10 )
      {
        if ( !v14 && v12 && *((_DWORD *)v12 + 6) == 26 && (v15 = v12[5], v15 + v12[4] == i[4]) )
        {
          v16 = 0LL;
          v12[5] = v15 + v8;
        }
        else
        {
          v18 = HalpUsedAllocDescriptors;
          v16 = (char *)HalpAllocationDescriptorArray + 48 * (unsigned int)HalpUsedAllocDescriptors;
          *((_QWORD *)v16 + 5) = v8;
          v19 = i[4];
          *((_DWORD *)v16 + 6) = 26;
          *((_QWORD *)v16 + 4) = v14 + v19;
          HalpUsedAllocDescriptors = v18 + 1;
        }
        v17 = i[5] - v8;
        if ( v14 )
        {
          v23 = v17 - v14;
          if ( v23 )
          {
            v24 = (char *)HalpAllocationDescriptorArray + 48 * (unsigned int)HalpUsedAllocDescriptors++;
            *((_QWORD *)v24 + 5) = v23;
            *((_QWORD *)v24 + 4) = i[4] + v8 + v14;
            *((_DWORD *)v24 + 6) = *((_DWORD *)i + 6);
            v25 = (__int64 *)*i;
            if ( *(__int64 **)(*i + 8) != i )
              goto LABEL_34;
            *(_QWORD *)v24 = v25;
            *((_QWORD *)v24 + 1) = i;
            v25[1] = (__int64)v24;
            *i = (__int64)v24;
          }
          i[5] = v14;
          v26 = (__int64 *)*i;
          if ( *(__int64 **)(*i + 8) == i )
          {
            *(_QWORD *)v16 = v26;
            *((_QWORD *)v16 + 1) = i;
            v26[1] = (__int64)v16;
            *i = (__int64)v16;
            goto LABEL_22;
          }
        }
        else
        {
          i[4] += v8;
          i[5] = v17;
          if ( v16 )
          {
            v20 = (__int64 **)i[1];
            if ( *v20 != i )
              goto LABEL_34;
            *(_QWORD *)v16 = i;
            *((_QWORD *)v16 + 1) = v20;
            *v20 = (__int64 *)v16;
            i[1] = (__int64)v16;
          }
          if ( i[5] )
          {
LABEL_22:
            HalpMmEarlyPhysicalPagesAllocated += v8;
            return result;
          }
          v21 = (__int64 *)*i;
          if ( *(__int64 **)(*i + 8) == i )
          {
            v22 = (__int64 **)i[1];
            if ( *v22 == i )
            {
              *v22 = v21;
              v21[1] = (__int64)v22;
              goto LABEL_22;
            }
          }
        }
LABEL_34:
        __fastfail(3u);
      }
    }
  }
  return 0LL;
}
