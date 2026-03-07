__int64 __fastcall VidSchiVirtualizeFlipInterval(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // r8
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 1320);
  if ( !v2 )
  {
    *(_DWORD *)(a2 + 1320) = 1;
    v2 = 1;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 1040) + 40LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v5 + 16) + 138LL) )
  {
    v6 = *(_DWORD *)(a1 + 82932);
    if ( v2 != v6 && (*(_DWORD *)(a2 + 1136) & 0x100) == 0 && *(_DWORD *)(a1 + 4) != 3 )
    {
      v7 = *(unsigned int *)(a2 + 1072);
      if ( v2 >= v6 )
      {
        LOBYTE(v6) = (unsigned int)v7 / v2;
        *(_DWORD *)(a2 + 1072) = (unsigned int)v7 / v2;
      }
      else
      {
        if ( (_DWORD)v7 )
          v6 *= (_DWORD)v7;
        *(_DWORD *)(a2 + 1072) = v6;
      }
      if ( (byte_1C00769C4 & 1) != 0 )
        McTemplateK0qqqq_EtwWriteTransfer(
          v5,
          &EventVirtualizeFlipSubmissionRate,
          v7,
          v2,
          *(_DWORD *)(a1 + 82932),
          v7,
          v6);
    }
  }
  result = *(unsigned int *)(a1 + 82932);
  *(_DWORD *)(a2 + 1320) = result;
  return result;
}
