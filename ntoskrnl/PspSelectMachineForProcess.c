/*
 * XREFs of PspSelectMachineForProcess @ 0x14070797C
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsIsMachineSupportedNoWow @ 0x140707AAC (PsIsMachineSupportedNoWow.c)
 *     PsGetProcessMachine @ 0x14070A370 (PsGetProcessMachine.c)
 *     PsWow64IsMachineSupported @ 0x14076D0D0 (PsWow64IsMachineSupported.c)
 *     PspQueryComPlusRunUnderWoW @ 0x1409AE358 (PspQueryComPlusRunUnderWoW.c)
 */

__int64 __fastcall PspSelectMachineForProcess(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // bp
  bool v5; // r15
  unsigned int v7; // r12d
  char v8; // di
  unsigned __int16 v9; // bx
  char v10; // si
  unsigned __int16 v11; // ax
  unsigned __int16 *v12; // rax
  char v13; // cl
  __int64 result; // rax
  char v15; // [rsp+70h] [rbp+8h] BYREF
  char v16; // [rsp+78h] [rbp+10h]
  unsigned __int16 *v17; // [rsp+80h] [rbp+18h]
  unsigned __int16 v18; // [rsp+88h] [rbp+20h]

  v17 = a3;
  v3 = *(_WORD *)(a2 + 96);
  v5 = 0;
  v15 = 0;
  v7 = 0;
  v8 = 0;
  v18 = *(_WORD *)(a1 + 2412);
  v9 = 0;
  v16 = 0;
  v10 = 0;
  if ( v3 == 332 )
    v5 = (*(_BYTE *)(a2 + 99) & 3) == 3;
  if ( *(_WORD *)(a2 + 160) )
  {
    v9 = *(_WORD *)(a2 + 160);
    v10 = 1;
  }
  else if ( (unsigned __int16)PsGetProcessMachine(a1, 1LL, 34404LL) != 0x8664 && !*(_QWORD *)(a1 + 1408) )
  {
    v9 = v18;
  }
  if ( !v5 )
  {
    v11 = v3;
    if ( v9 )
      v11 = v9;
    v9 = v11;
    if ( v11 != v3 && !(unsigned int)PdcCreateWatchdogAroundClientCall() )
    {
      if ( v10 )
        return 3221225595LL;
      v9 = v3;
    }
    if ( (unsigned int)PsIsMachineSupportedNoWow(v9) )
    {
LABEL_10:
      v12 = v17;
      v13 = v16;
      *v17 = v9;
      *((_BYTE *)v12 + 2) = v8;
      *((_BYTE *)v12 + 3) = v13;
      return v7;
    }
    if ( (unsigned int)PsWow64IsMachineSupported(v9) )
    {
      v8 = 1;
      goto LABEL_10;
    }
    return 3221225595LL;
  }
  if ( !v9 )
    v9 = -31132;
  if ( !v10 && (*(_BYTE *)(a2 + 99) & 0x20) != 0 || v9 == 332 || v9 == 452 )
  {
    v8 = 1;
    goto LABEL_32;
  }
  result = PspQueryComPlusRunUnderWoW(a2, &v15, 34404LL, 332LL);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = v15;
    if ( !v15 )
    {
      v16 = 1;
      goto LABEL_42;
    }
LABEL_32:
    if ( v9 == 0x8664 )
    {
      if ( v10 )
        return 3221225595LL;
    }
    else
    {
      if ( (unsigned int)PsWow64IsMachineSupported(v9) )
        goto LABEL_42;
      if ( v10 )
        return 3221225595LL;
      v9 = -31132;
    }
    if ( (unsigned int)PsWow64IsMachineSupported(332LL) )
    {
      v9 = 332;
    }
    else if ( (unsigned int)PsWow64IsMachineSupported(452LL) )
    {
      v9 = 452;
    }
    else
    {
      v8 = 0;
    }
LABEL_42:
    if ( v8 || (unsigned int)PsIsMachineSupportedNoWow(v9) )
      goto LABEL_10;
    return 3221225595LL;
  }
  return result;
}
