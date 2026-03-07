char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, __int64 a2)
{
  char v3; // bl
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v6; // r9d
  __int16 v7; // bp
  __int16 Flink; // r11
  unsigned int v9; // ecx
  unsigned int v11; // edx
  unsigned int v12; // r10d
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdi
  bool v16; // zf
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = 1;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v17, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v6 = *a1;
    v7 = WORD2(CurrentServerSiloGlobals[70].Blink);
    Flink = (__int16)CurrentServerSiloGlobals[71].Flink;
    if ( WORD2(CurrentServerSiloGlobals[71].Flink) )
    {
      v11 = 0;
      v12 = 0;
      if ( !*a1 )
        return v3;
      v13 = *((_QWORD *)a1 + 1);
      while ( 1 )
      {
        v14 = *(unsigned __int8 *)(v11 + v13);
        if ( *((_WORD *)&CurrentServerSiloGlobals[76].Flink->Flink + v14) && (v15 = v11 + 1, (unsigned int)v15 < v6) )
        {
          ++v11;
          v16 = ((char)v14 << 8) + *(unsigned __int8 *)(v15 + v13) == v7;
        }
        else
        {
          v16 = (char)v14 == (unsigned __int8)v7;
        }
        if ( v16 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v12) != Flink )
          break;
        ++v11;
        ++v12;
        if ( v11 >= v6 )
          return v3;
      }
      return 0;
    }
    v9 = 0;
    if ( *a1 )
    {
      while ( *(char *)(v9 + *((_QWORD *)a1 + 1)) != (unsigned __int8)v7
           || *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v9) == Flink )
      {
        if ( ++v9 >= v6 )
          return v3;
      }
      return 0;
    }
  }
  return v3;
}
