__int64 __fastcall MiHotAddBootDescriptor(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // esi
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 40);
  MiSearchNumaNodeTable(v1);
  v7 = v1 << 12;
  v4 = 2560;
  v6 = v3 << 12;
  if ( v2 != 24 )
    v4 = 2048;
  return MiAddPhysicalMemoryChunks(MiSystemPartition, &v7, &v6, 0LL, v4, 0);
}
