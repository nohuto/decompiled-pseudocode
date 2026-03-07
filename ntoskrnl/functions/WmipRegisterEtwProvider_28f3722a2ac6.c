void __fastcall WmipRegisterEtwProvider(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 Pool2; // rax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0LL;
  if ( ++*(_DWORD *)(v2 + 152) == 1 )
  {
    Pool2 = ExAllocatePool2(256LL, 24LL, 1885957463LL);
    v3 = Pool2;
    if ( !Pool2 )
      return;
    *(_QWORD *)(v2 + 112) = Pool2;
    *(_DWORD *)(Pool2 + 16) = 0;
  }
  else if ( *(_QWORD *)(v2 + 120) )
  {
    v3 = ExAllocatePool2(256LL, 48LL, 1885957463LL);
    if ( !v3 )
      return;
    *(_DWORD *)(a1 + 16) |= 0x200000u;
    WmipReferenceEntry(*(_QWORD *)(a1 + 64));
    *(_DWORD *)(v3 + 16) = 2;
    *(_DWORD *)(v3 + 32) = 1;
    *(_QWORD *)(v3 + 40) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(v2 + 120);
    *(_BYTE *)(v3 + 36) = 1;
  }
  *(_DWORD *)(a1 + 16) |= 0x100000u;
  if ( v3 )
    WmipQueueLegacyEtwWork(v3, v2, a2);
}
