__int64 __fastcall MiConvertContiguousMemoryParameters(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int16 a4,
        unsigned int a5,
        unsigned int a6,
        _OWORD *a7)
{
  unsigned int ProtectionMask; // eax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  __int64 v11; // r11
  __int16 v12; // cx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8

  *a7 = 0LL;
  a7[1] = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *(_QWORD *)a7 = a2 >> 12;
  if ( (a2 & 0xFFF) != 0 )
    *(_QWORD *)a7 = (a2 >> 12) + 1;
  if ( (a4 & 0xFFF) != 0 )
    return 3221225485LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  *(_DWORD *)(v11 + 24) = ProtectionMask;
  if ( (v12 & 0x100) != 0
    || ProtectionMask == -1
    || (ProtectionMask & 5) != 4
    || (ProtectionMask & 2) != 0 && (ProtectionMask >> 3 == 1 || ProtectionMask >> 3 == 3 && (ProtectionMask & 7) != 0) )
  {
    return 3221225485LL;
  }
  v13 = qword_140C65820;
  v14 = v8 >> 12;
  *(_QWORD *)(v11 + 16) = v9 >> 12;
  *(_QWORD *)(v11 + 8) = v14;
  if ( v14 > v13 )
  {
    *(_QWORD *)(v11 + 8) = v13;
    v14 = v13;
  }
  if ( v10 <= v14 )
  {
    if ( a6 == 0x80000000 || a6 < (unsigned __int16)KeNumberNodes )
      return 0LL;
    return 3221225485LL;
  }
  return 3221225626LL;
}
