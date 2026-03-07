__int64 __fastcall SleepstudyHelperCreateBlockerData(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned int v9; // ecx
  _QWORD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 NonPaged; // rax
  __int64 v14; // rdi
  int v15; // ebx
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 *v18; // rcx

  if ( a1 && a3 && a4 && a5 )
  {
    v9 = 0;
    v10 = (_QWORD *)(a4 + 24);
    while ( *(v10 - 2) && *((_WORD *)v10 - 12) && *v10 )
    {
      ++v9;
      v10 += 4;
      if ( v9 >= a3 )
      {
        v11 = 32 * a3;
        if ( 32 * (unsigned __int64)a3 > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        v12 = v11 + 48;
        if ( (unsigned int)v12 < v11 )
        {
          return (unsigned int)-1073741675;
        }
        else
        {
          NonPaged = SSHSupportAllocateNonPaged(v12, *(_DWORD *)(a1 + 24));
          v14 = NonPaged;
          if ( NonPaged )
          {
            v16 = *a2;
            *(_QWORD *)(NonPaged + 16) = a1;
            *(_OWORD *)(NonPaged + 24) = v16;
            *(_QWORD *)(NonPaged + 8) = NonPaged;
            *(_QWORD *)NonPaged = NonPaged;
            *(_DWORD *)(NonPaged + 40) = 0;
            if ( a3 )
            {
              v17 = 0LL;
              while ( 1 )
              {
                v15 = SshpCopyDataEntry(
                        *(_DWORD *)(a1 + 24),
                        (PCUNICODE_STRING)(32 * v17 + a4),
                        (PUNICODE_STRING)(32 * v17 + v14 + 48));
                if ( v15 < 0 )
                  break;
                v17 = (unsigned int)(*(_DWORD *)(v14 + 40) + 1);
                *(_DWORD *)(v14 + 40) = v17;
                if ( (unsigned int)v17 >= a3 )
                  goto LABEL_19;
              }
              SshpFreeDataEntry((_QWORD *)v14);
            }
            else
            {
LABEL_19:
              ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
              v18 = *(__int64 **)(a1 + 64);
              if ( *v18 != a1 + 56 )
                __fastfail(3u);
              *(_QWORD *)(v14 + 8) = v18;
              *(_QWORD *)v14 = a1 + 56;
              *v18 = v14;
              *(_QWORD *)(a1 + 64) = v14;
              SSHSupportReleasePushLockExclusive((volatile signed __int64 *)(a1 + 16));
              *a5 = v14;
              return 0;
            }
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        return (unsigned int)v15;
      }
    }
  }
  return (unsigned int)-1073741811;
}
