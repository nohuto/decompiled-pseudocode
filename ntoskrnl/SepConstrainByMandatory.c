/*
 * XREFs of SepConstrainByMandatory @ 0x1402E40BC
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

void __fastcall SepConstrainByMandatory(__int64 a1, int a2, char *a3, char *a4, bool *a5, unsigned int a6)
{
  int v7; // ecx
  signed __int64 v8; // r9
  bool *v9; // rdx
  __int64 v10; // rbx
  int v11; // r10d

  if ( *(_DWORD *)(a1 + 8) && (!*(_BYTE *)(a1 + 5) || !*(_BYTE *)(a1 + 4) || !*(_BYTE *)(a1 + 6)) )
  {
    if ( a6 )
    {
      v8 = a4 - a3;
      v9 = a5;
      v10 = a6;
      do
      {
        v11 = *(_DWORD *)a3 & *(_DWORD *)a1;
        if ( v11 != *(_DWORD *)a3 )
        {
          *(_DWORD *)a3 = v11;
          if ( (a2 & 0x2000000) != 0 )
          {
            if ( v11 )
            {
              *(_DWORD *)&a3[v8] = 0;
              if ( a5 )
                *v9 = 1;
            }
            else
            {
              *(_DWORD *)&a3[v8] = -1073741790;
              if ( a5 )
                *v9 = 0;
            }
          }
          else
          {
            *(_DWORD *)&a3[v8] = -1073741790;
            if ( a5 )
              *v9 = *(_DWORD *)a3 != 0;
          }
        }
        a3 += 4;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      v7 = *(_DWORD *)a3 & *(_DWORD *)a1;
      if ( v7 != *(_DWORD *)a3 )
      {
        *(_DWORD *)a3 = v7;
        if ( (a2 & 0x2000000) != 0 )
        {
          if ( v7 )
          {
            *(_DWORD *)a4 = 0;
            if ( a5 )
              *a5 = 1;
          }
          else
          {
            *(_DWORD *)a4 = -1073741790;
            if ( a5 )
              *a5 = 0;
          }
        }
        else
        {
          *(_DWORD *)a4 = -1073741790;
          if ( a5 )
            *a5 = *(_DWORD *)a3 != 0;
        }
      }
    }
  }
}
