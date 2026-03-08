/*
 * XREFs of ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C01188EC
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C011859C (UmfdLoadFontFileView.c)
 *     GreMakeFontDir @ 0x1C02D77CC (GreMakeFontDir.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02E2AF8 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00D7674 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1C0118548 (-LowerBound@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C0118C4C (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall UmfdInsertFontFileViewForLookup(struct _FONTFILEVIEW **a1, unsigned int a2)
{
  unsigned int v2; // r8d
  struct _FONTFILEVIEW **v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  int *v12; // rbx
  struct _FONTFILEVIEW **v13; // r12
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rdi
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rax
  bool v19; // bp
  struct _FONTFILEVIEW *v20; // rcx
  __int64 v22; // r8
  _DWORD *v23; // rdx
  int v24; // [rsp+68h] [rbp+10h]
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v5 = a1;
    while ( *v5 )
    {
      ++v2;
      ++v5;
      if ( v2 >= a2 )
        goto LABEL_5;
    }
    return 0LL;
  }
LABEL_5:
  v7 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v8 = v7 == -23464;
  v9 = v7 + 23464;
  v25 = v9;
  if ( !v8 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
  }
  v10 = *(_QWORD *)(SGDGetSessionState(v6) + 32);
  if ( !*(_QWORD *)(v10 + 23472) )
  {
LABEL_32:
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v25);
    return 0LL;
  }
  v11 = 0LL;
  if ( a2 )
  {
    v12 = (int *)(v10 + 23456);
    v13 = a1;
LABEL_10:
    v14 = *v12;
    v24 = *v12;
    while ( 1 )
    {
      v8 = (*v12)++ == -1;
      v15 = *v12;
      if ( v8 )
      {
        *v12 = 1;
        v15 = 1;
      }
      if ( v14 == v15 )
        goto LABEL_32;
      v16 = *(_QWORD *)(v10 + 23472);
      while ( 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 24));
        if ( !*(_DWORD *)(v16 + 28) )
          break;
        NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v16);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v16, 0LL);
        ExReleasePushLockSharedEx(v16, 0LL, v22);
        KeLeaveCriticalRegion();
      }
      v17 = *(_QWORD *)(v16 + 40);
      v19 = 0;
      if ( v17 )
      {
        v18 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(v16, (_DWORD *)(v10 + 23456));
        if ( v18 < v17 )
        {
          v23 = (_DWORD *)(16 * v18 + *(_QWORD *)(v16 + 48));
          if ( *v23 == *v12 )
          {
            if ( v23 )
              v19 = 1;
          }
        }
      }
      NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v16);
      v14 = v24;
      if ( !v19 )
      {
        if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Insert(
                                 *(_QWORD *)(v10 + 23472),
                                 v10 + 23456,
                                 &a1[v11]) )
          goto LABEL_32;
        v20 = *v13;
        v11 = (unsigned int)(v11 + 1);
        ++v13;
        *((_DWORD *)v20 + 16) = *v12;
        if ( (unsigned int)v11 >= a2 )
        {
          v9 = v25;
          break;
        }
        goto LABEL_10;
      }
    }
  }
  if ( v9 )
  {
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  return 1LL;
}
