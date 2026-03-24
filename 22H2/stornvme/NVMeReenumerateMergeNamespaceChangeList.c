/*
 * XREFs of NVMeReenumerateMergeNamespaceChangeList @ 0x1C00069E4
 * Callers:
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0007A10 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeReenumerateMergeNamespaceChangeList(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r11d
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 i; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax

  if ( a2 && a1 && *a2 != -1 )
  {
    if ( *(_DWORD *)(a1 + 4092) )
    {
LABEL_23:
      *a2 = -1;
    }
    else
    {
      v3 = 0LL;
      v4 = 1024;
      while ( *(_DWORD *)(a1 + 4 * v3) )
      {
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= 0x400 )
          goto LABEL_10;
      }
      v4 = v3;
LABEL_10:
      v5 = 1024;
      v6 = 0LL;
      while ( a2[v6] )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= 0x400 )
          goto LABEL_15;
      }
      v5 = v6;
LABEL_15:
      for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
      {
        v8 = 0LL;
        if ( v5 )
        {
          while ( *(_DWORD *)(a1 + 4 * i) != a2[v8] )
          {
            v8 = (unsigned int)(v8 + 1);
            if ( (unsigned int)v8 >= v5 )
              goto LABEL_19;
          }
        }
        else
        {
LABEL_19:
          v9 = (unsigned int)i + v5;
          if ( (unsigned int)v9 >= 0x400 )
            goto LABEL_23;
          result = *(unsigned int *)(a1 + 4 * i);
          a2[v9] = result;
        }
      }
    }
  }
  return result;
}
