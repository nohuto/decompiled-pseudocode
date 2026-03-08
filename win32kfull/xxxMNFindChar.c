/*
 * XREFs of xxxMNFindChar @ 0x1C0241D40
 * Callers:
 *     xxxMNChar @ 0x1C0219CB8 (xxxMNChar.c)
 * Callees:
 *     xxxClientFindMnemChar @ 0x1C02150CC (xxxClientFindMnemChar.c)
 *     MNFindNextValidItem @ 0x1C0241C80 (MNFindNextValidItem.c)
 */

__int64 __fastcall xxxMNFindChar(__int64 **a1, int a2, int a3, unsigned int *a4)
{
  int v4; // ebp
  int v5; // ebx
  unsigned int MnemChar; // esi
  unsigned int v9; // edi
  int ValidItem; // r13d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r12d
  int v15; // eax
  _QWORD *v16; // rax
  const WCHAR *v17; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  __int16 v19; // [rsp+78h] [rbp+10h]

  v19 = a2;
  v4 = -1;
  v5 = a3;
  if ( !a2 )
    return 0LL;
  MnemChar = 0;
  v9 = -1;
  ValidItem = a3;
  if ( a3 < 0 )
  {
    v11 = *(_QWORD *)(**a1 + 40);
    v12 = (__int64)a1[2];
    if ( !v12 )
      v12 = **a1;
    ValidItem = MNFindNextValidItem(v12, *(_DWORD *)(v11 + 44), -1, 1);
  }
  do
  {
    v13 = (__int64)a1[2];
    v14 = v5;
    if ( !v13 )
      v13 = **a1;
    v15 = MNFindNextValidItem(v13, v5, 1, 1);
    v5 = v15;
    if ( v15 == -1 || v15 == v4 )
      break;
    if ( v4 == -1 )
      v4 = v15;
    v16 = (_QWORD *)(*(_QWORD *)(**a1 + 88) + 96LL * v15);
    v17 = (const WCHAR *)v16[3];
    if ( v17 && *(_DWORD *)(*v16 + 48LL) )
    {
      DestinationString = 0LL;
      if ( *v17 == 8 )
        ++v17;
      RtlInitUnicodeString(&DestinationString, v17);
      MnemChar = (unsigned int)xxxClientFindMnemChar((char **)&DestinationString, v19);
      if ( MnemChar == 128 && v9 == -1 )
        v9 = v5;
    }
  }
  while ( v5 != v14 && MnemChar != 1 && ValidItem != v5 );
  if ( MnemChar == 1 )
    v9 = v5;
  *a4 = MnemChar;
  return v9;
}
