__int64 __fastcall HUBDSM_DeterminingPortResetTypeRequired(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_DWORD *)(v1 + 32)
    || (v3 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v1 + 2424),
        *(_QWORD *)(v1 + 2424) = MEMORY[0xFFFFF78000000014],
        v3 < 10000000)
    || (v4 = *(_DWORD *)(v1 + 1636), (v4 & 8) != 0) )
  {
    result = 4053LL;
  }
  else if ( (v4 & 4) != 0 )
  {
    result = (*(_DWORD *)(v1 + 1644) & 0x4000) != 0 ? 4053 : 4021;
  }
  else
  {
    result = 4029LL;
  }
  _InterlockedAnd((volatile signed __int32 *)(v1 + 1636), 0xFFFFFFFB);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 1636), 0xFFFFFFF7);
  return result;
}
