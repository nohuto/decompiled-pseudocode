__int64 __fastcall IoAddProcessThreadsToDump(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  int v5; // r8d
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a2 + 48);
  v4 = *(_QWORD **)(a2 + 48);
  v5 = 0;
  while ( v4 != v2 )
  {
    v8 = 0LL;
    v6 = MmAddRangeToCrashDump(a1, v4 - 95, 2320LL);
    v5 = v6;
    if ( v6 >= 0 && (*(_DWORD *)(v4 - 80) & 0x20000) != 0 )
    {
      *(_QWORD *)&v8 = a1;
      DWORD2(v8) = v6;
      KeEnumerateKernelStackSegments(
        (__int64)(v4 - 95),
        (__int64 (__fastcall *)(__int64, _OWORD *, __int64))IoAddThreadStackToDump,
        (__int64)&v8);
      v5 = DWORD2(v8);
    }
    if ( v5 < 0 )
      break;
    v4 = (_QWORD *)*v4;
  }
  return (unsigned int)v5;
}
