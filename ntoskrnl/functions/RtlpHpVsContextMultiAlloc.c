__int64 __fastcall RtlpHpVsContextMultiAlloc(__int64 a1, int a2, unsigned int a3, int a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v6; // rdi
  _QWORD *v11; // rsi
  unsigned int v12; // ebx
  _QWORD *Internal; // rax
  __int64 result; // rax
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+90h] [rbp+18h] BYREF

  v6 = 0LL;
  v17 = 0;
  v16 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v15 = 0LL;
  if ( a3 )
  {
    do
    {
      Internal = (_QWORD *)RtlpHpVsContextAllocateInternal(a1, a2, a2, a4, (__int64)&v15, (__int64)&v17);
      if ( !Internal )
        break;
      if ( !v11 )
        v11 = Internal;
      ++v12;
      *Internal = v6;
      v6 = Internal;
    }
    while ( v12 < a3 );
    if ( v17 && (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v15);
  }
  result = v12;
  *a5 = v6;
  *a6 = v11;
  return result;
}
