/*
 * XREFs of ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00A6EE4
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C00A6BF0 (UmfdLoadFontFileView.c)
 *     GreMakeFontDir @ 0x1C02BB588 (GreMakeFontDir.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C2590 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C00A6FC8 (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00A70D4 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BD148 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BD17C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall UmfdInsertFontFileViewForLookup(struct _FONTFILEVIEW **a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v5; // ebx
  struct _FONTFILEVIEW **v6; // rax
  struct _FONTFILEVIEW *v7; // rcx
  __int64 v8; // rsi
  struct _FONTFILEVIEW **v9; // r14
  unsigned int v10; // ebp
  bool v11; // zf
  unsigned int v12; // eax
  __int64 v13; // rdx
  char v15; // [rsp+60h] [rbp+18h] BYREF
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v5 = 1;
  if ( !a2 )
  {
LABEL_5:
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v15, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
    if ( UmfdFileviewLookup )
    {
      v8 = 0LL;
      if ( !a2 )
      {
LABEL_15:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v15);
        return v5;
      }
      v9 = a1;
LABEL_8:
      v10 = g_UmfdFileViewKey;
      while ( 1 )
      {
        v11 = g_UmfdFileViewKey == -1;
        v12 = ++g_UmfdFileViewKey;
        if ( v11 )
        {
          g_UmfdFileViewKey = 1;
          v12 = 1;
        }
        if ( v10 == v12 )
          break;
        if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(
                                 v7,
                                 &g_UmfdFileViewKey,
                                 &v16) )
        {
          if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Insert(
                                   v7,
                                   v13,
                                   &a1[v8]) )
            break;
          v7 = *v9;
          v8 = (unsigned int)(v8 + 1);
          ++v9;
          *((_DWORD *)v7 + 16) = g_UmfdFileViewKey;
          if ( (unsigned int)v8 < a2 )
            goto LABEL_8;
          goto LABEL_15;
        }
      }
    }
    v5 = 0;
    goto LABEL_15;
  }
  v6 = a1;
  while ( *v6 )
  {
    ++v2;
    ++v6;
    if ( v2 >= a2 )
      goto LABEL_5;
  }
  return 0LL;
}
