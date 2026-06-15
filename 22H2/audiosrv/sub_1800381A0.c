/*
 * XREFs of sub_1800381A0 @ 0x1800381A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_1800381A0(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 42LL, &unk_18015E3E8, a1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v6 = *(_QWORD *)(a1 + 192);
  if ( !v6 || !*(_DWORD *)(a1 + 184) )
  {
    v9 = -2004287487;
LABEL_17:
    sub_18005E8F8("CVADServer::GetAllVolumes", 2568LL, v9);
    goto LABEL_10;
  }
  if ( (_DWORD)v4 != *(_DWORD *)(v6 + 92) )
  {
    v9 = -2147024809;
    sub_18004BD84(retaddr, 911LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", 2147942487LL);
    goto LABEL_17;
  }
  if ( (_DWORD)v4 )
  {
    v7 = v4;
    v8 = *(_QWORD *)(v6 + 112) - (_QWORD)a3;
    do
    {
      *a3 = *(_DWORD *)((char *)a3 + v8);
      ++a3;
      --v7;
    }
    while ( v7 );
  }
  v9 = 0;
LABEL_10:
  if ( a1 != -224 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  return v9;
}
