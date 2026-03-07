__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx

  result = (*(_DWORD *)(a1 + 1376) >> 9) & 7;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 1068);
    if ( (int)result >= v4 )
      result = (unsigned int)v4;
  }
  if ( (int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1440) )
      return 2LL;
  }
  return result;
}
