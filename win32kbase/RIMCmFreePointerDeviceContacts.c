__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1)
{
  char *v1; // rdx
  char *v3; // rdx
  __int64 result; // rax

  v1 = *(char **)(a1 + 992);
  if ( v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *(_QWORD *)(a1 + 992) = 0LL;
    *(_DWORD *)(a1 + 1000) = 0;
  }
  v3 = *(char **)(a1 + 968);
  if ( v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    *(_QWORD *)(a1 + 968) = 0LL;
  }
  result = a1 + 976;
  *(_QWORD *)(a1 + 984) = a1 + 976;
  *(_QWORD *)(a1 + 976) = a1 + 976;
  return result;
}
