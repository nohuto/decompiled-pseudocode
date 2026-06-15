/*
 * XREFs of sub_1800F5F10 @ 0x1800F5F10
 * Callers:
 *     sub_1800F5B0C @ 0x1800F5B0C (sub_1800F5B0C.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18013BEEC @ 0x18013BEEC (sub_18013BEEC.c)
 *     sub_18013BFA0 @ 0x18013BFA0 (sub_18013BFA0.c)
 *     sub_18013C050 @ 0x18013C050 (sub_18013C050.c)
 *     sub_18013C100 @ 0x18013C100 (sub_18013C100.c)
 *     sub_18013C1DC @ 0x18013C1DC (sub_18013C1DC.c)
 *     sub_18013C2AC @ 0x18013C2AC (sub_18013C2AC.c)
 *     sub_18013C3EC @ 0x18013C3EC (sub_18013C3EC.c)
 *     sub_18013C444 @ 0x18013C444 (sub_18013C444.c)
 */

__int64 __fastcall sub_1800F5F10(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // r15d
  unsigned int *i; // rdi
  __int64 v9; // rdx
  int v10; // esi
  int v11; // r14d
  unsigned int *v12; // rsi
  __int64 v13; // r8
  int v14; // ebp
  int v16; // edx
  int v17; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  if ( a3 <= 0 )
    return 0LL;
  for ( i = (unsigned int *)(a2 + 148); !*i; i += 50 )
  {
LABEL_21:
    if ( ++v4 >= a3 )
      return 0LL;
  }
  v10 = sub_18013BFA0(a4, L"item");
  if ( v10 < 0 )
  {
    v17 = 605;
    goto LABEL_38;
  }
  v10 = sub_18013C050(a4, v9, a2 + 200LL * v4);
  if ( v10 < 0 )
  {
    v17 = 607;
    goto LABEL_38;
  }
  v10 = sub_18013C100(a4, L"formfactor", *(i - 1));
  if ( v10 < 0 )
  {
    v17 = 608;
    goto LABEL_38;
  }
  v10 = sub_18013C2AC(a4, L"streamcount", *i);
  if ( v10 < 0 )
  {
    v17 = 609;
    goto LABEL_38;
  }
  v10 = sub_18013C2AC(a4, L"initerrorcount", i[1]);
  if ( v10 < 0 )
  {
    v17 = 610;
    goto LABEL_38;
  }
  v10 = sub_18013C2AC(a4, L"createerrorcount", i[2]);
  if ( v10 < 0 )
  {
    v17 = 611;
    goto LABEL_38;
  }
  v10 = sub_18013C2AC(a4, L"starterrorcount", i[3]);
  if ( v10 < 0 )
  {
    v17 = 612;
    goto LABEL_38;
  }
  v10 = sub_18013C2AC(a4, L"stoperrorcount", i[4]);
  if ( v10 < 0 )
  {
    v17 = 613;
    goto LABEL_38;
  }
  v10 = sub_18013C1DC(a4);
  if ( v10 < 0 )
  {
    v17 = 614;
    goto LABEL_38;
  }
  v10 = sub_18013BEEC(a4, L"errors");
  if ( v10 < 0 )
  {
    v17 = 616;
    goto LABEL_38;
  }
  v11 = 0;
  v12 = i + 7;
  do
  {
    v13 = *v12;
    if ( !(_DWORD)v13 )
      goto LABEL_18;
    v14 = sub_18013C100(a4, L"hr", v13);
    if ( v14 < 0 )
    {
      v16 = 623;
      goto LABEL_25;
    }
    v14 = sub_18013C2AC(a4, L"count", v12[1]);
    if ( v14 < 0 )
    {
      v16 = 624;
LABEL_25:
      sub_18004BD84((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v14);
      return (unsigned int)v14;
    }
LABEL_18:
    ++v11;
    v12 += 2;
  }
  while ( v11 < 3 );
  v10 = sub_18013C3EC(a4);
  if ( v10 < 0 )
  {
    v17 = 626;
  }
  else
  {
    v10 = sub_18013C444(a4);
    if ( v10 >= 0 )
      goto LABEL_21;
    v17 = 627;
  }
LABEL_38:
  sub_18004BD84((int)retaddr, v17, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v10);
  return (unsigned int)v10;
}
