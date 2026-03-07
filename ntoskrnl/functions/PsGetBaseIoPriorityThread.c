__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ecx

  result = (*(_DWORD *)(a1 + 1376) >> 9) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1068);
    if ( (int)result >= v3 )
      return (unsigned int)v3;
  }
  return result;
}
