/*
 * XREFs of HalpIommuDmarPageTableMarkHiberPhase @ 0x1405249C8
 * Callers:
 *     HalpDmaMarkHiberAdapter @ 0x1404FF5CC (HalpDmaMarkHiberAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 */

void __fastcall HalpIommuDmarPageTableMarkHiberPhase(
        PVOID MemoryMap,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // r12d
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned int v8; // r15d
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned int v14; // r9d
  unsigned __int64 v15; // r10
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rax
  int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // rdx
  _OWORD v24[3]; // [rsp+30h] [rbp-88h] BYREF

  v4 = *(_DWORD *)(a2 + 28);
  LODWORD(v6) = 0;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = 0;
  v24[0] = v7;
  memset(&v24[1], 0, 32);
  if ( a4 )
  {
    while ( 1 )
    {
      v12 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      if ( (unsigned int)v6 < (unsigned int)v12 )
        break;
LABEL_9:
      v17 = *(_DWORD *)(a2 + 4LL * (unsigned int)v6 + 36);
      if ( v17 < 0x40 )
        v18 = (1LL << v17) - 1;
      else
        LODWORD(v18) = -1;
      v19 = v18 & (a3 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v6 + 60));
      v20 = (1 << *(_DWORD *)(a2 + 4 * v12 + 36)) - v19;
      if ( (unsigned int)a4 - v8 <= v20 )
        v20 = a4 - v8;
      v21 = v20;
      PoSetHiberRange(MemoryMap, 2u, (PVOID)(v7 + (unsigned int)(v19 << v4)), v20 << v4, 0x746C6168u);
      v8 += v21;
      if ( (_DWORD)v6 )
      {
        do
        {
          v22 = (unsigned int)(v6 - 1);
          v23 = 1LL << *(_DWORD *)(a2 + 4 * v22 + 60);
          if ( (v23 & (a3 + ((unsigned __int64)v21 << 12))) == (v23 & a3) )
            break;
          LODWORD(v6) = v6 - 1;
        }
        while ( (_DWORD)v22 );
      }
      a3 += (unsigned __int64)v21 << 12;
      v7 = *((_QWORD *)v24 + (unsigned int)v6);
      if ( v8 >= a4 )
        return;
    }
    v13 = (unsigned int)v6;
    while ( 1 )
    {
      v14 = *(_DWORD *)(a2 + 4 * v13 + 36);
      v15 = v7 + (1 << v14 << v4);
      if ( v14 < 0x40 )
        v16 = (1LL << v14) - 1;
      else
        LODWORD(v16) = -1;
      v7 = *(_QWORD *)(v15 + 8LL * ((unsigned int)v16 & (unsigned int)(a3 >> *(_DWORD *)(a2 + 4 * v13 + 60))));
      if ( !v7 )
        break;
      v6 = (unsigned int)(v6 + 1);
      v13 = (unsigned int)v6;
      *((_QWORD *)v24 + v6) = v7;
      if ( (unsigned int)v6 >= (unsigned int)v12 )
        goto LABEL_9;
    }
  }
}
