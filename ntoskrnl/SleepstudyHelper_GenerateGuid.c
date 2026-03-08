/*
 * XREFs of SleepstudyHelper_GenerateGuid @ 0x1403A5710
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperGetBlockerGuid @ 0x140799D20 (SleepstudyHelperGetBlockerGuid.c)
 */

__int64 __fastcall SleepstudyHelper_GenerateGuid(int a1, __int64 a2, _OWORD *a3)
{
  int BlockerGuid; // edx
  int v7; // ecx
  int v8; // ecx
  char v10; // al
  __int128 v11; // [rsp+20h] [rbp-10h] BYREF

  if ( !a3 )
    return (unsigned int)-1073741811;
  BlockerGuid = 0;
  *a3 = 0LL;
  v11 = 0LL;
  if ( !a1 )
    goto LABEL_7;
  v7 = a1 - 1;
  if ( !v7 )
  {
    BlockerGuid = SleepstudyHelperGetBlockerGuid(a2, &v11);
    if ( BlockerGuid < 0 )
      return (unsigned int)BlockerGuid;
    goto LABEL_8;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    v10 = BYTE7(v11) & 0xFC | 1;
LABEL_11:
    *((_QWORD *)&v11 + 1) = a2;
    BYTE7(v11) = v10;
    goto LABEL_8;
  }
  if ( v8 == 1 )
  {
    v10 = BYTE7(v11) & 0xFC | 2;
    goto LABEL_11;
  }
  DWORD2(v11) = 52428;
  HIDWORD(v11) = a1;
LABEL_7:
  *(_QWORD *)&v11 = a2;
LABEL_8:
  *a3 = v11;
  return (unsigned int)BlockerGuid;
}
