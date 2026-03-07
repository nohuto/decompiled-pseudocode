unsigned __int64 __fastcall HalpBlkPoPerformPpmOperationForMsr(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 12) - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      v4 = *(_QWORD *)(a1 + 32);
      if ( v3 )
        v4 = __readmsr(*(_DWORD *)(a1 + 20)) & v3 | ~v3 & v4;
      result = v4;
      __writemsr(*(_DWORD *)(a1 + 20), v4);
    }
    else
    {
      __debugbreak();
    }
  }
  else
  {
    result = __readmsr(*(_DWORD *)(a1 + 20));
    *(_QWORD *)(a1 + 24) = result;
  }
  return result;
}
