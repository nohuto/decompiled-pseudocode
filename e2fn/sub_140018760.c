unsigned __int64 __fastcall sub_140018760(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 - 12);
  for ( *a2 = 0; v2 != *(_DWORD *)(a1 - 8); ++*a2 )
  {
    v5 = *(_QWORD *)(a1 + 72);
    v7 = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 16LL * v2);
    if ( !(unsigned __int8)sub_1400188D0(a1 - 496, &v7, v5 + 8LL * v2) )
      break;
    *(_DWORD *)(a1 + 104) += *(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 8LL * v2);
    v2 = *(_DWORD *)(a1 - 24) & (v2 + 1);
  }
  *(_DWORD *)(a1 - 12) = v2;
  return sub_140018700(a1 - 496);
}
