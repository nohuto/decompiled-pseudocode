void __fastcall PopGetCallerContextFromBuffer(__int64 a1, UNICODE_STRING *a2, __int64 a3, UNICODE_STRING *a4)
{
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // r9
  _WORD *v12; // rcx
  __int16 v13; // cx
  __int64 v14; // r8
  _WORD *i; // rcx
  unsigned __int16 v16; // ax
  __int64 v17; // r9
  _WORD *v18; // r10
  __int64 v19; // r11
  __int16 v20; // ax

  *(_OWORD *)a3 = 0LL;
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 8);
    v8 = a1 + v6;
    if ( v7 )
    {
      v17 = v8 & -(__int64)(v6 != 0);
      if ( v17 )
      {
        v18 = (_WORD *)(v8 & -(__int64)(v6 != 0));
        v19 = 0x7FFFLL;
        while ( *v18 )
        {
          ++v18;
          if ( !--v19 )
            goto LABEL_25;
        }
        if ( a3 )
        {
          v20 = 2 * (0x7FFF - v19);
          *(_QWORD *)(a3 + 8) = v17;
          *(_WORD *)a3 = v20;
          *(_WORD *)(a3 + 2) = v20 + 2;
        }
      }
LABEL_25:
      if ( v7 == 2 )
      {
        RtlUnicodeStringPrintf(a2, L"%d", *(unsigned int *)(a1 + 28));
        *a4 = *a2;
      }
      else
      {
        RtlInitUnicodeString(a4, 0LL);
      }
    }
    else
    {
      v9 = v8 & -(__int64)(v6 != 0);
      v10 = (*(_QWORD *)(a1 + 24) + a1) & -(__int64)(*(_QWORD *)(a1 + 24) != 0LL);
      if ( v9 )
      {
        v11 = 0x7FFFLL;
        v12 = (_WORD *)(v8 & -(__int64)(v6 != 0));
        while ( *v12 )
        {
          ++v12;
          if ( !--v11 )
            goto LABEL_11;
        }
        if ( a3 )
        {
          v13 = 2 * (0x7FFF - v11);
          *(_QWORD *)(a3 + 8) = v9;
          *(_WORD *)a3 = v13;
          *(_WORD *)(a3 + 2) = v13 + 2;
        }
      }
LABEL_11:
      *a4 = 0LL;
      if ( v10 )
      {
        v14 = 0x7FFFLL;
        for ( i = (_WORD *)v10; *i; ++i )
        {
          if ( !--v14 )
            return;
        }
        if ( a4 )
        {
          v16 = 2 * (0x7FFF - v14);
          a4->Buffer = (wchar_t *)v10;
          a4->Length = v16;
          a4->MaximumLength = v16 + 2;
        }
      }
    }
  }
  else
  {
    *a4 = 0LL;
  }
}
