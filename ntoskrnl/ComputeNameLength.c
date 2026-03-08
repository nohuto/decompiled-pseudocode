/*
 * XREFs of ComputeNameLength @ 0x1409B7A14
 * Callers:
 *     PfxFindPrefix @ 0x1409B7AF0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1409B7BF0 (PfxInsertPrefix.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1406EA7A0 (RtlpIsUtf8Process.c)
 */

__int64 __fastcall ComputeNameLength(unsigned __int16 *a1)
{
  bool v2; // di
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // edx
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // eax
  _BYTE *v11; // rax
  __int64 v12; // r9
  unsigned int v13; // edx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  Blink = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v15, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    Blink = CurrentServerSiloGlobals[75].Blink;
    v2 = WORD2(CurrentServerSiloGlobals[67].Flink) != 0;
  }
  v5 = *a1 - 1;
  v6 = 1;
  if ( v2 )
  {
    v7 = 0;
    if ( *a1 != 1 )
    {
      do
      {
        v8 = *(unsigned __int8 *)(v7 + *((_QWORD *)a1 + 1));
        if ( *((_WORD *)&Blink->Flink + v8) )
        {
          v9 = 2;
        }
        else
        {
          v10 = v6 + 1;
          if ( (_BYTE)v8 != 92 )
            v10 = v6;
          v6 = v10;
          v9 = 1;
        }
        v7 += v9;
      }
      while ( v7 < v5 );
    }
  }
  else if ( *a1 != 1 )
  {
    v11 = (_BYTE *)*((_QWORD *)a1 + 1);
    v12 = v5;
    do
    {
      v13 = v6 + 1;
      if ( *v11 != 92 )
        v13 = v6;
      ++v11;
      v6 = v13;
      --v12;
    }
    while ( v12 );
  }
  return v6;
}
