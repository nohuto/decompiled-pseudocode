/*
 * XREFs of SleepstudyHelperCreateBlockerData @ 0x1408FB920
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportReleasePushLockExclusive @ 0x1402481C8 (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportAllocateNonPaged @ 0x1402483BC (SSHSupportAllocateNonPaged.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     SshpCopyDataEntry @ 0x14057FE30 (SshpCopyDataEntry.c)
 *     SshpFreeDataEntry @ 0x1408FAD78 (SshpFreeDataEntry.c)
 */

__int64 __fastcall SleepstudyHelperCreateBlockerData(__int64 a1, __int128 *a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  char *v9; // rdi
  unsigned int v10; // ecx
  _QWORD *v11; // rax
  unsigned int v12; // eax
  SIZE_T v13; // rcx
  size_t v14; // rbx
  char *NonPaged; // rax
  int v16; // ebx
  __int128 v17; // xmm0
  __int64 v18; // rax
  _QWORD *v19; // rcx

  v9 = 0LL;
  if ( a1 && a3 && a4 && a5 )
  {
    v10 = 0;
    v11 = (_QWORD *)(a4 + 24);
    do
    {
      if ( !*(v11 - 2) || !*((_WORD *)v11 - 12) || !*v11 )
        return (unsigned int)-1073741811;
      ++v10;
      v11 += 4;
    }
    while ( v10 < a3 );
    v12 = 32 * a3;
    if ( 32 * (unsigned __int64)a3 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    v13 = v12 + 48;
    if ( (unsigned int)v13 < v12 )
      return (unsigned int)-1073741675;
    v14 = (unsigned int)v13;
    NonPaged = (char *)SSHSupportAllocateNonPaged(v13, *(_DWORD *)(a1 + 24));
    v9 = NonPaged;
    if ( !NonPaged )
      return (unsigned int)-1073741670;
    memset(NonPaged, 0, v14);
    v17 = *a2;
    *((_QWORD *)v9 + 2) = a1;
    *(_OWORD *)(v9 + 24) = v17;
    *((_QWORD *)v9 + 1) = v9;
    *(_QWORD *)v9 = v9;
    *((_DWORD *)v9 + 10) = 0;
    if ( !a3 )
    {
LABEL_20:
      ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
      v19 = *(_QWORD **)(a1 + 64);
      if ( *v19 != a1 + 56 )
        __fastfail(3u);
      *((_QWORD *)v9 + 1) = v19;
      *(_QWORD *)v9 = a1 + 56;
      *v19 = v9;
      *(_QWORD *)(a1 + 64) = v9;
      SSHSupportReleasePushLockExclusive(a1 + 16);
      *a5 = v9;
      return 0;
    }
    v18 = 0LL;
    while ( 1 )
    {
      v16 = SshpCopyDataEntry(
              *(_DWORD *)(a1 + 24),
              (PCUNICODE_STRING)(32 * v18 + a4),
              (PUNICODE_STRING)&v9[32 * v18 + 48]);
      if ( v16 < 0 )
        break;
      v18 = (unsigned int)(*((_DWORD *)v9 + 10) + 1);
      *((_DWORD *)v9 + 10) = v18;
      if ( (unsigned int)v18 >= a3 )
        goto LABEL_20;
    }
  }
  else
  {
    v16 = -1073741811;
  }
  if ( v9 )
    SshpFreeDataEntry(v9);
  return (unsigned int)v16;
}
