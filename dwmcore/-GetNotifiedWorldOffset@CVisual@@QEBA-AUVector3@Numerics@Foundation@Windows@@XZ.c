__int64 __fastcall CVisual::GetNotifiedWorldOffset(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 i; // rcx

  v2 = *(_QWORD *)(a1 + 224);
  if ( (*(_DWORD *)(v2 + 4) & 0x400000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0xA000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *(_QWORD *)a2 = *(_QWORD *)(i + 4);
    v3 = *(_DWORD *)(i + 12);
  }
  else
  {
    v3 = 0;
    *(_QWORD *)a2 = 0LL;
  }
  *(_DWORD *)(a2 + 8) = v3;
  return a2;
}
