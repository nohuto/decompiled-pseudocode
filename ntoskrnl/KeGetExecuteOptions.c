/*
 * XREFs of KeGetExecuteOptions @ 0x140872398
 * Callers:
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetExecuteOptions(__int64 a1, int *a2)
{
  char v4; // al
  int v5; // edx
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx

  if ( *(_QWORD *)(a1 + 1408) && *(_WORD *)(a1 + 2412) == 332 )
  {
    v4 = *(_BYTE *)(a1 + 643);
    v5 = v4 & 1 | 2;
    if ( (v4 & 2) == 0 )
      v5 = *(_BYTE *)(a1 + 643) & 1;
    v6 = v5 | 4;
    if ( (v4 & 4) == 0 )
      v6 = v5;
    v7 = v6 | 8;
    if ( (v4 & 8) == 0 )
      v7 = v6;
    v8 = v7 | 0x10;
    if ( (v4 & 0x10) == 0 )
      v8 = v7;
    v9 = v8 | 0x20;
    if ( (v4 & 0x20) == 0 )
      v9 = v8;
    v10 = v9 | 0x40;
    if ( (v4 & 0x40) == 0 )
      v10 = v9;
    *a2 = v10;
  }
  else
  {
    *a2 = 13;
  }
  return 0LL;
}
