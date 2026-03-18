/*
 * XREFs of PspWow64PickBestNtdll @ 0x1402361E4
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     PsQuerySystemDllInfo @ 0x1406AD624 (PsQuerySystemDllInfo.c)
 */

__int64 __fastcall PspWow64PickBestNtdll(__int64 a1)
{
  int v1; // r8d
  __int64 SystemDllInfo; // rax
  unsigned int v3; // r8d
  __int16 v4; // r9
  int i; // edx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int16 v8; // r9

  if ( a1 && *(char *)(a1 + 9) < 0 )
  {
    v1 = 0;
    while ( 1 )
    {
      SystemDllInfo = PsQuerySystemDllInfo((unsigned int)v1);
      if ( SystemDllInfo )
      {
        if ( (*(_BYTE *)SystemDllInfo & 0xC) == 0xC && *(_WORD *)(SystemDllInfo + 2) == v4 )
          return v3;
      }
      v1 = v3 + 1;
      if ( v1 >= 6 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    for ( i = 0; i < 6; i = v7 + 1 )
    {
      v6 = PsQuerySystemDllInfo((unsigned int)i);
      if ( v6 && (*(_DWORD *)v6 & 8) != 0 && *(_WORD *)(v6 + 2) == v8 )
        return v7;
    }
    return 0LL;
  }
}
