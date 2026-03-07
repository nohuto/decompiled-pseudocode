char __fastcall ObpUnlockHandleDatabaseEntry(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  __int64 v3; // r8
  _DWORD *v4; // r9
  int *v5; // rax
  int v6; // ecx
  char v7; // al

  v1 = OBJECT_HEADER_TO_HANDLE_INFO(a1);
  v4 = (_DWORD *)v1;
  if ( (*(_BYTE *)(v3 + 27) & 0x40) != 0 )
  {
LABEL_9:
    --*(_BYTE *)(v1 + 11);
    goto LABEL_10;
  }
  v5 = *(int **)v1;
  v6 = *v5;
  v4 = v5 + 2;
  v1 = 0LL;
  if ( v6 )
  {
    do
    {
      if ( *(_QWORD *)v4 == v2 )
      {
        v7 = *((_BYTE *)v4 + 11);
        if ( v7 != -1 )
        {
          LOBYTE(v1) = v7 - 1;
          *((_BYTE *)v4 + 11) = v1;
          goto LABEL_10;
        }
        v1 = (__int64)v4;
      }
      v4 += 4;
      --v6;
    }
    while ( v6 );
    if ( !v1 )
      goto LABEL_10;
    v4 = (_DWORD *)v1;
    goto LABEL_9;
  }
LABEL_10:
  if ( !*((_BYTE *)v4 + 11) && (v4[2] & 0xFFFFFF) == 0 )
    *(_QWORD *)v4 = 0LL;
  return v1;
}
