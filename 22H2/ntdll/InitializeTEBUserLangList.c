/*
 * XREFs of InitializeTEBUserLangList @ 0x180038670
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180076740 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007CA20 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpLoadLanguageConfigList @ 0x18003F48C (RtlpLoadLanguageConfigList.c)
 *     InitializeUserOrMachineLangList @ 0x180076914 (InitializeUserOrMachineLangList.c)
 *     RtlpUpdateTEBLanguage @ 0x18007D280 (RtlpUpdateTEBLanguage.c)
 */

__int64 __fastcall InitializeTEBUserLangList(char a1, __int64 a2)
{
  struct _TEB *v2; // r8
  unsigned int v3; // r10d
  int updated; // ebx
  unsigned int v7; // r14d
  int WowTebOffset; // eax
  bool v9; // si
  bool v10; // bp
  bool v11; // r15
  struct _TEB *v12; // rdx
  __int64 v13; // rax
  struct _TEB *v14; // rcx
  __int64 v15; // rax
  unsigned int MuiImpersonation; // edx
  unsigned int v17; // r9d
  struct _TEB *v18; // rax
  void *UserPrefLanguages; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  int v24; // eax
  bool v25; // zf
  struct _TEB *v27; // r8
  int v28; // eax
  struct _TEB *v29; // rdx
  __int64 v30; // rax
  struct _TEB *v31; // rcx
  __int64 v32; // rax
  _DWORD *v33; // rcx
  char v34; // cl
  __int64 v35; // rcx
  unsigned int v36; // r8d
  unsigned int v37; // eax
  int v38; // eax
  __int64 v39; // [rsp+80h] [rbp+18h] BYREF
  __int64 v40; // [rsp+88h] [rbp+20h] BYREF

  v2 = NtCurrentTeb();
  v3 = 0;
  v39 = 0LL;
  v40 = 0LL;
  updated = 0;
  v7 = 0;
  WowTebOffset = v2->WowTebOffset;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( WowTebOffset < 0 )
    LODWORD(v2) = WowTebOffset + (_DWORD)v2;
  v12 = NtCurrentTeb();
  v13 = v12->WowTebOffset;
  if ( (int)v13 < 0 )
    v12 = (struct _TEB *)((char *)v12 + v13);
  v14 = NtCurrentTeb();
  v15 = v14->WowTebOffset;
  if ( (_DWORD)v2 == LODWORD(v12->NtTib.SubSystemTib) )
  {
    if ( (int)v15 < 0 )
      v14 = (struct _TEB *)((char *)v14 + v15);
    MuiImpersonation = HIDWORD(v14->glDispatchTable[186]);
  }
  else
  {
    if ( (int)v15 < 0 )
      v14 = (struct _TEB *)((char *)v14 + v15);
    MuiImpersonation = v14->MuiImpersonation;
  }
  v17 = MEMORY[0x7FFE03A4];
  v18 = NtCurrentTeb();
  if ( !MEMORY[0x7FFE03A4] )
    v17 = 1;
  UserPrefLanguages = v18->UserPrefLanguages;
  if ( a2 )
  {
    v20 = *(_QWORD *)(a2 + 24);
    if ( v20 )
    {
      if ( *(_WORD *)(v20 + 6) )
      {
        v21 = *(_QWORD *)(v20 + 16);
        if ( v21 )
        {
          if ( MuiImpersonation < v17 )
          {
            if ( *(_WORD *)(v20 + 6) > 1u )
            {
              v11 = 1;
            }
            else if ( (*(_BYTE *)v21 & 1) == 0 )
            {
              v36 = 0;
              do
              {
                v37 = v36 + 1;
                if ( ((*(_WORD *)(v21 + 8) >> (2 * v3)) & 3) == 0 )
                  v37 = v36;
                ++v3;
                v36 = v37;
              }
              while ( v3 < 3 );
              updated = 0;
              v11 = v37 > 1;
            }
            v27 = NtCurrentTeb();
            v28 = v27->WowTebOffset;
            if ( v28 < 0 )
              LODWORD(v27) = v28 + (_DWORD)v27;
            v29 = NtCurrentTeb();
            v30 = v29->WowTebOffset;
            if ( (int)v30 < 0 )
              v29 = (struct _TEB *)((char *)v29 + v30);
            v31 = NtCurrentTeb();
            v32 = v31->WowTebOffset;
            if ( (_DWORD)v27 == LODWORD(v29->NtTib.SubSystemTib) )
            {
              if ( (int)v32 < 0 )
                v31 = (struct _TEB *)((char *)v31 + v32);
              HIDWORD(v31->glDispatchTable[186]) = v17;
            }
            else
            {
              if ( (int)v32 < 0 )
                v31 = (struct _TEB *)((char *)v31 + v32);
              v31->MuiImpersonation = v17;
            }
            if ( v11 )
              goto LABEL_38;
          }
          if ( !UserPrefLanguages )
          {
LABEL_44:
            if ( !a1 && !v10 )
            {
              v34 = 1;
              if ( !v9 )
              {
LABEL_47:
                updated = InitializeUserOrMachineLangList(a2, 1, (unsigned int)&v39, 3 - (unsigned int)(a1 != 0), v34);
                if ( updated >= 0 )
                {
                  v35 = v39;
                  if ( v39 )
                  {
                    if ( a1 )
                      *(_DWORD *)(v39 + 40) |= 0x20u;
                    else
                      *(_DWORD *)(v39 + 40) |= 0x10u;
                    if ( v10 )
                      *(_DWORD *)(v35 + 40) |= 2u;
                    if ( v9 )
                      *(_DWORD *)(v35 + 40) |= 4u;
                    if ( v10 || v9 )
                      *(_DWORD *)(v35 + 40) |= v7;
                    updated = RtlpUpdateTEBLanguage(v35, 0LL, 4LL);
                  }
                  if ( v11 )
                  {
                    v38 = RtlpLoadLanguageConfigList(8LL, &v40, a2);
                    updated = v38;
                    if ( v38 >= 0 )
                      return (unsigned int)RtlpUpdateTEBLanguage(0LL, v40, 5LL);
                  }
                }
                return (unsigned int)updated;
              }
            }
LABEL_61:
            v34 = 0;
            goto LABEL_47;
          }
          if ( *(_QWORD *)UserPrefLanguages )
          {
            v22 = *(_QWORD *)(*(_QWORD *)UserPrefLanguages + 16LL);
            if ( v22 )
            {
              if ( *(_DWORD *)(v22 + 12) < *(_DWORD *)(a2 + 12) )
              {
LABEL_38:
                if ( UserPrefLanguages )
                {
                  v33 = *(_DWORD **)UserPrefLanguages;
                  if ( *(_QWORD *)UserPrefLanguages )
                  {
                    v10 = (v33[10] & 2) != 0;
                    v9 = (v33[10] & 4) != 0;
                    if ( (v33[10] & 2) != 0 || (v33[10] & 4) != 0 )
                      v7 = v33[10] & 0xFFFF0000;
                    RtlpMuiRegFreeLanguageList(v33);
                    *(_QWORD *)UserPrefLanguages = 0LL;
                  }
                }
                if ( NtCurrentTeb()->MergedPrefLanguages )
                  *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) = *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages
                                                                          + 10) | 0x80;
              }
            }
          }
          if ( UserPrefLanguages )
          {
            v23 = *(_DWORD **)UserPrefLanguages;
            if ( *(_QWORD *)UserPrefLanguages )
            {
              v24 = v23[10];
              if ( a1 )
                v25 = (v24 & 0x20) == 0;
              else
                v25 = (v24 & 0x10) == 0;
              if ( !v25 )
                return (unsigned int)updated;
              if ( (v24 & 2) != 0 )
                v10 = 1;
              if ( (v24 & 4) != 0 )
                v9 = 1;
              if ( v10 || v9 )
                v7 = v24 & 0xFFFF0000;
              RtlpMuiRegFreeLanguageList(v23);
              *(_QWORD *)UserPrefLanguages = 0LL;
              if ( NtCurrentTeb()->MergedPrefLanguages )
              {
                RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
                NtCurrentTeb()->MergedPrefLanguages = 0LL;
              }
            }
          }
          if ( v11 )
            goto LABEL_61;
          goto LABEL_44;
        }
      }
    }
  }
  return 3221225485LL;
}
