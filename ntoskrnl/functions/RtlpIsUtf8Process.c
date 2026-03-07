char RtlpIsUtf8Process()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v1; // dl
  unsigned __int64 v2; // rcx
  char result; // al
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF
  char v5; // [rsp+20h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  _InterlockedOr(v4, 0);
  if ( LOWORD(CurrentServerSiloGlobals[66].Blink) != 0xFDE9 && LOWORD(CurrentServerSiloGlobals[70].Blink) != 0xFDE9 )
  {
    v5 = 0;
    v2 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24];
    if ( !v2 )
      return v5;
    if ( v1 )
    {
      if ( *(_WORD *)(v2 + 846) == 0xFDE9 )
      {
        result = 1;
        goto LABEL_8;
      }
    }
    else if ( *(_WORD *)(v2 + 844) == 0xFDE9 )
    {
      result = 1;
      goto LABEL_8;
    }
    result = 0;
LABEL_8:
    v5 = result;
    return result;
  }
  return 1;
}
