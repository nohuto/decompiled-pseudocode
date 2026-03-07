void __fastcall AcpiNotifyDiscoverDeleteMainCompletion(_BYTE *P)
{
  unsigned int *v2; // rbx
  _BYTE *v3; // rax
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD); // rax

  while ( 1 )
  {
    v2 = *(unsigned int **)P;
    if ( *(_BYTE **)P == P )
      break;
    if ( *((_BYTE **)v2 + 1) != P || (v3 = *(_BYTE **)v2, *(unsigned int **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *(_QWORD *)P = v3;
    *((_QWORD *)v3 + 1) = P;
    v4 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)v2 + 5);
    if ( !P[16] )
    {
      if ( v4 )
        v4(*((_QWORD *)v2 + 6), v2[6], 0LL);
LABEL_11:
      AMLIDereferenceHandleEx(*((_QWORD *)v2 + 2));
      goto LABEL_12;
    }
    if ( v4 )
      v4(*((_QWORD *)v2 + 6), v2[6], *((_QWORD *)v2 + 4));
    if ( (v2[6] & 0x80000000) != 0 )
      goto LABEL_11;
LABEL_12:
    if ( P[16] )
      ExFreePoolWithTag(*((PVOID *)v2 + 8), 0x53706341u);
    ExFreePoolWithTag(v2, 0x4E706341u);
  }
  ExFreePoolWithTag(P, 0x4E706341u);
}
