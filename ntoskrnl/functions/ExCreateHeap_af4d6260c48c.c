__int64 __fastcall ExCreateHeap(__int128 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = *a1;
  v4 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *, __int128 *))RtlpHpHeapCreate)((unsigned int)a2, a2, a3, &v7);
  v5 = 0;
  if ( v4 )
  {
    *(_BYTE *)(v4 + 333) |= 0x10u;
    *(_BYTE *)(v4 + 525) |= 0x10u;
    *a3 = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
