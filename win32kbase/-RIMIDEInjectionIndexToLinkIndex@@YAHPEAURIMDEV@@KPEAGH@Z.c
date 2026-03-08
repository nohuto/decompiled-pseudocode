/*
 * XREFs of ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C01C0E24
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C01C39C8 (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEInjectionIndexToLinkIndex(struct RIMDEV *a1, int a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  unsigned int v5; // r10d
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned int v12; // edx
  unsigned __int16 v13; // ax
  _DWORD *v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned __int16 *v18; // r8
  _DWORD *i; // rcx

  v4 = *((_QWORD *)a1 + 48);
  v5 = 0;
  *a3 = 0;
  v9 = *(_QWORD *)(v4 + 72);
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v10 = *((_QWORD *)a1 + 59);
    v11 = *(_QWORD *)(v10 + 760);
    v12 = *(_DWORD *)(v10 + 768) - 1;
    if ( *(_DWORD *)(v10 + 24) != 7 )
      v12 = *(_DWORD *)(v10 + 768);
    if ( v11 && a2 )
    {
      if ( a4 )
      {
        v13 = *(_WORD *)(v11 + 6);
        if ( !v12 )
          return v5;
        v14 = (_DWORD *)(v9 + 4);
        v15 = v12;
        do
        {
          *((_WORD *)v14 - 1) = v13;
          v13 = *(_WORD *)(*(_QWORD *)(v11 + 24) + 8LL * v13 + 4);
          *v14 = 0;
          v14 += 2;
          --v15;
        }
        while ( v15 );
LABEL_10:
        v16 = 0;
        for ( i = (_DWORD *)(v9 + 4); *i; i += 2 )
        {
          if ( ++v16 >= v12 )
            return v5;
        }
        *a3 = *(_WORD *)(v9 + 8LL * v16 + 2);
        *(_WORD *)(v9 + 8LL * v16) = a2;
        *(_DWORD *)(v9 + 8LL * v16 + 4) = 1;
      }
      else
      {
        v17 = 0;
        if ( !v12 )
          return v5;
        v18 = *(unsigned __int16 **)(v4 + 72);
        while ( *v18 != a2 || !*((_DWORD *)v18 + 1) )
        {
          ++v17;
          v18 += 4;
          if ( v17 >= v12 )
            goto LABEL_10;
        }
        *a3 = *(_WORD *)(v9 + 8LL * v17 + 2);
      }
      return 1;
    }
  }
  return 1LL;
}
