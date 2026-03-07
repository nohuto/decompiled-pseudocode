__int64 __fastcall CcBuildUpHighPriorityMappings(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 *v6; // r14
  unsigned int v7; // ebx
  unsigned int i; // edi

  v2 = *(_DWORD *)(a1 + 1248);
  result = (unsigned int)CcMinimumFreeHighPriorityVacbs;
  if ( v2 < CcMinimumFreeHighPriorityVacbs )
  {
    v6 = (__int64 *)(a2 + 16);
    v7 = CcMinimumFreeHighPriorityVacbs - v2;
    if ( CcMinimumFreeHighPriorityVacbs - v2 <= CcMinimumFreeHighPriorityVacbs )
    {
      for ( i = 0; i < v7; v6 += 5 )
      {
        if ( i >= 0xCCC )
          break;
        result = MmReserveViewInSystemCache(*(_QWORD *)(a1 + 8));
        *v6 = result;
        if ( !result )
          break;
        ++*(_DWORD *)(a2 + 4);
        ++i;
      }
    }
  }
  return result;
}
