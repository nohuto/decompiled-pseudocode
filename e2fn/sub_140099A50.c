__int64 __fastcall sub_140099A50(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // esi
  unsigned int v4; // edi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 384);
  v2 = 0;
  v4 = *(_DWORD *)(v1 + 52);
  if ( v4 != *(_DWORD *)(v1 + 12) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 456) + 56LL))(
        *(_QWORD *)(a1 + 456),
        *(_QWORD *)(*(_QWORD *)(a1 + 488) * v4 + *(_QWORD *)(a1 + 480)));
      ++v2;
      v4 = (v4 + 1) & *(_DWORD *)(*(_QWORD *)(a1 + 384) + 8LL);
      if ( v2 >= *(_DWORD *)(a1 + 568) )
      {
        v2 = 0;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 64LL))(*(_QWORD *)(a1 + 456));
      }
    }
    while ( v4 != *(_DWORD *)(*(_QWORD *)(a1 + 384) + 12LL) );
    if ( v2 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 64LL))(*(_QWORD *)(a1 + 456));
  }
  result = *(_QWORD *)(a1 + 384);
  *(_DWORD *)(result + 52) = v4;
  return result;
}
