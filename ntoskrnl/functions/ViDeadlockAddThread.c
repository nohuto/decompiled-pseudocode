__int64 __fastcall ViDeadlockAddThread(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r9

  result = 0LL;
  if ( a2 )
  {
    v5 = ViDeadlockGlobals;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 44) = 0;
    *(_BYTE *)(a2 + 48) = 0;
    *(_QWORD *)a2 = a1;
    v6 = ((a1 >> 12) * (unsigned __int128)0x40100401004011uLL) >> 64;
    v7 = (a1 >> 12) - 1023 * ((v6 + (((a1 >> 12) - v6) >> 1)) >> 9);
    v8 = (_QWORD *)(a2 + 24);
    v9 = v5[2050] + 16 * v7;
    v10 = *(_QWORD *)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
      __fastfail(3u);
    *(_QWORD *)(a2 + 32) = v9;
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    *(_QWORD *)v9 = v8;
    VfUtilAddressRangeAdd(&v5[2 * v7 + 2052], a1, 2320LL);
    ++*(_QWORD *)(v11 + 16408);
    return v12;
  }
  return result;
}
