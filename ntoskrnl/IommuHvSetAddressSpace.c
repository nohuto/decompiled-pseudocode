__int64 __fastcall IommuHvSetAddressSpace(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // r8
  int v5; // eax

  v4 = a2 | 1;
  if ( !a2 )
    v4 = 0LL;
  v5 = qword_140C62210(0LL, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL), v4);
  if ( v5 < 0 )
    KeBugCheckEx(0x159u, 0x3200uLL, v5, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL), a2);
  return 0LL;
}
