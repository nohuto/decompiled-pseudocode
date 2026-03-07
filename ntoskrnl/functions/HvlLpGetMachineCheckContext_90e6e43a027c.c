__int64 __fastcall HvlLpGetMachineCheckContext(ULONG a1, _DWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  if ( (int)HvlpGetLogicalProcessorProperty(a1, 0, &v8) < 0 )
    return 3221225473LL;
  *a2 = v8;
  *a3 = *((_QWORD *)&v8 + 1);
  *a4 = v9;
  return 0LL;
}
