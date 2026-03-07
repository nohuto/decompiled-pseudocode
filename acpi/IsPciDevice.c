__int64 __fastcall IsPciDevice(volatile signed __int32 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 Pool2; // rax

  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    return 3221225473LL;
  if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 128LL, 1181770561LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = a1;
      dword_1C006F938 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement(a1 + 2);
      *(_DWORD *)(Pool2 + 36) = -1;
      *(_QWORD *)(Pool2 + 40) = a2;
      *(_QWORD *)(Pool2 + 48) = a3;
      *(_QWORD *)(Pool2 + 56) = a4;
      return IsPciDeviceWorker(a1, 0LL, 0LL);
    }
    else
    {
      return 3221225626LL;
    }
  }
}
