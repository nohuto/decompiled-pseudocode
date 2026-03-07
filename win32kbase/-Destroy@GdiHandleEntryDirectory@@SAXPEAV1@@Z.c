void __fastcall GdiHandleEntryDirectory::Destroy(struct GdiHandleEntryDirectory *a1)
{
  __int64 *v2; // rbx
  unsigned int i; // esi
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r15
  char *v9; // rdx

  v2 = (__int64 *)((char *)a1 + 8);
  for ( i = 0; i < 0x100; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = *(_QWORD *)(v4 + 24);
      v6 = (unsigned int)(*(_DWORD *)(v5 + 8) + 255) >> 8;
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          v9 = *(char **)(v7 + *(_QWORD *)v5);
          if ( v9 )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
          v7 += 8LL;
          --v8;
        }
        while ( v8 );
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v5);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v4);
      *v2 = 0LL;
    }
    ++v2;
  }
  if ( a1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
}
