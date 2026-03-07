void __fastcall PiDevCfgFreeDriverNode(char *P)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  v2 = (_QWORD **)(P + 224);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v12 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
LABEL_25:
      __fastfail(3u);
    *v2 = v12;
    v12[1] = v2;
    PiDevCfgFreeDriverNode(v3);
  }
  v4 = (_QWORD **)(P + 208);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 )
      goto LABEL_25;
    v13 = (_QWORD *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 )
      goto LABEL_25;
    *v4 = v13;
    v13[1] = v4;
    PiDevCfgFreeDriverNode(v5);
  }
  v6 = (_QWORD **)(P + 368);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 )
      goto LABEL_25;
    v14 = (_QWORD *)*v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_25;
    *v6 = v14;
    v14[1] = v6;
    PiDevCfgFreeDriverNode(v7);
  }
  v8 = (void *)*((_QWORD *)P + 18);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = (void *)*((_QWORD *)P + 2);
  if ( v9 )
    ZwClose(v9);
  v10 = (void *)*((_QWORD *)P + 3);
  if ( v10 )
    ZwClose(v10);
  v11 = (void *)*((_QWORD *)P + 4);
  if ( v11 )
    ZwClose(v11);
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 56));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 40));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 72));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 88));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 8);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 10);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 16);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 17);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 18);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 19);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 20);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 21);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 22);
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 408));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 24);
  ExFreePoolWithTag(P, 0);
}
