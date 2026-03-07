__int64 __fastcall UpcaseUnicodeToUTF8NHelper(CHAR *a1, ULONG a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  _DWORD *v6; // r13
  unsigned int v8; // r12d
  int v9; // esi
  __int64 CurrentServerSilo; // rax
  _QWORD *v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // ebx
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // r10
  WCHAR *v17; // r9
  unsigned __int16 v18; // ax
  unsigned __int16 *v19; // r9
  __int64 v20; // r11
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-F8h] BYREF
  PCHAR UTF8StringDestination; // [rsp+38h] [rbp-F0h]
  __int64 v24; // [rsp+40h] [rbp-E8h]
  _DWORD *v25; // [rsp+48h] [rbp-E0h]
  WCHAR UnicodeStringSource[64]; // [rsp+50h] [rbp-D8h] BYREF

  v25 = a3;
  v6 = a3;
  UTF8StringDestination = a1;
  v8 = 0;
  v9 = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v11 = *(_QWORD **)(CurrentServerSilo + 1488);
  else
    v11 = &PspHostSiloGlobals;
  v12 = a5;
  v24 = v11[154];
  while ( v12 )
  {
    if ( !a2 )
      break;
    UTF8StringActualByteCount = 0;
    if ( v12 >= 0x40 )
    {
      v13 = 64;
      if ( v12 != 64 )
      {
        if ( (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
          v13 = 63;
        goto LABEL_8;
      }
    }
    else
    {
      v13 = v12;
    }
    if ( !v13 )
    {
      v15 = 0LL;
      goto LABEL_11;
    }
LABEL_8:
    v14 = v24;
    v15 = v13;
    v16 = a4 - (_QWORD)UnicodeStringSource;
    v17 = UnicodeStringSource;
    do
    {
      v18 = NLS_UPCASE(v14, *(WCHAR *)((char *)v17 + v16));
      *v19 = v18;
      v17 = v19 + 1;
    }
    while ( v20 != 1 );
    v6 = v25;
LABEL_11:
    if ( RtlUnicodeToUTF8N(UTF8StringDestination, a2, &UTF8StringActualByteCount, UnicodeStringSource, 2 * v13) < 0 )
    {
      v9 += UTF8StringActualByteCount;
      v8 = -2147483643;
      break;
    }
    a4 += 2 * v15;
    UTF8StringDestination += UTF8StringActualByteCount;
    a2 -= UTF8StringActualByteCount;
    v9 += UTF8StringActualByteCount;
    v12 -= v13;
  }
  if ( v6 )
    *v6 = v9;
  return v8;
}
