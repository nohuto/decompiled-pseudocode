/*
 * XREFs of ViXdvBindXdvDriverEntryWrappers @ 0x1409C9D1C
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1409C9E2C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 */

char __fastcall ViXdvBindXdvDriverEntryWrappers(__int64 (*a1)(void))
{
  char v1; // bl
  _DWORD *v3; // rax
  unsigned int i; // ecx
  unsigned int v5; // r10d
  char v6; // r9
  char **j; // r8
  int v8; // r11d
  char *v9; // r11

  v1 = 0;
  ViXdvEPThunksNoXdvEntry = 0;
  ViXdvEPBound = 0;
  if ( !a1 )
    return 0;
  v3 = (_DWORD *)a1();
  if ( v3 )
  {
    if ( *v3 == 5 )
    {
      for ( i = 0; i < v3[1]; ++i )
      {
        if ( *(_QWORD *)&v3[2 * i + 2] )
        {
          v5 = 0;
          v6 = 0;
          for ( j = &VfXdvIoCallbackThunks; ; j = &(&VfXdvIoCallbackThunks)[4 * v5] )
          {
            v8 = *((_DWORD *)j + 6);
            if ( v8 == 268435489 || v6 )
              break;
            if ( v8 == i + 0x10000000 )
            {
              v6 = 1;
              v9 = j[2];
              if ( v9 )
              {
                *(_QWORD *)v9 = *(_QWORD *)&v3[2 * i + 2];
                ++ViXdvEPBound;
              }
            }
            ++v5;
          }
        }
        else
        {
          ++ViXdvEPThunksNoXdvEntry;
        }
      }
      return 1;
    }
    else
    {
      VfUtilDbgPrint("XDV entry point version mismatch: kernel version %d   driver version %d\n", 5, *v3);
    }
  }
  return v1;
}
