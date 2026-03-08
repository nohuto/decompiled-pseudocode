/*
 * XREFs of ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1C011C834
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C026DDD4 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PFFOBJ::vGetEUDC(PFFOBJ *this, const wchar_t **a2)
{
  __int64 i; // rdx
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int16 v10; // r13
  _BOOL8 v11; // rax
  __int64 v12; // r14
  const wchar_t *v13; // r12
  const wchar_t *v14; // rsi
  __int64 v15; // rax
  const wchar_t *v16; // rsi
  BOOL v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx

  for ( i = 0LL; i < 8; i += 4LL )
    *(_QWORD *)&(*a2)[i] = 0LL;
  v5 = *(_QWORD *)this;
  if ( a2[1] )
  {
    v6 = 0;
    if ( *(_DWORD *)(v5 + 208) )
    {
      do
      {
        v7 = *(_QWORD *)(v5 + 8LL * v6 + 216);
        v8 = *(_QWORD *)(v7 + 32);
        v9 = *(int *)(v8 + 16);
        v10 = *(_WORD *)(v9 + v8);
        v11 = v10 == 64;
        v12 = 4 * v11;
        if ( !_wcsicmp(a2[1], (const wchar_t *)(v8 + v9 + 2 * v11)) )
          *(_QWORD *)&(*a2)[v12] = v7;
        if ( !*(_QWORD *)&(*a2)[v12] )
        {
          v13 = a2[1];
          v14 = (const wchar_t *)(*(_QWORD *)(v7 + 32) + *(int *)(*(_QWORD *)(v7 + 32) + 8LL));
          if ( v10 == 64 && *v14 == 64 )
            ++v14;
          if ( _wcsicmp(a2[1], v14) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 48LL) & 0x8000000) != 0 )
            {
              v15 = -1LL;
              do
                ++v15;
              while ( v14[v15] );
              v16 = &v14[v15 + 1];
              while ( *v16 )
              {
                if ( v10 == 64 && *v16 == 64 )
                  ++v16;
                v17 = _wcsicmp(v13, v16) == 0;
                v18 = -1LL;
                do
                  ++v18;
                while ( v16[v18] );
                v16 += v18 + 1;
                if ( v17 )
                  goto LABEL_23;
              }
            }
          }
          else
          {
LABEL_23:
            *(_QWORD *)&(*a2)[v12] = v7;
          }
        }
        v5 = *(_QWORD *)this;
        ++v6;
      }
      while ( v6 < *(_DWORD *)(*(_QWORD *)this + 208LL) );
    }
    if ( !*((_QWORD *)*a2 + 1) )
      *((_QWORD *)*a2 + 1) = *(_QWORD *)*a2;
  }
  else
  {
    *(_QWORD *)*a2 = *(_QWORD *)(v5 + 216);
    v19 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == 2 )
      v20 = *(_QWORD *)(v19 + 224);
    else
      v20 = *(_QWORD *)(v19 + 216);
    *((_QWORD *)*a2 + 1) = v20;
  }
}
