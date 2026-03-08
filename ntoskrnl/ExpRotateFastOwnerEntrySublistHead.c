/*
 * XREFs of ExpRotateFastOwnerEntrySublistHead @ 0x1403C589C
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x1403C5540 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1403C5EA4 (ExpReleaseFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1403C6EF0 (ExDisownFastResource.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1406082E4 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     ExpReplaceListEntry @ 0x1403C5D60 (ExpReplaceListEntry.c)
 */

__int64 __fastcall ExpRotateFastOwnerEntrySublistHead(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rbx
  __int64 *v5; // r10
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // r10
  __int64 *v9; // rdx
  _QWORD *v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 result; // rax
  __int64 **v16; // rcx

  v3 = (_QWORD *)(a2 + 40);
  v5 = *(__int64 **)(a2 + 40);
  if ( v5[1] != a2 + 40 )
    goto LABEL_6;
  v6 = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    goto LABEL_6;
  *v3 = v6;
  *(_QWORD *)(v6 + 8) = v3;
  *((_BYTE *)v5 + 18) = 1;
  v7 = *(_BYTE *)(a2 + 16);
  *(_BYTE *)(a2 + 18) = 0;
  *((_BYTE *)v5 + 16) = v7;
  *(_BYTE *)(a2 + 16) = 0;
  ExpReplaceListEntry(a2, v5);
  ExpReplaceListEntry(v3, v8 + 40);
  v13 = *v9;
  if ( *(__int64 **)(*v9 + 8) != v9 )
    goto LABEL_6;
  v10[1] = v9;
  *v10 = v13;
  *(_QWORD *)(v13 + 8) = v10;
  *v9 = (__int64)v10;
  v14 = (__int64 *)(v11 + 56);
  if ( a3 )
    return ExpReplaceListEntry(v10 + 7, v14);
  ++*(_DWORD *)(v12 + 64);
  result = v12 + 48;
  v16 = *(__int64 ***)(v12 + 56);
  if ( *v16 != (__int64 *)(v12 + 48) )
LABEL_6:
    __fastfail(3u);
  *v14 = result;
  *(_QWORD *)(v11 + 64) = v16;
  *v16 = v14;
  *(_QWORD *)(v12 + 56) = v14;
  return result;
}
