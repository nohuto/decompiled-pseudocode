bool __fastcall CmpIsHiveAlreadyLoaded(__int64 a1, __int64 a2, char a3, __int64 **a4, _QWORD *a5)
{
  char v5; // bl
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int64 *v12; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v14; // r8
  __int64 *NextActiveHive; // rax
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD v20[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  if ( (a3 & 0x20) == 0 )
  {
    if ( a1 )
    {
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = (*(_DWORD *)(v9 + 184) & 0x40000) == 0;
        v11 = *(_QWORD *)(v9 + 32);
        *a4 = (__int64 *)v11;
        if ( !v10 && CmpIsThisSameFile(a2, *(void **)(v11 + 1544)) )
        {
          v12 = *a4;
          if ( ((*a4)[514] & 0x40) == 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0x40000) == 0 )
          {
            v5 = 1;
            if ( *((_BYTE *)v12 + 2944) == 1 )
            {
              CmpUnfreezeHive(v12);
              *((_BYTE *)*a4 + 2944) = 0;
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v16 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v16 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[514] & 0x20) != 0
          && CmpIsThisSameFile(a2, (void *)NextActiveHive[193])
          && (v16[514] & 0x40) == 0 )
        {
          v20[0] = 0LL;
          v17 = v16[367];
          *a4 = v16;
          CmpConstructNameWithStatus(v17, v20, v14);
          v18 = v20[0];
          *a5 = v20[0];
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v16 + 205);
          return v18 != 0;
        }
      }
    }
  }
  return v5;
}
