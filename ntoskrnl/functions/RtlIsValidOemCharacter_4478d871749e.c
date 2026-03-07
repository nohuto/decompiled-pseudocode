BOOLEAN __stdcall RtlIsValidOemCharacter(PWCHAR Char)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 Flink; // r8
  struct _LIST_ENTRY **p_Blink; // rax
  char v5; // dl
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *v7; // r10
  __int64 v8; // rcx
  WCHAR v9; // r9
  __int16 v10; // r11
  __int64 v11; // r10
  __int16 v12; // ax
  unsigned int v13; // ecx
  __int64 v14; // r9
  unsigned __int16 v15; // dx
  __int64 v16; // r10
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF

  RtlpIsUtf8Process();
  _InterlockedOr(v18, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Flink = (__int64)CurrentServerSiloGlobals[77].Flink;
  p_Blink = &CurrentServerSiloGlobals[66].Blink;
  if ( v5 != 1 )
  {
    v6 = p_Blink[12];
    v7 = p_Blink[13];
    v8 = *Char;
    if ( *((_WORD *)p_Blink + 38) )
    {
      v13 = *((unsigned __int16 *)&v7->Flink + v8);
      v14 = *((unsigned __int16 *)&p_Blink[19]->Flink + ((unsigned __int64)v13 >> 8));
      if ( (_WORD)v14 )
        v15 = *((_WORD *)&p_Blink[15]->Flink + v14 + (unsigned __int8)v13);
      else
        v15 = *((_WORD *)&v6->Flink + (unsigned __int8)v13);
      v9 = NLS_UPCASE(Flink, v15);
      v12 = *(_WORD *)(v16 + 2LL * v9);
    }
    else
    {
      v9 = NLS_UPCASE(Flink, *((_WORD *)&v6->Flink + *((unsigned __int8 *)&v7->Flink + v8)));
      v12 = *(char *)(v9 + v11);
    }
    if ( v12 != v10 )
    {
      *Char = v9;
      return 1;
    }
    return 0;
  }
  if ( *Char > 0x7Fu )
    return 0;
  *Char = NLS_UPCASE(Flink, *Char);
  return 1;
}
