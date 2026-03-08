/*
 * XREFs of PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00917BC
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008EFDC (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0091FC4 (PnpiUpdateForceActiveBothInterrupts.c)
 *     PnpiUpdateResourceList @ 0x1C0092328 (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosExtendedIrqToIoDescriptor(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int a5)
{
  int v9; // ebp
  __int64 result; // rax
  char v11; // r15
  char v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int updated; // r8d
  _BYTE *v16; // rdx
  char v17; // al
  int v18; // eax
  _BYTE *v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = 0LL;
  if ( a3 < *(_BYTE *)(a2 + 4) )
  {
    v9 = *(_DWORD *)(a2 + 4LL * a3 + 5);
    if ( !v9 )
      return 0LL;
    v11 = 0;
    v12 = *(_BYTE *)(a2 + 3) & 2;
    if ( !a1 )
      goto LABEL_12;
    result = PnpiUpdateForceActiveBothInterrupts();
    if ( (int)result < 0 )
      return result;
    v13 = *(_DWORD *)(a1 + 704);
    v14 = 0;
    if ( !v13 )
    {
LABEL_12:
      updated = PnpiUpdateResourceList(a4 + 8LL * a5, &v19);
      if ( updated < 0 )
        return (unsigned int)updated;
      v16 = v19;
      *v19 = a3 != 0 ? 8 : 0;
      v16[1] = 2;
      *((_DWORD *)v16 + 2) = v9;
      *((_DWORD *)v16 + 3) = v9;
      *((_WORD *)v16 + 2) = 0;
      if ( v12 )
      {
        *((_WORD *)v16 + 2) = 1;
        if ( (*(_BYTE *)(a2 + 3) & 8) == 0 )
        {
          v16[2] = 1;
          goto LABEL_19;
        }
        v17 = (v11 != 0) + 2;
      }
      else
      {
        *((_WORD *)v16 + 2) = 0;
        v17 = (unsigned __int8)(*(_BYTE *)(a2 + 3) & 8 | 4) >> 2;
      }
      v16[2] = v17;
LABEL_19:
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
        *((_WORD *)v16 + 2) |= 0x20u;
      v18 = (*(unsigned __int8 *)(a2 + 3) >> 1) & 2;
      *((_DWORD *)v16 + 4) = v18;
      if ( v11 )
        *((_DWORD *)v16 + 4) = v18 | 8;
      return (unsigned int)updated;
    }
    while ( v9 != *(_DWORD *)(*(_QWORD *)(a1 + 696) + 4LL * v14) )
    {
      if ( ++v14 >= v13 )
        goto LABEL_12;
    }
    if ( v12 )
    {
      v11 = 1;
      goto LABEL_12;
    }
  }
  return 3221225485LL;
}
