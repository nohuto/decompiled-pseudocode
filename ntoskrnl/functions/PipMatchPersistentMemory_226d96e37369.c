__int64 __fastcall PipMatchPersistentMemory(ULONG_PTR a1, const void **a2, _WORD *a3, __int64 a4, char a5, _BYTE *a6)
{
  _BYTE *v6; // r14
  char v8; // r9
  PVOID v9; // rdi
  int DeviceObjectLocation; // eax
  unsigned int v11; // esi
  PVOID P[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

  v6 = a6;
  v14 = 0;
  v8 = a5;
  v9 = 0LL;
  P[0] = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( *a3 != *(_WORD *)(a4 + 16) )
      goto LABEL_17;
  }
  else if ( !v8 && *(_WORD *)(a4 + 16) )
  {
    goto LABEL_17;
  }
  if ( !a1 )
  {
    if ( !v8 && *(_DWORD *)(a4 + 4) )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(a4 + 4) )
  {
    if ( a2 )
    {
      if ( RtlCompareMemory((const void *)(a4 + 24), a2[1], *(unsigned __int16 *)a2) == *(_DWORD *)(a4 + 4) )
LABEL_16:
        *v6 = 1;
    }
    else
    {
      DeviceObjectLocation = PipGetDeviceObjectLocation(a1, &v14, P);
      v9 = P[0];
      v11 = DeviceObjectLocation;
      if ( DeviceObjectLocation < 0 )
        goto LABEL_18;
      if ( (unsigned __int8)PnpCompareMultiSz((PCWCH)P[0], (PCWCH)(a4 + 24), 0) )
        goto LABEL_16;
    }
  }
LABEL_17:
  v11 = 0;
LABEL_18:
  if ( v9 )
    ExFreePoolWithTag(v9, 0x61706E50u);
  return v11;
}
