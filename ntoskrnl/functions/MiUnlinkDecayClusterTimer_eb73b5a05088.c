__int64 __fastcall MiUnlinkDecayClusterTimer(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r10
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r11
  ULONG_PTR v7; // r8
  __int64 result; // rax

  v2 = *(unsigned __int8 *)(a1 + 34) >> 6;
  v3 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (unsigned int)v4 >> 1;
  v6 = v4 >> 33;
  if ( v5 == 0x7FFFFFFF )
  {
    v1 = *(unsigned __int8 *)(a1 + 34) >> 6;
    *(_QWORD *)(v3 + 8 * v1 + 15744) = v4 ^ (*(_QWORD *)(v3 + 8 * v1 + 15744) ^ v4) & 0x1FFFFFFFFLL;
  }
  else
  {
    *(_QWORD *)(48 * (qword_140C67DE0 + v5) - 0x220000000000LL + 8) = v4 ^ (*(_QWORD *)(48 * (qword_140C67DE0 + v5)
                                                                                      - 0x220000000000LL
                                                                                      + 8) ^ v4) & 0x1FFFFFFFFLL;
  }
  if ( v6 == 0x7FFFFFFF )
  {
    result = (*(_DWORD *)(v3 + 8 * v2 + 15744) ^ (unsigned int)v4) & 0xFFFFFFFE;
    *(_QWORD *)(v3 + 8 * v2 + 15744) ^= result;
  }
  else
  {
    v7 = 48 * (v6 + qword_140C67DE0) - 0x220000000000LL;
    result = (*(_QWORD *)(v7 + 8) ^ v4) & 0xFFFFFFFE;
    *(_QWORD *)(v7 + 8) ^= result;
  }
  return result;
}
