__int64 __fastcall ObpCheckDuplicateEntries(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v1 = 0;
  v3[0] = a1;
  v3[1] = a1;
  v3[2] = 0LL;
  v5 = 0LL;
  v4 = 0LL;
  if ( (int)RtlEnumerateBoundaryDescriptorEntries(a1 + 48, ObpCompareEntryLevel1, v3) < 0 || (int)v5 < 0 )
    return 0LL;
  LOBYTE(v1) = HIDWORD(v4) == (_DWORD)v4;
  return v1;
}
