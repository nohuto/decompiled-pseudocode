__int64 (__fastcall *ExpInitializeMemoryMirroring())(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 v1; // r9
  unsigned int *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+30h] [rbp-30h]
  int v7; // [rsp+34h] [rbp-2Ch]
  __int64 v8; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+4Ch] [rbp-14h]
  __int128 v12; // [rsp+50h] [rbp-10h]
  __int64 v13; // [rsp+70h] [rbp+10h] BYREF

  v11 = 0;
  v13 = 0LL;
  v7 = 0;
  result = (__int64 (__fastcall *)(_QWORD))KeLoaderBlock_0;
  DestinationString = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3752LL) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\NonMirroredMemory");
    v8 = 0LL;
    p_DestinationString = &DestinationString;
    v6 = 48;
    v10 = 512;
    v12 = 0LL;
    result = (__int64 (__fastcall *)(_QWORD))ZwCreatePartition(0LL, (__int64)&v13);
    if ( (int)result >= 0 )
    {
      v2 = *(unsigned int **)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3752LL);
      v3 = *v2;
      if ( (_DWORD)v3 )
        ExpAddNonMirroredRanges(
          v13,
          v3,
          *((_QWORD *)v2 + 1),
          0LL,
          *(_QWORD *)&DestinationString.Length,
          DestinationString.Buffer);
      v4 = v2[1];
      if ( (_DWORD)v4 )
      {
        LOBYTE(v1) = 1;
        ExpAddNonMirroredRanges(
          v13,
          v4,
          *((_QWORD *)v2 + 2),
          v1,
          *(_QWORD *)&DestinationString.Length,
          DestinationString.Buffer);
      }
      result = qword_140C316A0;
      if ( qword_140C316A0 )
        return (__int64 (__fastcall *)(_QWORD))qword_140C316A0(v13);
    }
  }
  return result;
}
