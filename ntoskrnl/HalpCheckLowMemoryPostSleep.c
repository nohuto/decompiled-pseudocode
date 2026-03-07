_UNKNOWN **__fastcall HalpCheckLowMemoryPostSleep(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 i; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  *a1 = -1;
  *a2 = 0;
  *a3 = 0;
  if ( (HalpSleepContext & 0x20000) != 0 && !HalpResumeFromHibernate )
  {
    v7 = (unsigned __int64)HalpLowStubPhysicalAddress >> 12;
    v8 = ((unsigned __int64)HalpLowStubPhysicalAddress >> 12) + 1;
    if ( ((unsigned __int16)HalpLowStubPhysicalAddress & 0xFFF) == 0 )
      v8 = (unsigned __int64)HalpLowStubPhysicalAddress >> 12;
    for ( i = 0LL; i < 0x100; ++i )
    {
      result = (_UNKNOWN **)HalpLowMemoryMap.Buffer;
      v10 = (unsigned __int64)(unsigned int)i >> 3;
      if ( ((*((char *)HalpLowMemoryMap.Buffer + v10) >> (i & 7)) & 1) == 0 )
      {
        result = (_UNKNOWN **)HalpLowMemoryMapStack.Buffer;
        if ( ((*((char *)HalpLowMemoryMapStack.Buffer + v10) >> (i & 7)) & 1) == 0 && i != v7 && i != v8 )
        {
          result = (_UNKNOWN **)HalpMapPhysicalMemory64(i << 12, 1LL, 0, 4LL);
          if ( result )
          {
            if ( (unsigned __int8)HalpSimpleCheck(result, v11, v12, result) != HalpPhysicalMemoryCheckSums[i] )
            {
              if ( i < (unsigned int)*a1 )
                *a1 = i;
              if ( i > (unsigned int)*a2 )
                *a2 = i;
              ++*a3;
            }
            result = (_UNKNOWN **)HalpUnmapVirtualAddress(v13, 1LL, 0LL);
          }
        }
      }
    }
  }
  return result;
}
