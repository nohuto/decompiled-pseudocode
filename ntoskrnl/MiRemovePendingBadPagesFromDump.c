/*
 * XREFs of MiRemovePendingBadPagesFromDump @ 0x1406285EC
 * Callers:
 *     MmGetDumpRange @ 0x14062DF70 (MmGetDumpRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall MiRemovePendingBadPagesFromDump(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r15
  _QWORD *v3; // rax
  _QWORD *i; // rbx
  __int64 v5; // rdx
  _QWORD **v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  unsigned int *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // rbp
  char *v13; // r12

  v1 = a1;
  if ( qword_140C66F88 )
  {
    v2 = 0LL;
    if ( qword_140C66F98 )
    {
      v9 = (unsigned int *)MmPhysicalMemoryBlock;
      if ( MmPhysicalMemoryBlock )
      {
        v10 = 0;
        if ( *(_DWORD *)MmPhysicalMemoryBlock )
        {
          do
          {
            v11 = *(_QWORD *)&v9[4 * v10 + 4];
            v12 = *(_QWORD *)&v9[4 * v10 + 6];
            if ( v12 )
            {
              v13 = (char *)(48 * v11 - 0x21FFFFFFFFDDLL);
              while ( 1 )
              {
                if ( (*v13 & 0x40) != 0 )
                {
                  if ( *v13 < 0 )
                  {
                    (*(void (__fastcall **)(__int64, __int64, __int64))(v1 + 8))(v1, v11, 1LL);
                    v1 = a1;
                  }
                  if ( ++v2 == qword_140C66F88 )
                    break;
                }
                ++v11;
                v13 += 48;
                if ( !--v12 )
                  goto LABEL_29;
              }
              v10 = *v9 - 1;
            }
LABEL_29:
            ++v10;
          }
          while ( v10 < *v9 );
        }
      }
    }
    else
    {
      v3 = (_QWORD *)qword_140C66F80;
      i = 0LL;
      while ( v3 )
      {
        i = v3;
        v3 = (_QWORD *)*v3;
      }
      while ( i )
      {
        v5 = i[3];
        if ( *(char *)(v5 + 35) < 0 )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(v1 + 8))(
            v1,
            0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4),
            1LL);
          v1 = a1;
        }
        v6 = (_QWORD **)i[1];
        v7 = i;
        if ( v6 )
        {
          v8 = *v6;
          for ( i = (_QWORD *)i[1]; v8; v8 = (_QWORD *)*v8 )
            i = v8;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v7 )
              break;
            v7 = i;
          }
        }
      }
    }
  }
}
