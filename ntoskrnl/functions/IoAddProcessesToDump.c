__int64 __fastcall IoAddProcessesToDump(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64 *, __int64), __int64 a3)
{
  __int64 *v3; // rbx
  unsigned int v7; // edi
  int v8; // eax

  v3 = (__int64 *)PsActiveProcessHead;
  v7 = 0;
  while ( 1 )
  {
    if ( v3 == &PsActiveProcessHead )
      return v7;
    v8 = MmAddRangeToCrashDump(a1, v3 - 137, 2944LL);
    if ( v8 < 0 )
      break;
    v8 = MmAddRangeToCrashDump(a1, v3[33], 2000LL);
    if ( v8 < 0 )
      break;
    if ( a2 )
    {
      v8 = a2(a1, v3 - 137, a3);
      if ( v8 < 0 )
        break;
    }
LABEL_8:
    v3 = (__int64 *)*v3;
  }
  if ( v8 != -1073741789 )
  {
    v7 = v8;
    goto LABEL_8;
  }
  return 0LL;
}
