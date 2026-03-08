/*
 * XREFs of _anonymous_namespace_::PackedStringArrayBuilder::Append @ 0x18010BCB4
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18010B170 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Emplace_reallocate@E@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z @ 0x18010CCDC (--$_Emplace_reallocate@E@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z.c)
 */

void __fastcall anonymous_namespace_::PackedStringArrayBuilder::Append(_DWORD *a1, char *a2)
{
  _DWORD *v2; // rsi
  char *v3; // rdi
  _QWORD *v4; // rcx
  char *v5; // rbx
  _BYTE *v6; // rdx
  char v7; // al
  char v8; // [rsp+30h] [rbp+8h] BYREF

  ++*a1;
  v2 = a1 + 2;
  v3 = a2;
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v4 = *(_QWORD **)a2;
  v5 = (char *)v4 + *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v3 = *(char **)a2;
  while ( 1 )
  {
    v6 = (_BYTE *)*((_QWORD *)v2 + 1);
    if ( v3 == v5 )
      break;
    v7 = *v3;
    v8 = *v3;
    if ( v6 == *((_BYTE **)v2 + 2) )
    {
      std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(v2, v6, &v8);
    }
    else
    {
      *v6 = v7;
      ++*((_QWORD *)v2 + 1);
    }
    ++v3;
  }
  v8 = 0;
  if ( v6 == *((_BYTE **)v2 + 2) )
  {
    std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(v2, v6, &v8);
  }
  else
  {
    *v6 = 0;
    ++*((_QWORD *)v2 + 1);
  }
}
