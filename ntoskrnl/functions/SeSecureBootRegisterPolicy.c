__int64 __fastcall SeSecureBootRegisterPolicy(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  unsigned int v4; // edx
  unsigned int v5; // ecx
  _WORD *v6; // rbx
  int v7; // ebx
  unsigned int *Pool2; // rax
  unsigned int *v10; // rbp
  ULONG_PTR v11; // rdx
  unsigned int v12; // r9d
  unsigned int *v13; // rax
  unsigned int *v14; // rbp
  unsigned int v15; // ecx
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax

  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)BugCheckParameter3 < 0x10 )
    goto LABEL_14;
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  v5 = *(_DWORD *)(BugCheckParameter2 + 12);
  if ( (v4 == 0) != (v5 == 0)
    || v4 >= (unsigned int)v2
    || v5 >= (unsigned int)v2
    || v5 - 1 <= 0x3E
    || v5 + v4 > (unsigned int)v2 )
  {
    goto LABEL_14;
  }
  v6 = 0LL;
  g_SecureBootPolicyBlobHeader = *(_OWORD *)BugCheckParameter2;
  qword_140C70C10 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( *(_DWORD *)(BugCheckParameter2 + 12) )
    v6 = (_WORD *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 8));
  SepSecureBootSetRegistryKey((__int64)v6);
  if ( (dword_140C70C04 & 8) != 0 )
    SepSecureBootCheckForUpdates();
  if ( !v6 )
    return 0;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, *(unsigned int *)(BugCheckParameter2 + 12), 0x62536553u);
  v10 = Pool2;
  if ( !Pool2 )
  {
LABEL_31:
    v7 = -1073741670;
    goto LABEL_32;
  }
  memmove(Pool2, v6, *(unsigned int *)(BugCheckParameter2 + 12));
  qword_140D17BD0 = v10;
  if ( !v6[18] && !v6[19] )
    return 0;
  qword_140D1BC48 = (__int64)v10 + v10[13] + 60;
  v7 = SepSecureBootBuildRules();
  if ( v7 < 0 )
  {
LABEL_32:
    if ( qword_140D17BD0 )
    {
      ExFreePoolWithTag(qword_140D17BD0, 0);
      qword_140D17BD0 = 0LL;
    }
    KeBugCheckEx(0x145u, v7, BugCheckParameter2, v2, 0LL);
  }
  if ( *(_DWORD *)BugCheckParameter2 >= 2u )
  {
    v11 = *(unsigned int *)(BugCheckParameter2 + 20);
    if ( (_DWORD)v11 )
    {
      if ( (unsigned int)v11 < (unsigned int)v2 )
      {
        v12 = *(_DWORD *)(BugCheckParameter2 + 16);
        if ( v12 < (unsigned int)v2 && v12 <= (int)v2 - (int)v11 )
        {
          v13 = (unsigned int *)ExAllocatePool2(64LL, v11, 0x62536553u);
          v14 = v13;
          if ( v13 )
          {
            memmove(
              v13,
              (const void *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 16)),
              *(unsigned int *)(BugCheckParameter2 + 20));
            v15 = *(_DWORD *)(BugCheckParameter2 + 20);
            if ( v15 >= 0x18 )
            {
              v16 = 276LL * *v14;
              v17 = v15 - 24;
              *((_QWORD *)v14 + 1) = v14 + 6;
              if ( v16 <= 0xFFFFFFFF && v17 >= (unsigned int)v16 )
              {
                v18 = v17 - v16;
                v19 = 32LL * v14[1];
                if ( v19 <= 0xFFFFFFFF )
                {
                  v7 = 0;
                  if ( v18 >= (unsigned int)v19 )
                  {
                    *((_QWORD *)v14 + 2) = (char *)v14 + (unsigned int)v16 + 24;
                    LODWORD(g_SecureBootActivePlatformManifestSize) = *(_DWORD *)(BugCheckParameter2 + 20);
                    g_SecureBootActivePlatformManifest = v14;
                    return (unsigned int)v7;
                  }
                }
              }
            }
            goto LABEL_14;
          }
          goto LABEL_31;
        }
      }
LABEL_14:
      v7 = -1069350909;
      goto LABEL_32;
    }
  }
  return (unsigned int)v7;
}
