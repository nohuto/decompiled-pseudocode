void __fastcall PiDrvDbDestroyNode(char *P)
{
  void *v2; // rcx
  char **v3; // rax
  PVOID *v4; // rcx
  void *v5; // rcx

  if ( (*((_DWORD *)P + 16) & 0x10) != 0 )
  {
    v2 = (void *)*((_QWORD *)P + 9);
    if ( v2 )
      ZwClose(v2);
  }
  v3 = *(char ***)P;
  if ( *(_QWORD *)P )
  {
    if ( v3[1] != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (char *)v4;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)P + 1);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 2);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 3);
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 504));
  if ( P[192] )
    ExDeleteResourceLite((PERESOURCE)(P + 88));
  v5 = (void *)*((_QWORD *)P + 59);
  if ( v5 )
    ZwClose(v5);
  ExFreePoolWithTag(P, 0);
}
