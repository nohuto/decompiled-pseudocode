/*
 * XREFs of DpiDetermineResourceListSize @ 0x1C02127C8
 * Callers:
 *     DpiFdoHandleStartDevice @ 0x1C01F6860 (DpiFdoHandleStartDevice.c)
 *     DpiFilterOutVgaResources @ 0x1C02125C0 (DpiFilterOutVgaResources.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiDetermineResourceListSize(_DWORD *a1, int *a2)
{
  _DWORD *v3; // rdx
  int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // eax
  _DWORD *v7; // r9
  unsigned int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rax

  if ( a1 )
  {
    v3 = a1 + 1;
    v4 = 4;
    if ( *a1 )
    {
      v5 = (unsigned int)*a1;
      do
      {
        v6 = v3[3];
        v7 = v3 + 4;
        v8 = 16;
        if ( v6 )
        {
          v9 = v6;
          do
          {
            v10 = 20LL;
            if ( *(_BYTE *)v7 == 5 )
              v10 = (unsigned int)(v7[1] + 20);
            v8 += v10;
            v7 = (_DWORD *)((char *)v7 + v10);
            --v9;
          }
          while ( v9 );
        }
        v4 += v8;
        v3 = (_DWORD *)((char *)v3 + v8);
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    v4 = 0;
  }
  *a2 = v4;
}
