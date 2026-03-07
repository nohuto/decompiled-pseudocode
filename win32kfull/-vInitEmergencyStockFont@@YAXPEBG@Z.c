void __fastcall vInitEmergencyStockFont(const unsigned __int16 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  struct PFF *v3; // r14
  __int64 i; // rdi
  __int64 v5; // rbx
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF
  const unsigned __int16 *v7; // [rsp+70h] [rbp+8h] BYREF
  struct PFF *v8; // [rsp+78h] [rbp+10h] BYREF

  v7 = a1;
  v8 = 0LL;
  v1 = SGDGetSessionState(a1);
  LODWORD(v7) = 0;
  v2 = *(_QWORD *)(v1 + 32);
  v6[0] = *(_QWORD *)(v2 + 20272);
  if ( !*(_QWORD *)(v2 + 19504) )
  {
    if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                         (PUBLIC_PFTOBJ *)v6,
                         L"\\SystemRoot\\System32\\winsrv.dll",
                         (unsigned int *)&v7,
                         2u,
                         &v8,
                         0LL,
                         0) )
    {
      if ( (_DWORD)v7 )
      {
        v3 = v8;
        if ( v8 )
        {
          for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
          {
            if ( *(_QWORD *)(v2 + 19504) )
              break;
            v5 = *((_QWORD *)v3 + i + 27);
            if ( v5 )
            {
              if ( !_wcsicmp((const wchar_t *)(*(_QWORD *)(v5 + 32) + *(int *)(*(_QWORD *)(v5 + 32) + 16LL)), L"SYSTEM") )
                *(_QWORD *)(v2 + 19504) = v5;
            }
          }
        }
      }
    }
  }
}
