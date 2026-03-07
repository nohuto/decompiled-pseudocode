__int64 __fastcall EtwpEnumerateTraceGuids(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned int v6; // ebx
  signed __int64 *v7; // rdx
  __int64 i; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  signed __int64 *NextGuidEntry; // r10
  __int64 v14; // rdx
  unsigned int v15; // r9d
  __int64 (**v16)[2]; // r8
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 result; // rax

  v4 = 0;
  v6 = 0;
  v7 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v7, 0);
    if ( !NextGuidEntry )
      break;
    v11 = v6++;
    if ( v6 > 0x71C71C7 )
    {
LABEL_9:
      v4 = -2147483643;
      goto LABEL_19;
    }
    if ( v6 <= a3 )
    {
      v12 = 9 * v11;
      *(_OWORD *)(a2 + 4 * v12) = *(_OWORD *)(NextGuidEntry + 5);
      *(_DWORD *)(a2 + 4 * v12 + 28) = *((_DWORD *)NextGuidEntry + 20);
      *(_DWORD *)(a2 + 4 * v12 + 20) = *((unsigned __int16 *)NextGuidEntry + 44);
      *(_DWORD *)(a2 + 4 * v12 + 24) = *((unsigned __int8 *)NextGuidEntry + 90);
      *(_BYTE *)(a2 + 4 * v12 + 32) = *((_BYTE *)NextGuidEntry + 91) & 1;
    }
    v7 = NextGuidEntry;
  }
  if ( i == EtwpHostSiloState )
    v14 = 2147353472LL;
  else
    v14 = *(_QWORD *)(*(_QWORD *)(i + 8) + 1320LL) + 550LL;
  v15 = 0;
  v16 = &EtwpUmglProviders;
  do
  {
    v17 = *((unsigned __int8 *)v16 + 8);
    v18 = v6;
    if ( *(_BYTE *)(v14 + 2 * v17) )
    {
      if ( ++v6 > 0x71C71C7 )
        goto LABEL_9;
      if ( v6 <= a3 )
      {
        v19 = 9 * v18;
        *(_OWORD *)(a2 + 4 * v19) = *(_OWORD *)*v16;
        *(_DWORD *)(a2 + 4 * v19 + 20) = *(unsigned __int8 *)(v14 + 2 * v17);
        *(_DWORD *)(a2 + 4 * v19 + 28) = *(unsigned __int8 *)(v14 + 2 * v17 + 1);
        *(_DWORD *)(a2 + 4 * v19 + 24) = 0;
        *(_BYTE *)(a2 + 4 * v19 + 32) = 1;
      }
    }
    ++v15;
    v16 += 2;
  }
  while ( v15 < 0xA );
  if ( v6 > a3 )
    v4 = -1073741789;
LABEL_19:
  result = v4;
  *a4 = v6;
  return result;
}
