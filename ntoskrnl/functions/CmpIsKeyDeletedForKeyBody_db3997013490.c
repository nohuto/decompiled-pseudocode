char __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  char *NextElement; // rax
  __int64 v6; // r9
  _QWORD **v7; // r10
  int v8; // ecx
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( (v2 & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_3;
  NextElement = CmListGetNextElement((_QWORD **)(v4 + 208), &v10, 32);
  if ( !NextElement )
    goto LABEL_3;
  do
  {
    v8 = *((_DWORD *)NextElement + 17);
    if ( v8 == 2 || v8 == 11 )
      break;
    NextElement = CmListGetNextElement(v7, &v10, 32);
  }
  while ( NextElement );
  if ( CmEqualTrans(*((_QWORD *)NextElement + 7), v6) )
LABEL_9:
    LOBYTE(NextElement) = 1;
  else
LABEL_3:
    LOBYTE(NextElement) = 0;
  return (char)NextElement;
}
