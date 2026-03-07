__int64 __fastcall Bulk_Initialize(__int64 a1)
{
  bool v1; // r8
  int v2; // edx
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rax

  v1 = 0;
  *(_QWORD *)(a1 + 376) = a1 + 368;
  v2 = 1;
  *(_QWORD *)(a1 + 368) = a1 + 368;
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 408) = a1 + 400;
  *(_QWORD *)(a1 + 400) = a1 + 400;
  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(v3 + 336) & 0x20000LL) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( (*(_WORD *)(v4 + 100) & 0x7FFu) >= 8 )
      v1 = *(_BYTE *)(v4 + 98) >= 0;
  }
  *(_BYTE *)(a1 + 320) = v1;
  v5 = *(_QWORD *)(v3 + 336);
  if ( (v5 & 0x8000000000LL) == 0 && (v5 & 8) == 0 )
    v2 = 5;
  *(_DWORD *)(a1 + 344) = v2;
  return 0LL;
}
