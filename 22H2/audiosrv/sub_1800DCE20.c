/*
 * XREFs of sub_1800DCE20 @ 0x1800DCE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800D2B78 @ 0x1800D2B78 (sub_1800D2B78.c)
 */

__int64 __fastcall sub_1800DCE20(__int64 a1, unsigned int a2, float *a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // r9d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x29u, (__int64)&unk_18015E3E8, a1);
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v9 = *(_QWORD *)(a1 + 192);
  if ( !v9 || !*(_DWORD *)(a1 + 184) )
  {
    v10 = -2004287487;
    v11 = 2522;
    goto LABEL_13;
  }
  if ( !*(_BYTE *)(a1 + 200) )
  {
    v10 = -2147024809;
    v11 = 2524;
LABEL_13:
    v13 = v10;
    goto LABEL_14;
  }
  v12 = sub_1800D2B78(v9, a2, a3, a4);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v10 = 0;
    goto LABEL_15;
  }
  v13 = v12;
  v11 = 2526;
LABEL_14:
  sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v13);
LABEL_15:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v10;
}
