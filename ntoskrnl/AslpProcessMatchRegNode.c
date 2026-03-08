/*
 * XREFs of AslpProcessMatchRegNode @ 0x140A53E9C
 * Callers:
 *     AslRegWildcardFindNext @ 0x140A53734 (AslRegWildcardFindNext.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     AslStringPatternMatchExW @ 0x14077790C (AslStringPatternMatchExW.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     AslRegistryGetKey @ 0x14084BF1C (AslRegistryGetKey.c)
 *     AslRegistryEnumKey @ 0x140A515C0 (AslRegistryEnumKey.c)
 *     AslRegistryOpenSubKey @ 0x140A51990 (AslRegistryOpenSubKey.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslpProcessMatchRegNode(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  void *v4; // rcx
  int Key; // ebp
  wchar_t *Buffer; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // r15
  _WORD *v13; // rax
  int v14; // eax
  __int16 v15; // r11
  __int64 v16; // rax
  const WCHAR *v17; // rdx
  void *v18; // rcx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-28h] BYREF

  Destination = 0LL;
  if ( *(_QWORD *)(a1 + 8) == a2 )
  {
    v3 = (_QWORD *)(a1 + 32);
    v4 = *(void **)(a1 + 32);
    if ( v4 )
    {
      ZwClose(v4);
      *v3 = 0LL;
      Key = -2147483622;
    }
    else
    {
      Key = AslRegistryGetKey(v3, *(const WCHAR **)(a1 + 24), 0x20019u, 1);
    }
    Buffer = Destination.Buffer;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
    Destination.MaximumLength = 2 * (v8 + 261);
    v9 = (wchar_t *)AslAlloc(261LL, Destination.MaximumLength);
    v11 = *(_QWORD *)(a1 + 8);
    Buffer = v9;
    Destination.Buffer = v9;
    v12 = *(void **)(v11 + 32);
    while ( 1 )
    {
      *Buffer = 0;
      Key = AslRegistryEnumKey(Buffer, v10, v12, *(_DWORD *)(a1 + 40));
      if ( Key < 0 )
        break;
      v13 = *(_WORD **)(a1 + 24);
      ++*(_DWORD *)(a1 + 40);
      *v13 = 0;
      v14 = AslStringPatternMatchExW(*(__int16 **)(a1 + 16), Buffer);
      **(_WORD **)(a1 + 24) = v15;
      if ( v14 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( Buffer[v16] );
        v17 = *(const WCHAR **)(a1 + 24);
        Destination.Length = 2 * v16;
        RtlAppendUnicodeToString(&Destination, v17);
        v18 = *(void **)(a1 + 32);
        if ( v18 )
        {
          ZwClose(v18);
          *(_QWORD *)(a1 + 32) = 0LL;
        }
        Buffer = Destination.Buffer;
        Key = AslRegistryOpenSubKey((PHANDLE)(a1 + 32), v12, Destination.Buffer);
        if ( Key >= 0 )
          goto LABEL_18;
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
LABEL_18:
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x74705041u);
  return (unsigned int)Key;
}
