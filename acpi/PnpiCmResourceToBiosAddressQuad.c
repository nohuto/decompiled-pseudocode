/*
 * XREFs of PnpiCmResourceToBiosAddressQuad @ 0x1C00930C8
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0092820 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddressQuad(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  int v5; // ecx
  __int64 i; // rbx
  char v7; // al
  __int16 v8; // cx
  ULONGLONG v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 Start; // [rsp+30h] [rbp+8h] BYREF

  Start = 0LL;
  if ( *(_BYTE *)(a1 + 3) )
    return 3221225473LL;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = 0;
  if ( v4 )
  {
    for ( i = a2 + 20; ((*(_BYTE *)i - 3) & 0xFB) != 0; i += 20LL )
    {
      if ( ++v5 >= v4 )
        return 0LL;
    }
    *(_BYTE *)(a1 + 5) = 0;
    v7 = (*(_BYTE *)(i + 2) & 3) == 0;
    *(_BYTE *)(a1 + 5) = v7;
    v8 = *(_WORD *)(i + 2);
    if ( (v8 & 0x20) != 0 )
    {
      v7 |= 2u;
    }
    else if ( (v8 & 8) != 0 )
    {
      v7 |= 4u;
    }
    else if ( (v8 & 4) != 0 )
    {
      v7 |= 6u;
    }
    *(_BYTE *)(a1 + 5) = v7;
    v9 = RtlCmDecodeMemIoResource((PCM_PARTIAL_RESOURCE_DESCRIPTOR)i, &Start);
    v10 = Start + v9 - 1;
    *(_QWORD *)(a1 + 14) = Start;
    *(_QWORD *)(a1 + 22) = v10;
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
