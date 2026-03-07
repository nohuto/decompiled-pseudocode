__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  _QWORD *v2; // rax
  int v3; // r10d
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v5);
  return RtlpHpFreeHeap(*v2, v3, 0x1000000, 0, 0LL);
}
