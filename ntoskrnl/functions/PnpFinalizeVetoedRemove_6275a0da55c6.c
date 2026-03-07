__int16 __fastcall PnpFinalizeVetoedRemove(__int64 a1, unsigned __int64 a2, UNICODE_STRING *a3)
{
  _DWORD *v3; // rax
  const wchar_t *v4; // rbx
  int v6; // ebp
  __int64 v8; // rcx
  wchar_t *Buffer; // rax
  __int64 v10; // rax
  __int64 v11; // r9

  v3 = *(_DWORD **)(a1 + 48);
  v4 = 0LL;
  v6 = a2;
  if ( v3 )
    *v3 = a2;
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 && a3 )
    RtlCopyUnicodeString((PUNICODE_STRING)v8, a3);
  LODWORD(Buffer) = *(_DWORD *)(a1 + 144);
  if ( ((unsigned __int8)Buffer & 8) != 0 && v6 == 6 )
  {
    Buffer = a3->Buffer;
    v8 = 0LL;
    a2 = (unsigned __int64)Buffer + a3->Length;
    if ( (unsigned __int64)Buffer < a2 )
    {
      while ( 1 )
      {
        if ( *Buffer == 92 )
        {
          v8 = (unsigned int)(v8 + 1);
          if ( (_DWORD)v8 == 3 )
            break;
        }
        if ( (unsigned __int64)++Buffer >= a2 )
          goto LABEL_14;
      }
      LOWORD(Buffer) = (_WORD)Buffer - LOWORD(a3->Buffer);
      a3->Length = (unsigned __int16)Buffer;
    }
  }
LABEL_14:
  if ( (byte_140C0E10C & 1) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 152);
    if ( v10 )
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
    else
      v11 = 0LL;
    if ( a3 )
      v4 = a3->Buffer;
    LOWORD(Buffer) = McTemplateK0zqz_EtwWriteTransfer(
                       v8,
                       a2,
                       (const GUID *)(a1 + 88),
                       *(const wchar_t **)(v11 + 48),
                       v6,
                       v4);
  }
  return (__int16)Buffer;
}
