_UNKNOWN **__fastcall NVMeReenumerateMergeNamespaceChangeList(__int64 a1, _DWORD *a2)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // r11d
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // r9
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    if ( a1 )
    {
      if ( *a2 != -1 )
      {
        if ( *(_DWORD *)(a1 + 4092) )
        {
LABEL_24:
          *a2 = -1;
        }
        else
        {
          v4 = 0LL;
          v5 = 1024;
          while ( *(_DWORD *)(a1 + 4 * v4) )
          {
            v4 = (unsigned int)(v4 + 1);
            if ( (unsigned int)v4 >= 0x400 )
              goto LABEL_10;
          }
          v5 = v4;
LABEL_10:
          v6 = 1024;
          v7 = 0LL;
          while ( a2[v7] )
          {
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= 0x400 )
              goto LABEL_15;
          }
          v6 = v7;
LABEL_15:
          v8 = 0LL;
          if ( v5 )
          {
            v9 = v6;
            do
            {
              v10 = 0LL;
              if ( v6 )
              {
                while ( *(_DWORD *)(a1 + 4 * v8) != a2[v10] )
                {
                  v10 = (unsigned int)(v10 + 1);
                  if ( (unsigned int)v10 >= v6 )
                    goto LABEL_20;
                }
              }
              else
              {
LABEL_20:
                v11 = v9;
                if ( v9 >= 0x400uLL )
                  goto LABEL_24;
                result = (_UNKNOWN **)*(unsigned int *)(a1 + 4 * v8);
                ++v9;
                a2[v11] = (_DWORD)result;
              }
              v8 = (unsigned int)(v8 + 1);
            }
            while ( (unsigned int)v8 < v5 );
          }
        }
      }
    }
  }
  return result;
}
