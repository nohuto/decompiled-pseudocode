/*
 * XREFs of vLinkEudcPFEsWorker @ 0x1C0114EE8
 * Callers:
 *     vLinkEudcPFEs @ 0x1C011177C (vLinkEudcPFEs.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00E3648 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C0115FA0 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 */

void __fastcall vLinkEudcPFEsWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  wchar_t *v7; // rbp
  int v8; // r14d
  struct _FLENTRY *BaseFontEntry; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = a2;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 + 52) & 8) == 0 )
      {
        v4 = 0;
        if ( *(_DWORD *)(v2 + 208) )
          break;
      }
LABEL_16:
      v2 = *(_QWORD *)(v2 + 8);
      if ( !v2 )
        return;
    }
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 8LL * v4 + 216);
      v12 = v5;
      if ( v5 )
      {
        if ( a1 )
        {
          v11 = PFEOBJ::bCheckFamilyName((PFEOBJ *)&v12, (const unsigned __int16 *)(a1 + 32), 0, 0LL);
          BaseFontEntry = (struct _FLENTRY *)a1;
          if ( !v11 )
            goto LABEL_14;
        }
        else
        {
          v6 = *(_QWORD *)(v5 + 32);
          v7 = (wchar_t *)(v6 + *(int *)(v6 + 8));
          v8 = *(_DWORD *)(v6 + 48) & 0x8000000;
          BaseFontEntry = FindBaseFontEntry(v7);
          if ( !BaseFontEntry )
          {
            if ( !v8 )
              goto LABEL_14;
            v10 = -1LL;
            do
              ++v10;
            while ( v7[v10] );
            BaseFontEntry = FindBaseFontEntry(&v7[v10 + 1]);
            if ( !BaseFontEntry )
            {
LABEL_14:
              *(_QWORD *)(v5 + 120) = 0LL;
              goto LABEL_15;
            }
          }
        }
        *(_QWORD *)(v5 + 120) = BaseFontEntry;
      }
LABEL_15:
      if ( ++v4 >= *(_DWORD *)(v2 + 208) )
        goto LABEL_16;
    }
  }
}
