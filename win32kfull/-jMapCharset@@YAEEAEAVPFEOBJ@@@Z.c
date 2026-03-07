unsigned __int8 __fastcall jMapCharset(__int64 a1, struct PFEOBJ *a2)
{
  char v3; // bl
  __int64 v4; // rdi
  unsigned __int8 result; // al
  char *v6; // rax
  char v7; // bp
  char *v8; // rdx
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rax
  _BYTE *v12; // rax
  _BYTE *v13; // rdx

  v3 = a1;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( !*(_DWORD *)(v4 + 40) )
    return *(_BYTE *)(v4 + 44);
  if ( (_BYTE)a1 == 1 )
    v3 = *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 19528LL);
  result = -2;
  if ( v3 != -2 )
  {
    v6 = (char *)(v4 + *(int *)(v4 + 40));
    v7 = *v6;
    v8 = v6 + 16;
    while ( v6 < v8 )
    {
      if ( *v6 == v3 )
        return v3;
      if ( *v6 == 1 )
        break;
      ++v6;
    }
    if ( *(_QWORD *)(*(_QWORD *)a2 + 120LL) )
    {
      for ( i = PFEOBJ::pGetLinkedFontList(a2)->Flink; i != PFEOBJ::pGetLinkedFontList(a2); i = i->Flink )
      {
        Flink = i[2].Flink[2].Flink;
        Blink_low = SLODWORD(Flink[2].Blink);
        if ( (_DWORD)Blink_low )
        {
          v12 = (char *)Flink + Blink_low;
          v13 = v12 + 16;
          while ( v12 < v13 )
          {
            if ( *v12 == v3 )
              return v3;
            if ( *v12 == 1 )
              break;
            ++v12;
          }
        }
        else if ( BYTE4(Flink[2].Blink) == v3 )
        {
          return v3;
        }
      }
    }
    return v7;
  }
  return result;
}
