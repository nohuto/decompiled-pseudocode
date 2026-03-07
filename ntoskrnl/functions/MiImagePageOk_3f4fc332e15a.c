_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 v4; // rax
  __int64 **Address; // rsi
  unsigned __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // ecx

  v4 = *(_QWORD *)(a2 + 40);
  Address = a4;
  if ( v4 >= 0 )
    return 1LL;
  v7 = *(_QWORD *)(a2 + 16);
  if ( (v7 & 0x400) == 0 || (((unsigned __int64)v4 >> 60) & 7) == 3 )
    return 1LL;
  v9 = v7;
  if ( qword_140C657C0 && (v7 & 0x10) == 0 )
    v9 = ~qword_140C657C0 & v7;
  v10 = v9 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v10 + 56LL) & 0x20) == 0 )
    return 1LL;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 96LL) + 40LL);
  if ( !v11 || (v11 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v11 & 3) == 2 )
    return 1LL;
  if ( a1 < 0xFFFF800000000000uLL )
  {
    if ( a4 )
    {
LABEL_18:
      v12 = *((_DWORD *)Address + 12);
      return (v12 & 0x70) == 0x20
          && ((v12 & 0xF80) == 0x80
           || ((_DWORD)Address[8] & 0x8000000) != 0 && (v11 & 4) == 0
           || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v10 + 34) & 2) != 0);
    }
    MiLockVadTree(1);
    Address = MiLocateAddress(a1);
    MiUnlockVadTree(1, 0x11u);
  }
  else if ( ((((v7 >> 5) & 2) != 0) & _bittest((const signed __int32 *)&MiFlags, 0xFu)) == 0 )
  {
    return 1LL;
  }
  if ( Address )
    goto LABEL_18;
  return 0LL;
}
