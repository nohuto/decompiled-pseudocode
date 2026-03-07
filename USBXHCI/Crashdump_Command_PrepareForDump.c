__int64 __fastcall Crashdump_Command_PrepareForDump(__int64 a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp+8h]

  memset(*(void **)(a1 + 32), 0, *(unsigned int *)(a1 + 40));
  v2 = *(_DWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 56) = 1;
  if ( (*(_QWORD *)(v3 + 8) & 1) != 0 )
    LODWORD(v9) = *v2;
  else
    v9 = *(_QWORD *)v2;
  if ( (v9 & 8) == 0
    || (DbgPrintEx(0x93u, 2u, "XHCIDUMP: Command ring is not stopped, stopping now\n"),
        result = Crashdump_Command_Stop(a1, 0LL),
        (int)result >= 0) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 28LL) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 28LL) & 0xFFFF03FF | 0x1800;
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 28LL) |= 2u;
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) = *(_QWORD *)(a1 + 24);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_DWORD **)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 24) | 1LL;
    *(_DWORD *)(a1 + 56) = 1;
    if ( (*(_QWORD *)(v5 + 8) & 1) != 0 )
    {
      *v6 = v7;
      _InterlockedOr(v8, 0);
      v6[1] = HIDWORD(v7);
    }
    else
    {
      *(_QWORD *)v6 = v7;
    }
    _InterlockedOr(v8, 0);
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Installed new Command Ring\n");
    return 0LL;
  }
  return result;
}
