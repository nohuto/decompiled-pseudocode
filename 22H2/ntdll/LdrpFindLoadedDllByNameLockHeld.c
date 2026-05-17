/*
 * XREFs of LdrpFindLoadedDllByNameLockHeld @ 0x1800212F0
 * Callers:
 *     LdrpLoadKnownDll @ 0x180014398 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByName @ 0x18002113C (LdrpFindLoadedDllByName.c)
 *     LdrpFindExistingModule @ 0x180060FD4 (LdrpFindExistingModule.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180020D10 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpFindLoadedDllByNameLockHeld(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        char a3,
        volatile signed __int32 **a4,
        int a5)
{
  _QWORD **v8; // rsi
  char v10; // r9
  _QWORD *i; // rdi
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rax

  v8 = (_QWORD **)((char *)&LdrpHashTable + 16 * (a5 & 0x1F));
  v10 = 0;
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v12 = (volatile signed __int32 *)(i - 14);
    if ( a5 == *((_DWORD *)i + 38) && ((a3 & 8) == 0 || (v12[26] & 1) != 0) )
    {
      if ( a2 )
      {
        v10 = RtlEqualUnicodeString(a2, (__int64)(v12 + 18), 1);
      }
      else
      {
        if ( (v12[26] & 0x10000000) == 0 && RtlEqualUnicodeString(a1, (__int64)(v12 + 22), 1) )
        {
          v10 = 1;
LABEL_9:
          v13 = *((_QWORD *)v12 + 19);
          if ( *(_DWORD *)(v13 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v13 - 56LL) & 0x20) == 0 )
            _InterlockedIncrement(v12 + 69);
          *a4 = v12;
          return v10 == 0 ? 0xC0000135 : 0;
        }
        v10 = 0;
      }
      if ( v10 )
        goto LABEL_9;
    }
  }
  return v10 == 0 ? 0xC0000135 : 0;
}
