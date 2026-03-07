__int64 __fastcall CompareNamesCaseSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v3; // edi
  bool v4; // r13
  struct _LIST_ENTRY *Blink; // r12
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebp
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // r8d
  __int64 v14; // r15
  unsigned __int8 v15; // r10
  unsigned __int8 v16; // r11
  char v17; // bl
  char v18; // r9
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // al
  unsigned int i; // r9d
  unsigned int j; // r9d
  signed __int32 v23[18]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = 0;
  Blink = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v23, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    Blink = CurrentServerSiloGlobals[75].Blink;
    v4 = WORD2(CurrentServerSiloGlobals[67].Flink) != 0;
  }
  v8 = *a1;
  v9 = *a2;
  if ( (_WORD)v8 == 1 && **((_BYTE **)a1 + 1) == 92 && (unsigned __int16)v9 > 1u && **((_BYTE **)a2 + 1) == 92 )
    return 1LL;
  v11 = *a1;
  if ( (unsigned __int16)v8 >= (unsigned __int16)v9 )
    v11 = *a2;
  v12 = v11;
  v13 = RtlCompareMemory(*((const void **)a1 + 1), *((const void **)a2 + 1), v11);
  if ( v13 < v12 )
  {
    v14 = *((_QWORD *)a1 + 1);
    v15 = 0;
    v16 = 0;
    v24 = *((_QWORD *)a2 + 1);
    v17 = *(_BYTE *)(v13 + v24);
    v18 = *(_BYTE *)(v13 + v14);
    if ( v18 != 92 )
      v15 = *(_BYTE *)(v13 + v14);
    v19 = v15;
    if ( v17 != 92 )
      v16 = *(_BYTE *)(v13 + v24);
    v20 = v16;
    if ( v4 )
    {
      if ( v18 == 92 )
      {
        for ( i = 0; i < v13; i += (*((_WORD *)&Blink->Flink + *(unsigned __int8 *)(i + v14)) != 0) + 1 )
          ;
        v19 = v15;
        if ( i != v13 )
          v19 = 92;
      }
      v20 = v16;
      if ( v17 == 92 )
      {
        for ( j = 0; j < v13; j += (*((_WORD *)&Blink->Flink + *(unsigned __int8 *)(j + v24)) != 0) + 1 )
          ;
        v20 = v16;
        if ( j != v13 )
          v20 = 92;
      }
    }
    if ( v19 < v20 )
      return 0LL;
    if ( v19 > v20 )
      return 3LL;
  }
  if ( v9 <= (unsigned int)v8 )
    return (unsigned int)(v9 < (unsigned int)v8) + 2;
  LOBYTE(v3) = *(_BYTE *)(v8 + *((_QWORD *)a2 + 1)) == 92;
  return v3;
}
