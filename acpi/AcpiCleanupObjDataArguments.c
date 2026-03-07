void __fastcall AcpiCleanupObjDataArguments(__int64 a1, unsigned int a2)
{
  void **v2; // rbx
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  void *v5; // rcx

  if ( a1 && a2 )
  {
    v2 = (void **)(a1 + 32);
    v3 = a2;
    while ( *((_WORD *)v2 - 15) == 2 || *((_WORD *)v2 - 15) == 3 )
    {
      v5 = *v2;
      if ( *v2 )
        goto LABEL_11;
LABEL_12:
      v2 += 5;
      if ( !--v3 )
        return;
    }
    if ( *((_WORD *)v2 - 15) != 4 )
      goto LABEL_12;
    v4 = *v2;
    if ( !*v2 || !*v4 )
      goto LABEL_12;
    AcpiCleanupObjDataArguments(v4 + 2);
    v5 = v4;
LABEL_11:
    ExFreePoolWithTag(v5, 0x4E706341u);
    *v2 = 0LL;
    goto LABEL_12;
  }
}
