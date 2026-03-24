/*
 * XREFs of MiCheckUserVirtualAddress @ 0x1402AF090
 * Callers:
 *     MiUserFault @ 0x14020D730 (MiUserFault.c)
 *     MiResolveDemandZeroFault @ 0x14020FB10 (MiResolveDemandZeroFault.c)
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MiInPagePageTable @ 0x14028C440 (MiInPagePageTable.c)
 *     MiCheckVirtualAddress @ 0x1402E34B0 (MiCheckVirtualAddress.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14027EA4C (MiLocateLockedVadEvent.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiIsVadLargePrivate @ 0x140304C64 (MiIsVadLargePrivate.c)
 */

__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, int *a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  int v7; // eax
  unsigned __int64 v8; // rdi
  __int64 ProtoPteAddress; // r8
  char v10; // al
  int v11; // ecx
  _QWORD *v12; // rdx
  __int64 result; // rax
  int v14; // eax
  int v15; // r9d
  __int64 **LockedVadEvent; // rax
  char v17; // [rsp+48h] [rbp+20h] BYREF

  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140C4DE38;
      *a2 = 1;
      return result;
    }
    if ( v6 == qword_140C4DE48 && v6 )
    {
      result = qword_140C4DE40;
      *a2 = 1;
      return result;
    }
  }
  if ( (*(_DWORD *)(a3 + 48) & 0x70) == 0x20 && (*(_DWORD *)(a3 + 64) & 0x10000000) != 0 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(a3, 32);
    if ( LockedVadEvent && LockedVadEvent[1] != (__int64 *)KeGetCurrentThread() )
      goto LABEL_25;
  }
  v7 = *(_DWORD *)(a3 + 48);
  if ( (v7 & 4) != 0 )
    goto LABEL_25;
  if ( (v7 & 0x100000) != 0 )
  {
    v14 = *(_DWORD *)(a3 + 48) & 0x70;
    if ( v14 != 16 && v14 != 48 && !(unsigned int)MiIsVadLargePrivate(a3) && *(int *)(a3 + 52) < 0 )
    {
      v15 = (*(_DWORD *)(a3 + 48) >> 7) & 0x1F;
LABEL_24:
      result = 0LL;
      *a2 = v15;
      return result;
    }
LABEL_25:
    v15 = 24;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(a3 + 64) & 0x1000000) != 0 && (*(_BYTE *)(a3 + 48) & 0x70) != 0x50 )
    goto LABEL_25;
  v8 = a1 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a3, v8, 4LL, &v17);
  if ( ProtoPteAddress )
  {
    v10 = *(_DWORD *)(a3 + 48) & 0x70;
    v11 = (*(_DWORD *)(a3 + 48) >> 7) & 0x1F;
    *a2 = v11;
    if ( v10 == 32 )
    {
      if ( v11 == 7 )
        v11 = 256;
      *a2 = v11;
    }
  }
  else
  {
    *a2 = 24;
  }
  v12 = *(_QWORD **)(a3 + 120);
  if ( (__int64)v12 < 0
    && v8 - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) > (unsigned __int64)(*v12 - 1LL) >> 12 )
  {
    *a2 = 24;
  }
  return ProtoPteAddress;
}
