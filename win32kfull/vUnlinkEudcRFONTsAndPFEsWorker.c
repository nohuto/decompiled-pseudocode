void __fastcall vUnlinkEudcRFONTsAndPFEsWorker(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rcx
  __int64 i; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = a3;
    do
    {
      if ( (*(_DWORD *)(v3 + 52) & 8) == 0 )
      {
        v6 = *(_QWORD *)(v3 + 72);
        if ( v6 )
        {
          v16 = 0LL;
          while ( 1 )
          {
            v7 = *(_DWORD *)(v6 + 840);
            v8 = 0LL;
            v9 = 1;
            if ( v7 )
            {
              v10 = *(_QWORD *)(v6 + 744);
              while ( 1 )
              {
                v11 = *(_QWORD *)(v10 + 8 * v8);
                if ( v11 )
                {
                  v12 = *(_QWORD *)(v11 + 120);
                  v9 = 0;
                  if ( v12 == *a1 || v12 == a1[1] )
                    break;
                }
                v8 = (unsigned int)(v8 + 1);
                if ( (unsigned int)v8 >= v7 )
                  goto LABEL_14;
              }
              vMakeInactiveHelper((struct RFONT **)(v10 + 8 * v8));
              if ( *(_QWORD *)(*(_QWORD *)(v6 + 120) + 120LL) == a2 )
                break;
            }
LABEL_14:
            if ( *(_QWORD *)(v6 + 744) && v9 )
              break;
LABEL_19:
            *(_DWORD *)(v6 + 712) = 0;
            v6 = *(_QWORD *)(v6 + 496);
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
            if ( !v6 )
              goto LABEL_20;
          }
          v13 = *(void **)(v6 + 744);
          if ( v13 != (void *)(v6 + 752) )
            Win32FreePool(v13);
          *(_QWORD *)(v6 + 744) = 0LL;
          *(_DWORD *)(v6 + 840) = 0;
          *(_DWORD *)(v6 + 832) = 0;
          *(_DWORD *)(v6 + 836) = 0;
          goto LABEL_19;
        }
LABEL_20:
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 208); i = (unsigned int)(i + 1) )
        {
          v15 = *(_QWORD *)(v3 + 8 * i + 216);
          if ( *(_QWORD *)(v15 + 120) == a2 )
            *(_QWORD *)(v15 + 120) = 0LL;
        }
      }
      v3 = *(_QWORD *)(v3 + 8);
    }
    while ( v3 );
  }
}
