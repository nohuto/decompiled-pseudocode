/*
 * XREFs of PnpLoadBootFilterDriver @ 0x140B6936C
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PipIs32bitKey @ 0x14055D2BC (PipIs32bitKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x1406C1730 (IopGetDriverNameFromKeyNode.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     PnpInitializeBootStartDriver @ 0x140B58AC4 (PnpInitializeBootStartDriver.c)
 */

__int64 __fastcall PnpLoadBootFilterDriver(HANDLE KeyHandle, PCUNICODE_STRING String1, unsigned int a3, _QWORD *a4)
{
  void **v5; // r10
  unsigned int i; // edx
  char *j; // rcx
  __int64 v10; // rbx
  char *v11; // rcx
  char *v12; // rdi
  int started; // eax
  PVOID v14; // rsi
  int v15; // ebx
  unsigned int v17; // [rsp+38h] [rbp-40h]
  UNICODE_STRING String2; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Object = 0LL;
  *a4 = 0LL;
  v5 = (void **)IopGroupTable;
  String2 = 0LL;
  if ( !IopGroupTable || a3 >= IopGroupIndex )
    return 3221225473LL;
  for ( i = 0; i < a3; v5 += 2 )
  {
    for ( j = (char *)*v5; j != (char *)IopGroupTable + 16 * i; j = *(char **)j )
    {
      if ( !j[47] )
        return 3221225473LL;
    }
    ++i;
  }
  _mm_lfence();
  v10 = 16LL * a3;
  v11 = (char *)IopGroupTable + v10;
  v12 = *(char **)((char *)IopGroupTable + v10);
  while ( v12 != v11 )
  {
    if ( (int)IopGetDriverNameFromKeyNode(*((HANDLE *)v12 + 4), &String2) >= 0 )
    {
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
      {
        if ( v12[47] )
        {
          v15 = *((_DWORD *)v12 + 10);
          if ( v15 >= 0 )
            v15 = -1073741823;
        }
        else
        {
          started = PnpInitializeBootStartDriver(
                      &String2.Length,
                      (__int128 *)(*((_QWORD *)v12 + 3) + 32LL),
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 3) + 48LL) + 56LL),
                      *(_QWORD *)(*((_QWORD *)v12 + 3) + 48LL),
                      KeLoaderBlock_0 + 16,
                      1,
                      1,
                      v17,
                      (__int64)&Object);
          v14 = Object;
          v15 = started;
          *((_DWORD *)v12 + 10) = started;
          *((_QWORD *)v12 + 2) = v14;
          v12[47] = 1;
          if ( v14 )
          {
            ObfReferenceObjectWithTag(v14, 0x746C6644u);
            *a4 = v14;
          }
          else
          {
            v12[46] = 1;
          }
        }
        ExFreePoolWithTag(String2.Buffer, 0);
        return (unsigned int)v15;
      }
      ExFreePoolWithTag(String2.Buffer, 0);
    }
    v12 = *(char **)v12;
    v11 = (char *)IopGroupTable + v10;
  }
  v15 = -1073741823;
  if ( (unsigned int)PipIs32bitKey(KeyHandle) )
    return (unsigned int)-1073740948;
  return (unsigned int)v15;
}
