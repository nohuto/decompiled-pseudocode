__int64 __fastcall MiComputeImageVadCommitCharge(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v11[0] = 0LL;
  result = MiGetProtoPteAddress(a1, a2, 6, v11);
  if ( result )
  {
    v8 = (result - *(_QWORD *)(v11[0] + 8LL)) >> 3;
    v9 = (unsigned int)(*(_DWORD *)(v11[0] + 44LL) - v8);
    if ( v9 > a3 )
      v9 = a3;
    if ( (*(_BYTE *)(v11[0] + 32LL) & 0xA) == 0xA )
    {
      v10 = *(_DWORD *)(v11[0] + 44LL) - (*(_DWORD *)(v11[0] + 52LL) & 0x3FFFFFFF);
      if ( (unsigned int)v8 < v10 )
      {
        v4 = v10 - (unsigned int)v8;
        if ( v4 > v9 )
          v4 = v9;
      }
    }
    *a4 = v9;
    return v4;
  }
  else
  {
    *a4 = 1LL;
  }
  return result;
}
