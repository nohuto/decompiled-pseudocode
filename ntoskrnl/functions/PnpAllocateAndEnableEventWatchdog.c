__int64 __fastcall PnpAllocateAndEnableEventWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  __int64 Pool2; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 24LL, 1466200144LL);
  v4 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(a1 + 152);
    *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(Pool2 + 20) = *(_DWORD *)(a1 + 128);
    v5 = *(_QWORD *)(a1 + 152);
    if ( v5 )
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
    else
      v6 = 0LL;
    v7 = PnpEnableWatchdog(1LL, v4, (v6 + 56) & -(__int64)(v6 != 0));
    *v4 = v7;
    if ( v7 )
      return v7;
    else
      ExFreePoolWithTag(v4, 0);
  }
  return v1;
}
