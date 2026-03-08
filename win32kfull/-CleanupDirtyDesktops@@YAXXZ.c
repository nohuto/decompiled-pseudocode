/*
 * XREFs of ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01BF744
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 * Callees:
 *     <none>
 */

void CleanupDirtyDesktops(void)
{
  __int64 i; // rbx
  _DWORD *v1; // rdi
  _DWORD *v2; // rcx
  __int64 v3; // rax

  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    v1 = (_DWORD *)(i + 16);
    while ( 1 )
    {
      v2 = *(_DWORD **)v1;
      if ( !*(_QWORD *)v1 )
        break;
      if ( (v2[12] & 0x10) != 0 )
      {
        v1 = v2 + 8;
      }
      else
      {
        if ( grpdeskLogon == v2 )
        {
          UnlockObjectAssignment(&grpdeskLogon);
          v2 = *(_DWORD **)v1;
        }
        v3 = *(_QWORD *)(*(_QWORD *)(i + 56) + 8LL);
        if ( v3 )
        {
          if ( *(_DWORD **)(v3 + 24) == v2 )
            UnlockObjectAssignment(v3 + 24);
        }
        LockObjectAssignment(v1, *(_QWORD *)(*(_QWORD *)v1 + 32LL));
      }
    }
  }
}
